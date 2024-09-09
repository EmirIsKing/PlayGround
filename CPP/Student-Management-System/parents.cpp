#include "parents.h"
#include "ui_parents.h"
#include "global.h"
#include "nwid.h"
#include <QSqlQuery>
#include <QSqlQueryModel>

parents::parents(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::parents)
{
    ui->setupUi(this);

    QTimer *timer = new QTimer(this);

    QObject::connect(timer, SIGNAL(timeout()), this, SLOT(loadMessages()));

    timer->start(2000);

    parents::loadMessages();
    loadChildProfile();
    teachers();

}


void parents::loadChildProfile(){
    QSqlQuery getChildProfile;
    getChildProfile.prepare("SELECT * FROM students WHERE id = :id");
    getChildProfile.bindValue(":id", ChildId);
    if(getChildProfile.exec()){
        if(getChildProfile.next()){
            QString cAge = getChildProfile.value("age").toString();
            QString cName = getChildProfile.value("fullname").toString();
            QByteArray pp = getChildProfile.value("profile_pic_data").toByteArray();
            ui->childAge_lineEdit_6->setText(cAge);
            ui->childName_lineEdit_8->setText(cName);


            QPixmap profilePicture;
            profilePicture.loadFromData(pp, "JPG");
            ui->childPP_label_10->setPixmap(profilePicture);
            ui->childID_lineEdit_7->setText(ChildId);

        }
    }


}


parents::~parents()
{
    delete ui;
}


void parents::loadMessages(){
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


void parents::closeEvent(QCloseEvent *event) {
    QSqlDatabase db = QSqlDatabase::database();
    db.close();
    QSqlDatabase::removeDatabase(QSqlDatabase::defaultConnection);

    // Exit the application
    QApplication::quit();

    // Call the base class closeEvent to ensure proper handling of the event
    QMainWindow::closeEvent(event);
}

void parents::on_pushButton_6_clicked()
{
    messageto = new newmessage();
    messageto->show();
}

void parents::teachers(){
    QSqlQuery selectTeachers;
    selectTeachers.prepare("SELECT id, fullname FROM teachers");
    if(selectTeachers.exec()){
        while(selectTeachers.next()){
            QString name = selectTeachers.value("fullname").toString();
            QString id = selectTeachers.value("id").toString();
            ui->selectTeacher_comboBox->addItem(name + " - " + id);
        }
    }
}



void parents::on_getGrades_pushButton_4_clicked()
{
    QString type = ui->gradeType_comboBox_6->currentText();
    QSqlQueryModel *getgrades = new QSqlQueryModel(this);
    if(type == "Assignment"){
        QSqlQuery getGrades;
        getGrades.prepare("SELECT subject AS Subject, assignment_title AS Assignment, grade AS Grade FROM assignments WHERE student_id = :id");
        getGrades.bindValue(":id", ChildId);
        if(!getGrades.exec()){
            QMessageBox::critical(this, tr("Database Error"), tr("parents - getGrades error"));
            return;
        }
        getgrades->setQuery(std::move(getGrades));
        ui->tableView_2->setModel(getgrades);
    } else {
        QSqlQuery getGrades;
        getGrades.prepare("SELECT subject AS Subject, test_title AS Test, grade AS Grade FROM tests WHERE student_id = :id");
        getGrades.bindValue(":id", ChildId);
        if(!getGrades.exec()){
            QMessageBox::critical(this, tr("Database Error"), tr("parents - getGrades error"));
            return;
        }
        getgrades->setQuery(std::move(getGrades));
        ui->tableView_2->setModel(getgrades);
    }


}


void parents::on_selectTeacher_comboBox_currentTextChanged(const QString &arg1)
{
    QString item = arg1;
    QStringList nameID = item.split(" - ");
    QSqlQuery getTeacher;
    getTeacher.prepare("SELECT * FROM teachers WHERE id = :id");
    QString teachid = nameID.last();
    getTeacher.bindValue(":id", teachid);
    if(getTeacher.exec()){
        if(getTeacher.next());
        ui->teacherid_lineEdit_5->setText(nameID.last());
        ui->teacherName_lineEdit_2->setText(getTeacher.value(3).toString());
        ui->teacherPhone_lineEdit_12->setText("0" + getTeacher.value("phone_number").toString());
        ui->teacherSubject_lineEdit_4->setText(getTeacher.value("subject").toString());
        QByteArray pp = getTeacher.value("profile_pic_data").toByteArray();
        QPixmap pic;
        pic.loadFromData(pp, "JPG");
        ui->teacherPP_label_4->setPixmap(pic);

    }
}


void parents::on_commandLinkButton_clicked()
{
    hide();
    mainwindow = new MainWindow();
    mainwindow->show();
}

