#include "students.h"
#include "ui_students.h"
#include "customtabstyle.h"
#include <QTabWidget>
#include "nwid.h"
#include "global.h"
#include "assignment.h"


students::students(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::students)
{
    ui->setupUi(this);
    ui->s_tabWidget->setStyle(new CustomTabStyle);
    ui->s_tabWidget->setStyleSheet("QTabBar::tab { width: 50px; height: 105px; }");
    loadStudentDetails();

    getAssignments();


    loadClasses();
    loadSubjects();
    submitPage();



    QTimer *timer = new QTimer(this);

    QObject::connect(timer, SIGNAL(timeout()), this, SLOT(loadMessages()));

    timer->start(2000);

    students::loadMessages();

}

students::~students()
{
    delete ui;
}



void students::getAssignments(){

    ui->scrollArea_2->setWidgetResizable(true);


    QWidget* containerWidget = new QWidget(ui->scrollArea_2);
    QVBoxLayout* containerLayout = new QVBoxLayout(containerWidget);
    containerLayout->setSpacing(0);
    containerLayout->setContentsMargins(0, 0, 0, 0);


    QSqlQuery query;
    query.prepare("SELECT * FROM assignments WHERE student_id = :userid AND submitted = false");
    query.bindValue(":userid", UserID);
    if(query.exec()){
        while(query.next()){
            QString startDate = query.value("start_date").toString();
            QString DueDate = query.value("due_date").toString();
            QString title = query.value("assignment_title").toString();
            QByteArray file = query.value("content_data").toByteArray();

            assignment *ass = new assignment;
            ass->loadAssignmentDetails(startDate, DueDate, title, file);

            containerLayout->addWidget(ass);

        }
    } else {
        QMessageBox::critical(this, tr("Database Error"), tr("students - getAssignments"));
    }

    ui->scrollArea_2->setWidget(containerWidget);

}

void students::loadStudentDetails(){
    ui->profileAge_lineEdit_6->setText(Age);
    ui->profileID_lineEdit_7->setText(UserID);
    ui->profileName_lineEdit_8->setText(Fullname);
    QPixmap pp;
    pp.loadFromData(ProfilePictureData, "JPG");
    ui->profileImage_label_10->setPixmap(pp);


}


void students::loadSubjects(){
    QSqlQuery getSubjects;
    getSubjects.prepare("SELECT subject FROM teachers JOIN "
                       "teachersstudent ON teachersstudent.teacher_id = teachers.id WHERE student_id = :studentid");
    getSubjects.bindValue(":studentid", UserID);

    if(getSubjects.exec()){
        while(getSubjects.next()){
            ui->gradesSubject_comboBox->addItem(getSubjects.value("subject").toString());
        }
    } else {
        QMessageBox::critical(this, tr("Database Error"), tr("students - getClasses"));
    }

}

void students::loadMessages(){
    ui->scrollArea->setWidgetResizable(true);


    QWidget* containerWidget = new QWidget(ui->scrollArea);
    QVBoxLayout* containerLayout = new QVBoxLayout(containerWidget);
    containerLayout->setSpacing(0);
    containerLayout->setContentsMargins(0, 0, 0, 0);

    QSqlQuery getMessageDetails;
    getMessageDetails.prepare("WITH ranked_messages AS ("
                              "SELECT *, ROW_NUMBER() OVER ( "
                              "PARTITION BY CASE WHEN from_id < to_id THEN from_id ELSE to_id END, "
                              "CASE WHEN from_id < to_id THEN to_id ELSE from_id END ORDER BY message_id )"
                              " AS row_num FROM messages "
                              "WHERE from_id = :userid OR to_id = :userid) "
                              "SELECT rm.from_id, from_users.fullname AS from_fullname, rm.to_id, "
                              "to_users.fullname AS to_fullname, rm.message, rm.message_read "
                              "FROM ranked_messages rm "
                              "LEFT JOIN users AS from_users ON rm.from_id = from_users.user_id "
                              "LEFT JOIN users AS to_users ON rm.to_id = to_users.user_id WHERE rm.row_num = 1");

    getMessageDetails.bindValue(":userid", UserID);
    if(getMessageDetails.exec()){


        while(getMessageDetails.next()){
            nwid *message = new nwid;
            QString id;
            QString name;

            if(getMessageDetails.value("from_id").toString() == UserID){
                id = getMessageDetails.value("to_id").toString();
                name = getMessageDetails.value("to_fullname").toString();
            } else {
                id = getMessageDetails.value("from_id").toString();
                name = getMessageDetails.value("from_fullname").toString();
            }

            bool read = getMessageDetails.value("message_read").toBool();

            message->setDetails(name, id, read);


            QSqlQuery getPic;
            getPic.prepare("SELECT profile_pic_data FROM users WHERE user_id = :userid");
            getPic.bindValue(":userid", id);
            getPic.exec();
            QByteArray pic = getPic.value("profile_pic_data").toByteArray();
            QPixmap chatPic;
            chatPic.loadFromData(pic, "JPG");
            message->setPic(chatPic);

            containerLayout->addWidget(message);
        }


    } else {
        QMessageBox::critical(this, tr("Database Error"), getMessageDetails.lastError().text());
    }



    containerLayout->insertStretch( -1, 1 );

    ui->scrollArea->setWidget(containerWidget);


}

void students::loadClasses(){
    QSqlQuery getClasses;
    getClasses.prepare("SELECT fullname, subject FROM teachers JOIN "
                       "teachersstudent ON teachersstudent.teacher_id = teachers.id WHERE student_id = :studentid");
    getClasses.bindValue(":studentid", UserID);

    if(getClasses.exec()){
        while(getClasses.next()){
            ui->classes_listWidget->addItem(getClasses.value("subject").toString() + " - " + getClasses.value("fullname").toString());
        }
    } else {
        QMessageBox::critical(this, tr("Database Error"), tr("students - getClasses"));
    }

}


void students::submitPage(){
    QSqlQuery loadSubmitDetails;
    loadSubmitDetails.prepare("SELECT subject, assignment_title FROM assignments"
                              " WHERE student_id = :studid AND submitted = false");
    loadSubmitDetails.bindValue(":studid", UserID);

    if(loadSubmitDetails.exec()){
        while(loadSubmitDetails.next()){
            ui->submit_comboBox_3->addItem(loadSubmitDetails.value("subject").toString() + " - " + loadSubmitDetails.value("assignment_title").toString());
        }
    } else {
        QMessageBox::critical(this, tr("Database Error"), loadSubmitDetails.lastError().text());
    }


}


void students::closeEvent(QCloseEvent *event) {
    QSqlDatabase db = QSqlDatabase::database();
    db.close();
    QSqlDatabase::removeDatabase(QSqlDatabase::defaultConnection);

    // Exit the application
    QApplication::quit();

    // Call the base class closeEvent to ensure proper handling of the event
    QMainWindow::closeEvent(event);
}

void students::on_gradesGet_pushButton_clicked()
{
    QString gradeSubject = ui->gradesSubject_comboBox->currentText();
    QString type = ui->testOrAss_comboBox_2->currentText();
    QSqlQueryModel *getgrades = new QSqlQueryModel(this);
    if(type == "Test"){
        QSqlQuery getGrades;
        getGrades.prepare("SELECT test_title AS Test, grade AS Grade FROM tests WHERE student_id = :studentid AND subject = :subject");
        getGrades.bindValue(":studentid", UserID);
        getGrades.bindValue(":subject", gradeSubject);
        getGrades.exec();
        getgrades->setQuery(std::move(getGrades));
        ui->grades_tableView->setModel(getgrades);

    } else {
        QSqlQuery getGrades;
        getGrades.prepare("SELECT assignment_title AS Assignment, grade AS Grade "
                          "FROM assignments"
                          " WHERE student_id = :studentid AND subject = :subject");
        getGrades.bindValue(":studentid", UserID);
        getGrades.bindValue(":subject", gradeSubject);
        getGrades.exec();
        getgrades->setQuery(std::move(getGrades));
        ui->grades_tableView->setModel(getgrades);
    }



}



void students::on_assignmentfile_toolButton_clicked()
{
    assignmentPath = QFileDialog::getOpenFileName(this, tr("Select File"), QCoreApplication::applicationDirPath(), tr("PDF Files (*.pdf)"));
    ui->assignmentPath_lineEdit_10->setText(assignmentPath);
    QFile assignmentFile = assignmentPath;
    if (!assignmentFile.open(QIODevice::ReadOnly)) {
        QMessageBox::critical(this, tr("Upload Failed"), tr("Failed to open file"));
        return;
    }

    fileData = assignmentFile.readAll();
    assignmentFile.close();


    mimeType = "application/pdf";
}
void students::on_assignmentSubmit_pushButton_3_clicked()
{
    QString currentText = ui->submit_comboBox_3->currentText();
    QStringList subject_assTitle = currentText.split(" - ");
    if(currentText.isEmpty() && fileData.isEmpty()){
        QMessageBox::information(this, tr("Input Error"), tr("Some fields are empty"));
        return;
    }

    QSqlQuery submitAssignment;
    submitAssignment.prepare("INSERT INTO assignments(submittedfile_data, submittedfile_type, submitted) VALUES(:data, :type, 1) "
                             "WHERE assignment_title = :assTitle AND student_id = :studentid AND subject = :subject");
    submitAssignment.bindValue(":data", fileData);
    submitAssignment.bindValue(":type", mimeType);
    submitAssignment.bindValue(":assTitle", subject_assTitle.last());
    submitAssignment.bindValue(":studentid", UserID);
    submitAssignment.bindValue(":subject", subject_assTitle.first());
    if(submitAssignment.exec()){
        QMessageBox::information(this, tr("Submit Success"), tr("Your assignment has been submitted"));
    } else {
        QMessageBox::information(this, tr("Database Error"), tr("Your assignment was not submitted"));
    }


}


void students::on_pushButton_5_clicked()
{
    messageto = new newmessage();
    messageto->show();
}


void students::on_commandLinkButton_clicked()
{
    hide();
    mainwindow = new MainWindow();
    mainwindow->show();
}

