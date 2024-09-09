#include "regist.h"
#include "ui_regist.h"




regist::regist(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::regist)
{
    ui->setupUi(this);


    QIntValidator *validator = new QIntValidator(0, 1410065407, this);
    ui->tPhone->setValidator(validator);



}



regist::~regist()
{
    delete ui;
}

void regist::on_tPic_clicked()
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
        ProfilePicture = ImageBufferData.buffer().toBase64();
    } else {
        QMessageBox::warning(this, tr("Buffer Error"), tr("Failed to open image buffer."));
    }


}


void regist::on_tSignup_clicked()
{
    Fullname = ui->tFullname->text();
    Subject = ui->tSubject->text();
    Username = ui->tUsername->text();
    Password = ui->tPassword->text();
    PhoneNumber = ui->tPhone->text().toInt();
    SearchUser = Username;

    if (Fullname.isEmpty() || Subject.isEmpty() || Username.isEmpty() || Password.isEmpty() || ui->tPhone->text().isEmpty()) {
        QMessageBox::warning(this, tr("Input Error"), tr("Please fill all required fields."));
        return;
    }

    QSqlQuery search;
    search.prepare("SELECT * FROM teachers WHERE username = :username");
    search.bindValue(":username", SearchUser);

    if (!search.next()) {


    QSqlQuery query;
    query.prepare("INSERT INTO teachers(fullname, username, password, subject, phone_number, profile_pic_data) "
                  "VALUES(:fullname, :username, :password, :subject, :phone_number, :profile_pic_data)");
    query.bindValue(":fullname", Fullname);
    query.bindValue(":username", Username);
    query.bindValue(":password", Password);
    query.bindValue(":subject", Subject);
    query.bindValue(":phone_number", PhoneNumber);
    query.bindValue(":profile_pic_data", ProfilePicture);


    if (!query.exec()) {
        QMessageBox::critical(this, tr("Database Error"), query.lastError().text());
    } else {
        QMessageBox::information(this, tr("Success"), tr("Registration successful."));

        query.prepare("SELECT id FROM teachers Where username=:username");
        query.bindValue(":username", Username);
        if(!query.exec()){
            QMessageBox::critical(this, tr("Database Error"), query.lastError().text());
            return;
        }

        if(query.next()){
            QString teachId = query.value("id").toString();


            query.prepare("ALTER TABLE teachersstudent ADD COLUMN " + teachId + " VARCHAR(50)");
            if (!query.exec()) {
            QMessageBox::critical(this, tr("Database Error"), query.lastError().text());
            return;
            }
        }

        hide();
        mainwindow = new MainWindow();
        mainwindow->show();
    }

    query.prepare("SELECT id FROM teachers");
    query.exec();
    QString userid = query.value("id").toString();
    query.prepare("INSERT INTO users VALUES(:userid, :fullname, :profile_pic_data)");
    query.bindValue(":userid", userid);
    query.bindValue(":fullname", Fullname);
    query.bindValue(":profile_pic_data", ProfilePicture);
    query.exec();

        }
        else {
        QMessageBox::warning(this, tr("Input Error"), tr("Username is already in use."));
        }
}


void regist::on_sSignup_clicked()
{
    Fullname = ui->sFullname->text();
    Username = ui->sUsername->text();
    Password = ui->sPassword->text();
    Age = ui->sAge->text().toInt();
    SearchUser = Username;

    if (Fullname.isEmpty() || Username.isEmpty() || Password.isEmpty() || ui->sAge->text().isEmpty()) {
        QMessageBox::warning(this, tr("Input Error"), tr("Please fill all required fields."));
        return;
    }

    QSqlQuery search;
    search.prepare("SELECT * FROM students WHERE username = :username");
    search.bindValue(":username", SearchUser);

    if (!search.next()) {

    QSqlQuery query;
    query.prepare("INSERT INTO students(fullname, username, password, age, profile_pic_data) "
                  "VALUES(:fullname, :username, :password, :age, :profile_pic_data)");
    query.bindValue(":fullname", Fullname);
    query.bindValue(":username", Username);
    query.bindValue(":password", Password);
    query.bindValue(":age", Age);
    query.bindValue(":profile_pic_data", ProfilePicture);




    if (!query.exec()) {
        QMessageBox::critical(this, tr("Database Error"), query.lastError().text());
    } else {
        QMessageBox::information(this, tr("Success"), tr("Registration successful."));
        hide();
        mainwindow = new MainWindow();
        mainwindow->show();
    }


    query.prepare("SELECT id FROM students");
    query.exec();
    QString userid = query.value("id").toString();
    query.prepare("INSERT INTO users VALUES(:userid, :fullname, :profile_pic_data)");
    query.bindValue(":userid", userid);
    query.bindValue(":fullname", Fullname);
    query.bindValue(":profile_pic_data", ProfilePicture);
    query.exec();

        }
     else {
        QMessageBox::warning(this, tr("Input Error"), tr("Username is already in use."));
    }




}


void regist::on_sPic_clicked()
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
        ProfilePicture = ImageBufferData.buffer().toBase64();
    } else {
        QMessageBox::warning(this, tr("Buffer Error"), tr("Failed to open image buffer."));
    }

}





void regist::on_pSignup_clicked()
{
    Fullname = ui->pFullname->text();
    Username = ui->pUsername->text();
    Password = ui->pPassword->text();
    ChildID = ui->pCID->text();
    SearchUser = Username;

    QChar target = 'S';

    if(!ChildID.startsWith(target)){
        QMessageBox::warning(this, tr("Input Error"), tr("All student ID Begins with 'S'"));
            return;
    }

    if (Fullname.isEmpty() || Username.isEmpty() || Password.isEmpty() || ChildID.isEmpty()) {
        QMessageBox::warning(this, tr("Input Error"), tr("Please fill all required fields."));
        return;
    }

    QSqlQuery search;
    search.prepare("SELECT * FROM parents WHERE username = :username");
    search.bindValue(":username", SearchUser);

    if (!search.next()) {

    QSqlQuery query;
    query.prepare("INSERT INTO parents(fullname, username, password, child_id) "
                  "VALUES(:fullname, :username, :password, :child_id)");
    query.bindValue(":fullname", Fullname);
    query.bindValue(":username", Username);
    query.bindValue(":password", Password);
    query.bindValue(":child_id", ChildID);


    if (!query.exec()) {
        QMessageBox::critical(this, tr("Database Error"), query.lastError().text());
    } else {
        QMessageBox::information(this, tr("Success"), tr("Registration successful."));
        hide();
        mainwindow = new MainWindow();
        mainwindow->show();
    }

    query.prepare("SELECT id FROM parents");
    query.exec();
    QString userid = query.value("id").toString();
    query.prepare("INSERT INTO users VALUES(:userid, :fullname, :profile_pic_data)");
    query.bindValue(":userid", userid);
    query.bindValue(":fullname", Fullname);
    query.bindValue(":profile_pic_data", ProfilePicture);
    query.exec();

        }
     else {
        QMessageBox::warning(this, tr("Input Error"), tr("Username is already in use."));
    }
}


void regist::on_commandLinkButton_clicked()
{
    hide();
    mainwindow = new MainWindow();
    mainwindow->show();
}


void regist::on_commandLinkButton_2_clicked()
{
    hide();
    mainwindow = new MainWindow();
    mainwindow->show();
}


void regist::on_commandLinkButton_3_clicked()
{
    hide();
    mainwindow = new MainWindow();
    mainwindow->show();
}

void regist::closeEvent(QCloseEvent *event) {
    QSqlDatabase db = QSqlDatabase::database();
    db.close();
    QSqlDatabase::removeDatabase(QSqlDatabase::defaultConnection);

    // Exit the application
    QApplication::quit();

    // Call the base class closeEvent to ensure proper handling of the event
    QMainWindow::closeEvent(event);
}
