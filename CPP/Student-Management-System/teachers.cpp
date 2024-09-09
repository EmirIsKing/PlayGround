#include "teachers.h"
#include "ui_teachers.h"
#include "customtabstyle.h"
#include <QTabWidget>
#include "global.h"
#include <QSqlQueryModel>
#include <QStandardItemModel>
#include <QStringList>
#include <QListWidgetItem>
#include <QFileInfo>
#include "nwid.h"
#include <QSpacerItem>
#include <QDesktopServices>



teachers::teachers(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::teachers)
{

    ui->setupUi(this);
    ui->tabWidget->setStyle(new CustomTabStyle);
    ui->tabWidget->setStyleSheet("QTabBar::tab { width: 50px; height: 105px; }");
    ui->tabWidget_2->setStyleSheet("QTabBar::tab { width: 50px; height: 80px; }");

   teachers::loadStudents();
   teachers::loadTests();
   teachers::loadAssignmentStudents();

   QSqlQuery getAssTitle;
   getAssTitle.prepare("SELECT assignment_title FROM createassignment");
   if(getAssTitle.exec()){
       while(getAssTitle.next()){
           ui->assignment_comboBox_5->addItem(getAssTitle.value("assignment_title").toString());
       }
   }



   QPixmap ProfilePicture;
   ProfilePicture.loadFromData(ProfilePictureData, "JPG");
   ui->profilepicture->setPixmap(ProfilePicture);

   ui->mypID->setText(UserID);
   ui->mypName->setText(Fullname);
   ui->mypPhoneNumber->setText("0" + PhoneNumber);
   ui->mypSubject->setText(Subject);


    ui->label_10->hide();
    ui->toolButton->hide();


    students();
   listStudent();



   ui->Start_dateTimeEdit->setDateTime(QDateTime::currentDateTime());
   ui->End_dateTimeEdit_2->setDateTime(QDateTime::currentDateTime().addDays(2));

   QTimer *timer = new QTimer(this);

   QObject::connect(timer, SIGNAL(timeout()), this, SLOT(loadMessages()));

   timer->start(1000);

   teachers::loadMessages();




}

void teachers::students(){
    QSqlQuery selectStudent;
    selectStudent.prepare("SELECT id, fullname FROM students");
    if(selectStudent.exec()){
        while(selectStudent.next()){
            QString name = selectStudent.value("fullname").toString();
            QString id = selectStudent.value("id").toString();
            ui->selectStudent_combo1->addItem(name + " - " + id);
        }
    }
}


void teachers::listStudent(){
    QSqlQuery listStudent;

    listStudent.prepare("SELECT fullname, id FROM students");
    if(!listStudent.exec()){
        QMessageBox::warning(this, tr("Database Error"), listStudent.lastError().text());
        return;
    }
    while(listStudent.next()){
        ui->gradeTest_listWidget_2->addItem(listStudent.value("fullname").toString() + " - " + listStudent.value("id").toString());
    }

}


teachers::~teachers()
{
    delete ui;
}

void teachers::loadMessages(){
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

void teachers::closeEvent(QCloseEvent *event) {
    QSqlDatabase db = QSqlDatabase::database();
    db.close();
    QSqlDatabase::removeDatabase(QSqlDatabase::defaultConnection);

    // Exit the application
    QApplication::quit();

    // Call the base class closeEvent to ensure proper handling of the event
    QMainWindow::closeEvent(event);
}



void teachers::on_addStudent_pushButton_clicked()
{
    QString addStudent = ui->addStudent_lineEdit->text();
    QSqlQuery studentAdder;

    QSqlQuery qry;
    qry.prepare("SELECT 1 FROM teachersstudent WHERE student_id = :studentid AND teacher_id = :teachid");
    qry.bindValue(":studentid", addStudent);
    qry.bindValue(":teachid", UserID);
    if(!qry.exec()){
        QMessageBox::critical(this, tr("Database Error"), qry.lastError().text());
        return;
    }

    if(qry.next()) {
        QMessageBox::warning(this, tr("Input Error"), tr("Student has already been added."));
        return;
    }

    QSqlQuery studentChecker;

    studentChecker.prepare("SELECT COUNT(*) FROM students WHERE id = :studentid");
    studentChecker.bindValue(":studentid", addStudent);
    if(!studentChecker.exec()) {
        QMessageBox::critical(this, tr("Database Error"), studentChecker.lastError().text());
        return;
    }


    studentChecker.next();
    int studentCount = studentChecker.value(0).toInt();
    if(studentCount == 0) {
        QMessageBox::information(this, tr("Input Error"), tr("Student does not exist"));
        return;
    }


    if(!qry.next()){
    studentAdder.prepare("INSERT INTO teachersstudent VALUES(:teachid, :studentid)");
    studentAdder.bindValue(":studentid", addStudent);
    studentAdder.bindValue(":teachid", UserID);


    if(!studentAdder.exec()){
        QMessageBox::critical(this, tr("Database Error"), studentAdder.lastError().text());
        }

    } else {
        QMessageBox::warning(this, tr("Input Error"), tr("Student has already been added."));
    }
    teachers::loadStudents();
    teachers::loadAssignmentStudents();
}


void teachers::on_studentlist_tableView_doubleClicked(const QModelIndex &index)
{
    if (!index.isValid()) {
        return;
    }

    int studentIdColumn = 1;
    QString studentId = ui->studentlist_tableView->model()->data(ui->studentlist_tableView->model()->index(index.row(), studentIdColumn)).toString();


    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, tr("Delete Student"), tr("Are you sure you want to delete this student?"),
                                  QMessageBox::Yes | QMessageBox::No);
    if (reply == QMessageBox::Yes) {

        QSqlQuery query;
        query.prepare("DELETE FROM teachersstudent WHERE student_id = :studentId AND teacher_id = :teachid");
        query.bindValue(":studentId", studentId);
        query.bindValue(":teachid", UserID);

        if (!query.exec()) {
            QMessageBox::critical(this, tr("Database Error"), query.lastError().text());
            return;
        }
    }
    teachers::loadStudents();
    teachers::loadAssignmentStudents();
    listStudent();
    students();
}

    void teachers::loadStudents()
    {
    QSqlQueryModel *mystudents = new QSqlQueryModel(this);
    QSqlQuery listmystudents;

    listmystudents.prepare("SELECT fullname AS Name, id AS 'Student ID' FROM students JOIN "
                           "teachersstudent ON teachersstudent.student_id = students.id WHERE teacher_id = :teachid");
    listmystudents.bindValue(":teachid", UserID);


    if(listmystudents.exec()){
        mystudents->setQuery(std::move(listmystudents));

        ui->studentlist_tableView->setModel(mystudents);
    } else {
        QMessageBox::critical(this, tr("Database Error"), listmystudents.lastError().text());
    }
}


void teachers::loadAssignmentStudents(){
   // QSqlQueryModel *mystudents = new QSqlQueryModel(this);
    QSqlQuery listmystudents;

    listmystudents.prepare("SELECT fullname, id FROM students JOIN "
                           "teachersstudent ON teachersstudent.student_id = students.id WHERE teacher_id = :teachid");
    listmystudents.bindValue(":teachid", UserID);


    if(listmystudents.exec()){
       // mystudents->setQuery(std::move(listmystudents));

        while(listmystudents.next()){
           ui->assignmentWidget_listWidget->addItem(listmystudents.value("fullname").toString() + " - " + listmystudents.value("id").toString());
       }


    } else {
        QMessageBox::critical(this, tr("Database Error"), listmystudents.lastError().text());
    }
}

    void teachers::loadTests(){
        ui->testTitle_comboBox->clear();
        QSqlQuery getTests;

        getTests.prepare("SELECT test_title FROM testbyteachers");
        if(getTests.exec()){
            QStringList testTitle;
            while(getTests.next()){
                QString ttl = getTests.value("test_title").toString();
                ui->testTitle_comboBox->addItem(ttl);
            }
            testTitle.clear();
        } else {
            QMessageBox::critical(this, tr("Database Error"), getTests.lastError().text());
        }
    }





void teachers::on_mypEditbutton_clicked()
{
    ui->mypName->setReadOnly(false);
    ui->mypPhoneNumber->setReadOnly(false);
    ui->mypSubject->setReadOnly(false);
    ui->mypEditbutton->setEnabled(false);
    ui->mypSavebutton->setEnabled(true);
    ui->label_10->show();
    ui->toolButton->show();
}




QByteArray newProfilepic = ProfilePictureData;

void teachers::on_mypSavebutton_clicked()
{
    QString newName = ui->mypName->text();
    QString newPhoneNumber = ui->mypPhoneNumber->text();
    QString newSubject = ui->mypSubject->text();


    QSqlQuery newDetails;
    newDetails.prepare("UPDATE teachers SET fullname = :newFullname, phone_number = :newPhoneNumber,"
                       " subject = :newSubject, profile_pic_data = :profile WHERE id = :Userid");
    newDetails.bindValue(":newFullname", newName);
    newDetails.bindValue(":newPhoneNumber", newPhoneNumber);
    newDetails.bindValue(":newSubject", newSubject);
    newDetails.bindValue(":Userid", UserID);
    newDetails.bindValue(":profile", newProfilepic);


    if(!newDetails.exec()){
        QMessageBox::critical(this, tr("DataBase Error"), newDetails.lastError().text());
        return;
    }

    QSqlQuery newDetailsUsers;
    newDetailsUsers.prepare("UPDATE users(fullname) VALUES(:newUsername) WHERE user_id = :userid");

    newDetailsUsers.bindValue(":newUsername", newName);
    newDetailsUsers.bindValue(":userid", UserID);

    ui->mypName->setReadOnly(true);
    ui->mypPhoneNumber->setReadOnly(true);
    ui->mypSubject->setReadOnly(true);
    ui->mypEditbutton->setEnabled(true);
    ui->mypSavebutton->setEnabled(false);
    ui->label_10->hide();
    ui->toolButton->hide();
}


void teachers::on_selectStudent_combo1_currentIndexChanged(int index)
{
    if (index != -1) {
        QString selectedStudent = ui->selectStudent_combo1->currentText();
        QStringList parts = selectedStudent.split(" - ");
        if (parts.size() > 1) {
            QString studentId = parts.last();

            QSqlQuery studentRetrieve;
            studentRetrieve.prepare("SELECT * FROM students WHERE id = :id");
            studentRetrieve.bindValue(":id", studentId);
            if(studentRetrieve.exec()){
                if(studentRetrieve.next()){
                    QString name = studentRetrieve.value(2).toString();
                    ui->nameRetrieve->setText(name);
                    QString age = studentRetrieve.value(5).toString();
                    ui->ageRetrieve->setText(age);
                    QString studentidRetrieved = studentRetrieve.value(1).toString();
                    ui->studentIdRetrieve->setText(studentidRetrieved);
                    QByteArray studentProfilePicture = QByteArray::fromBase64(studentRetrieve.value("profile_pic_data").toByteArray());
                    QPixmap stProfilePic;
                    stProfilePic.loadFromData(studentProfilePicture, "JPG");
                    ui->studenProfilePic->setPixmap(stProfilePic);
                } else {
                    QMessageBox::critical(this, tr("No record found"), tr("Student Not Found"));
                }
            } else {
                QMessageBox::critical(this, tr("Database Error"), studentRetrieve.lastError().text());
            }




        }
    }
}


void teachers::on_grade_pushButton_4_clicked()
{
    QListWidgetItem *sStudent = ui->gradeTest_listWidget_2->currentItem();

    if (!sStudent) {
        QMessageBox::information(this, tr("Input Error"), tr("No student selected."));
        return;
    }

    QString selectedStudent = sStudent->text();
    QString selectedGrade = ui->gradeAssign_comboBox_2->currentText();
    QString selectedTest = ui->testTitle_comboBox->currentText();

    if(selectedGrade.isEmpty() || selectedStudent.isEmpty() || selectedTest.isEmpty()){
        QMessageBox::information(this, tr("Input Error"), tr("All fields are required"));
        return;
    }

    QStringList parts = selectedStudent.split(" - ");
    if(parts.size() > 1){

        QString selectedStudentID = parts.last();
        QSqlQuery studentGradeInsert;
        studentGradeInsert.prepare("INSERT INTO tests(test_title, student_id, teacher_id, grade, subject) VALUES(:title, :studentid, :teachid, :grade, :subject)");
        studentGradeInsert.bindValue(":title", selectedTest);
        studentGradeInsert.bindValue(":studentid", selectedStudentID);
        studentGradeInsert.bindValue(":teachid", UserID);
        studentGradeInsert.bindValue(":grade", selectedGrade);
        studentGradeInsert.bindValue(":subject", Subject);

        if(!studentGradeInsert.exec()){
            QMessageBox::critical(this, tr("Database Error"), studentGradeInsert.lastError().text());
        } else{
            QMessageBox msg;
            msg.setText("Student " + parts.last() + " has been graded.");
            msg.exec();
        }
    } else {
        QMessageBox::information(this, tr("Input Error"), tr("Student format is incorrect."));
    }
}


void teachers::on_createTest_pushButton_clicked()
{
    QString newTest = ui->createTest_lineEdit->text();
    QSqlQuery createTest;
    createTest.prepare("INSERT INTO testbyteachers VALUES(:title, :teachid)");
    createTest.bindValue(":title", newTest);
    createTest.bindValue(":teachid", UserID);
    if(!createTest.exec()){
        QMessageBox::critical(this, tr("Database Error"), createTest.lastError().text());
    }
    QMessageBox msgbox;
    msgbox.setText("Test '" + newTest + "' created Succesfully.");
    msgbox.exec();
    teachers::loadTests();
}

    QString mimeType;
    QString assignmentPath;
    QByteArray fileData;

void teachers::on_assignmentUpload_toolButton_clicked()
{
    assignmentPath = QFileDialog::getOpenFileName(this, tr("Select File"), QCoreApplication::applicationDirPath(), tr("PDF Files (*.pdf)"));
    ui->assignmentUpload_lineEdit_10->setText(assignmentPath);
    QFile assignmentFile = assignmentPath;
    if (!assignmentFile.open(QIODevice::ReadOnly)) {
        QMessageBox::critical(this, tr("Upload Failed"), tr("Failed to open file"));
        return;
    }

    fileData = assignmentFile.readAll();
    assignmentFile.close();

    QFileInfo fileInfo(assignmentPath);
    QString fileExtension = fileInfo.suffix();


    if (fileExtension == "doc") {
        mimeType = "application/msword";
    } else if (fileExtension == "docx") {
        mimeType = "application/vnd.openxmlformats-officedocument.wordprocessingml.document";
    } else if (fileExtension == "pdf"){
        mimeType = "application/pdf";
    }




}



void teachers::on_selectAllStudents_pushButton_6_clicked()
{
    ui->assignmentWidget_listWidget->selectAll();
}



void teachers::on_AssignmnetUpload_pushButton_7_clicked()
{
    QString assignmentTitle = ui->AssignmentUpload_lineEdit_11->text();
    QString startTime = ui->Start_dateTimeEdit->text();
    QString endTime = ui->End_dateTimeEdit_2->text();

    QStringList selectedStudents;
    QList<QListWidgetItem*> selectedItems = ui->assignmentWidget_listWidget->selectedItems();

    for (QListWidgetItem* item : selectedItems) {
        if (item) {
            selectedStudents.append(item->text());
        }
    }

    QSqlQuery uploadAssignment;
    for(size_t i =0; i < selectedStudents.size(); ++i){
        QString studentIDInsert = selectedStudents.at(i);
        QString assignmentStudentID = studentIDInsert.split(" - ").last();


        uploadAssignment.prepare("INSERT INTO assignments(teacher_id, student_id, submittedfile_data, content_type, assignment_title, start_date, due_date)"
                                 "VALUES(:teachid, :studentid, :contentdata, :contenttype, :assignmentTitle, :startdate, :duedate)");

        uploadAssignment.bindValue(":teachid", UserID);
        uploadAssignment.bindValue(":studentid", assignmentStudentID);
        uploadAssignment.bindValue(":contentdata", fileData);
        uploadAssignment.bindValue(":contenttype", mimeType);
        uploadAssignment.bindValue(":assignmentTitle", assignmentTitle);
        uploadAssignment.bindValue(":startdate", startTime);
        uploadAssignment.bindValue(":duedate", endTime);

        if(!uploadAssignment.exec()){
            QMessageBox::critical(this, tr("Upload Failed"), uploadAssignment.lastError().text());
            return;
        }
    }

    QMessageBox::information(this, tr("Upload Success"), tr("Assignment Uploaded."));
}




void teachers::on_assignment_comboBox_5_currentIndexChanged(int index)
{
    QString AssignmentTitle = ui->assignment_comboBox_5->currentText();
    QSqlQuery getAssignments;
    getAssignments.prepare("SELECT fullname, students.id FROM students "
                           "JOIN assignments "
                           "ON students.id = assignments.student_id "
                           "WHERE assignment_title = :assignment AND submitted = true");
    getAssignments.bindValue(":assignment", AssignmentTitle);

    if(getAssignments.exec()){
        while(getAssignments.next()){
            ui->assignmnetSubmitted_listWidget->addItem(getAssignments.value("fullname").toString() + " - " + getAssignments.value("students.id").toString());
        }
    } else {
        QMessageBox::critical(this, tr("Database Error"), getAssignments.lastError().text());
    }
}


void teachers::on_assignmnetSubmitted_listWidget_itemDoubleClicked(QListWidgetItem *item)
{

    QString studentItem = item->text();
    QString StudentId = studentItem.split(" - ").last();

    QSqlQuery getSubmit;
    QString tempFilePath = QDir(QCoreApplication::applicationDirPath()).filePath(studentItem + ".pdf");
    getSubmit.prepare("SELECT submittedfile_data FROM assignments WHERE student_id = :studentid");
    getSubmit.bindValue(":studentid", StudentId);
    if(getSubmit.exec()){
        if(getSubmit.next()){

            QByteArray filedata = getSubmit.value("submittedfile_data").toByteArray();
            QFile file(tempFilePath);
            if (!file.open(QIODevice::WriteOnly)) {
                QMessageBox::critical(nullptr, "File Error", "Cannot open file for writing");
                return;
            }
            file.write(filedata);
            file.close();

            if (!QDesktopServices::openUrl(QUrl::fromLocalFile(tempFilePath))) {
                QMessageBox::critical(nullptr, "File Error", "Cannot open file");
            }
    }else {
            QMessageBox::information(this, tr("No File"), tr("No subitted file found"));
        }


    }else{
        QMessageBox::critical(this, tr("Database Error"), getSubmit.lastError().text());
    }
}

void teachers::on_pushButton_5_clicked()
{
    messageto = new newmessage();
    messageto->show();
}


void teachers::on_toolButton_clicked()
{
    QString ImagePath = QFileDialog::getOpenFileName(this, tr("Select Image"), QCoreApplication::applicationDirPath(), tr("JPG Files (*.jpg)"));
    if (ImagePath.isEmpty()) {
        return;
    }

    QPixmap Image(ImagePath);
    if (Image.isNull()) {
        QMessageBox::warning(this, tr("Image Load Error"), tr("Failed to load the image."));
        return;
    }

    QBuffer ImageBufferData;

    if(ImageBufferData.open(QIODevice::ReadWrite)){
        Image.save(&ImageBufferData, "JPG");
        newProfilepic = ImageBufferData.buffer().toBase64();
    } else {
        QMessageBox::warning(this, tr("Buffer Error"), tr("Failed to open image buffer."));
    }
}


void teachers::on_gradeAAssignments_pushButton_clicked()
{
    QString assignmentTitle = ui->assignment_comboBox_5->currentText();
    QString grade = ui->gradeLevel_comboBox->currentText();
    QListWidgetItem *selectedItem = ui->assignmnetSubmitted_listWidget->selectedItems().first();
    QString studentid = selectedItem->text();
    QString studId = studentid.split(" - ").last();


    if(assignmentTitle.isEmpty() || grade.isEmpty() || studId.isEmpty()){
        QMessageBox::warning(this, tr("Missing Entry"), tr("Something is Missing"));
        return;
    }


    QSqlQuery gradeStudent;
    gradeStudent.prepare("INSERT INTO assignments(grade) VALUES(:grade) WHERE assignment_title = :AT AND teacher_id = :teachid AND student_id = :studid AND subject = :subject");
    gradeStudent.bindValue(":grade", grade);
    gradeStudent.bindValue(":AT", assignmentTitle);
    gradeStudent.bindValue(":teachid", UserID);
    gradeStudent.bindValue(":studid", studId);
    gradeStudent.bindValue(":subject", Subject);

    if(!gradeStudent.exec()){
        QMessageBox::critical(this, tr("Database Error"), tr("teachers - gradeStudents"));
        return;
    }

}


void teachers::on_commandLinkButton_clicked()
{
    hide();
    mainwindow = new MainWindow();
    mainwindow->show();
}

