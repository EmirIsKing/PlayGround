#include "MainWindow.h"
#include "ui_mainwindow.h"
#include "global.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
   // db.setConnectOptions("SSL_CERT=:/mysql-ssl-ca-cert.pem");
   // db.setConnectOptions("SSL_MODE=VERIFY_IDENTITY");
    db.setHostName("smsbyemir.zapto.org");
    db.setDatabaseName("sms");
    db.setUserName("sms");
    db.setPassword("password");
    db.setPort(3306);

    if (!db.open()) {
        QString error = db.lastError().text();
        ui->dbChecker->setText("Database Failed to connect: " + error);
        ui->dbChecker_2->setText("Database Failed to connect: " + error);
        ui->dbChecker_3->setText("Database Failed to connect: " + error);
        QMessageBox::critical(this, tr("Database Error"), db.lastError().text());
        return;
    } else {
        ui->dbChecker->setText("Database Connected");
        ui->dbChecker_2->setText("Database Connected");
        ui->dbChecker_3->setText("Database Connected");
    }


}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_6_clicked()
{
    hide();
    registrationpage = new regist();
    registrationpage->show();
}


void MainWindow::on_pushButton_4_clicked()
{
    hide();
    registrationpage = new regist();
    registrationpage->show();
}


void MainWindow::on_pushButton_2_clicked()
{
    hide();
    registrationpage = new regist();
    registrationpage->show();
}

void MainWindow::closeEvent(QCloseEvent *event) {
    // Close the database connection
    QSqlDatabase::database().close();

    // Call the base class closeEvent to ensure proper handling of the event
    QMainWindow::closeEvent(event);
}



void MainWindow::on_tLogin_clicked()
{

    QString Username = ui->tUsername->text();
    QString Password = ui->tPassword->text();
    int loginCount = 0;


    QSqlQuery login;
    login.prepare("SELECT * FROM teachers WHERE BINARY username = :username AND BINARY password = :password");
    login.bindValue(":username", Username);
    login.bindValue(":password", Password);

    if(login.exec()){
        if(login.next()){
        ++loginCount;
        }
    } else {
        QMessageBox::warning(this, tr("Database Error"), login.lastError().text());
        return;
    }

    if(loginCount == 1){
        UserID = login.value("id").toString();
        Fullname = login.value("fullname").toString();
        Subject = login.value("subject").toString();
        PhoneNumber = login.value("phone_number").toString();
        ProfilePictureData = QByteArray::fromBase64(login.value("profile_pic_data").toByteArray());
        //ProfilePicture.loadFromData(ProfilePictureData, "JPG");
        hide();
        teacherspage = new teachers();
        teacherspage->show();
        QMessageBox::information(this, tr("Login Success"), tr("Welcome %1").arg(Fullname));
    } else {
        QMessageBox::warning(this, tr("Incorrect Details"), tr("Wrong Username or Password!"));
    }
}


void MainWindow::on_sLogin_clicked()
{

    QString Username = ui->sUsername->text();
    QString Password = ui->sPassword->text();
    int loginCount = 0;


    QSqlQuery login;
    login.prepare("SELECT * FROM students WHERE BINARY username = :username AND BINARY password = :password");
    login.bindValue(":username", Username);
    login.bindValue(":password", Password);

    if(login.exec()){
        if(login.next()){
            ++loginCount;
        }
    } else {
        QMessageBox::warning(this, tr("Database Error"), tr("%1").arg(login.lastError().text()));
        return;
    }

    if(loginCount == 1){
        UserID = login.value(1).toString();
        Fullname = login.value(2).toString();
        Age = login.value(5).toString();
        ProfilePictureData = QByteArray::fromBase64(login.value(6).toByteArray());
        //ProfilePicture.loadFromData(ProfilePictureData, "JPG");
        hide();
        studentspage = new students();
        studentspage->show();
        QMessageBox::information(this, tr("Login Success"), tr("Welcome %1").arg(Fullname));
    } else {
        QMessageBox::warning(this, tr("Incorrect Details"), tr("Wrong Username or Password!"));
    }
}


void MainWindow::on_pLogin_clicked()
{


    QString Username = ui->pUsername->text();
    QString Password = ui->pPassword->text();
    int loginCount = 0;


    QSqlQuery login;
    login.prepare("SELECT * FROM parents WHERE BINARY username = :username AND BINARY password = :password");
    login.bindValue(":username", Username);
    login.bindValue(":password", Password);

    if(login.exec()){
        if(login.next()){
            ++loginCount;
        }
    } else {
        QMessageBox::warning(this, tr("Database Error"), tr("%1").arg(login.lastError().text()));
        return;
    }

    if(loginCount == 1){
        UserID = login.value(1).toString();
        Fullname = login.value(2).toString();
        ChildId = login.value(5).toString();

        //ProfilePicture.loadFromData(ProfilePictureData, "JPG");
        hide();
        parentspage = new parents();
        parentspage->show();
        QMessageBox::information(this, tr("Login Success"), tr("Welcome %1").arg(Fullname));
    } else {
        QMessageBox::warning(this, tr("Incorrect Details"), tr("Wrong Username or Password!"));
    }
}

