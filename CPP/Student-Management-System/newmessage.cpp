#include "newmessage.h"
#include "ui_newmessage.h"
#include "global.h"
#include <QMessageBox>
#include <QSqlError>





newmessage::newmessage(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::newmessage)
{
    ui->setupUi(this);

    QSqlQuery getUsers;
    getUsers.prepare("SELECT user_id FROM users WHERE user_id != :userid");
    getUsers.bindValue(":userid", UserID);
    if(getUsers.exec()){
        while(getUsers.next()){
            ui->comboBox->addItem(getUsers.value("user_id").toString());
        }

    }


}

QString to_id;
QString message;

newmessage::~newmessage()
{
    delete ui;
}

void newmessage::on_comboBox_currentIndexChanged(int index)
{
    to_id = ui->comboBox->currentText();
}


void newmessage::on_pushButton_clicked()
{
    message = ui->textEdit->toPlainText();
    if(!message.isEmpty()){
    QSqlQuery addMessage;
    addMessage.prepare("INSERT INTO messages(from_id, to_id, message) VALUES(:fromid, :toid, :message)");
    addMessage.bindValue(":fromid", UserID);
    addMessage.bindValue(":toid", to_id);
    addMessage.bindValue(":message", message);

    if(!addMessage.exec()){
        QMessageBox::critical(this, tr("Database Error"), addMessage.lastError().text());
        return;
    }
    } else {
        QMessageBox::information(this, tr("Input Error"), tr("Message Field is empty"));
        return;
    }

 hide();

}

