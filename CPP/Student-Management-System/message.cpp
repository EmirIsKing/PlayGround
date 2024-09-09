#include "message.h"
#include "ui_message.h"
#include <QSqlError>
#include "global.h"

message::message(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::message)
{
    ui->setupUi(this);
}

message::~message()
{
    delete ui;
}


void message::dropMessage(const QString &from, const QString &message){

    QSqlQuery getFromName;
    getFromName.prepare("SELECT fullname From users Where user_id = :id");
    getFromName.bindValue(":id", from);
    if(!getFromName.exec()){
        QMessageBox::critical(this, tr("Database Error"), getFromName.lastError().text());
        return;
    }
    getFromName.next();

    QString nameFrom = getFromName.value("fullname").toString();
    QStringList nameList = nameFrom.split(" ");

    if(from == UserID){
        ui->name_label_2->setText("Me");
        ui->message_label->setText(message);
        ui->name_label_2->setStyleSheet("color: red;");
        ui->line->setStyleSheet("color: red;");

    } else {
        ui->name_label_2->setText(nameList.first());
        ui->message_label->setText(message);
        ui->name_label_2->setStyleSheet("color: blue;");
        ui->line->setStyleSheet("color: blue;");

    }





}
