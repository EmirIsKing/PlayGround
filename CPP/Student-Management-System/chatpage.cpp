#include "chatpage.h"
#include "ui_chatpage.h"
#include <QVBoxLayout>
#include <QSqlQuery>
#include <QSqlError>
#include "global.h"
#include "message.h"
#include <QTimer>
#include <QScrollBar>

chatpage::chatpage(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::chatpage)
{
    ui->setupUi(this);
    ui->scrollArea->setWidgetResizable(true);
    initializeChat();

    timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &chatpage::loadChat);
    timer->start(700);

    loadChat();




}


void chatpage::initializeChat()
{
    containerWidget = new QWidget(this);
    containerLayout = new QVBoxLayout(containerWidget);
    containerLayout->setSpacing(5);
    containerLayout->setContentsMargins(0, 0, 0, 0);
    ui->scrollArea->setWidget(containerWidget);
}

void chatpage::cleanupChat()
{
    QLayoutItem *item;
    while ((item = containerLayout->takeAt(0)) != nullptr) {
        delete item->widget();
        delete item;
    }
}

void chatpage::loadChat(){

    cleanupChat();

    QLayoutItem *item;
    while ((item = containerLayout->takeAt(0)) != nullptr) {
        delete item->widget();
        delete item;
    }

    QSqlQuery getChat;
    getChat.prepare("SELECT * FROM messages WHERE (from_id = :id AND to_id = :chatid) OR (from_id = :chatid AND to_id = :id)");
    getChat.bindValue(":id", UserID);
    getChat.bindValue(":chatid", ChatID);
    if (getChat.exec()) {
        while (getChat.next()) {
            message *chat = new message;
            QString msg = getChat.value("message").toString();

            chat->dropMessage(getChat.value("from_id").toString(), msg);
            containerLayout->addWidget(chat);

            QSqlQuery setRead;
            setRead.prepare("UPDATE messages SET message_read = true WHERE message = :message");
            setRead.bindValue(":message", msg);
            if (!setRead.exec()) {
                QMessageBox::critical(this, tr("Database Error"), setRead.lastError().text());
                return;
            }
        }
    } else {
        QMessageBox::critical(this, tr("Database Error"), getChat.lastError().text());
        return;
    }
    containerLayout->addStretch(1);

    scrollToBottom();


}

void chatpage::scrollToBottom()
{
  //  ui->scrollArea->verticalScrollBar()->setValue(max);
    ui->scrollArea->verticalScrollBar()->setValue(330);
}

chatpage::~chatpage()
{
    delete ui;
    delete timer;
}

void chatpage::on_pushButton_clicked()
{
    QString textMessage = ui->message_textEdit->toPlainText();

    if (!textMessage.isEmpty()) {
        QSqlQuery addMessage;
        addMessage.prepare("INSERT INTO messages(from_id, to_id, message) VALUES(:fromid, :toid, :message)");
        addMessage.bindValue(":fromid", UserID);
        addMessage.bindValue(":toid", ChatID);
        addMessage.bindValue(":message", textMessage);

        if (!addMessage.exec()) {
            QMessageBox::critical(this, tr("Database Error"), addMessage.lastError().text());
            return;
        }

        message *chat = new message;
        chat->dropMessage(UserID, textMessage);
        containerLayout->addWidget(chat);

        ui->message_textEdit->clear();

        scrollToBottom();
    } else {
        QMessageBox::information(this, tr("Input Error"), tr("Message Field is empty"));
    }
}

void chatpage::closeEvent(QCloseEvent *event) {

    timer->stop(); // Stop the timer when closing the window
    cleanupChat();
    QMainWindow::closeEvent(event);

}
