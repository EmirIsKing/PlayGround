/********************************************************************************
** Form generated from reading UI file 'chatpage.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHATPAGE_H
#define UI_CHATPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_chatpage
{
public:
    QWidget *centralwidget;
    QTextEdit *message_textEdit;
    QPushButton *pushButton;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QMenuBar *menubar;

    void setupUi(QMainWindow *chatpage)
    {
        if (chatpage->objectName().isEmpty())
            chatpage->setObjectName("chatpage");
        chatpage->resize(384, 422);
        chatpage->setMinimumSize(QSize(384, 422));
        chatpage->setMaximumSize(QSize(384, 422));
        chatpage->setStyleSheet(QString::fromUtf8("background-color: rgb(204, 204, 204);"));
        centralwidget = new QWidget(chatpage);
        centralwidget->setObjectName("centralwidget");
        message_textEdit = new QTextEdit(centralwidget);
        message_textEdit->setObjectName("message_textEdit");
        message_textEdit->setGeometry(QRect(10, 359, 291, 31));
        message_textEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
""));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(310, 360, 61, 24));
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(0, 0, 381, 331));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(scrollArea->sizePolicy().hasHeightForWidth());
        scrollArea->setSizePolicy(sizePolicy);
        scrollArea->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 379, 329));
        scrollArea->setWidget(scrollAreaWidgetContents);
        chatpage->setCentralWidget(centralwidget);
        menubar = new QMenuBar(chatpage);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 384, 21));
        chatpage->setMenuBar(menubar);

        retranslateUi(chatpage);

        QMetaObject::connectSlotsByName(chatpage);
    } // setupUi

    void retranslateUi(QMainWindow *chatpage)
    {
        chatpage->setWindowTitle(QCoreApplication::translate("chatpage", "Chat", nullptr));
        pushButton->setText(QCoreApplication::translate("chatpage", "Send", nullptr));
    } // retranslateUi

};

namespace Ui {
    class chatpage: public Ui_chatpage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHATPAGE_H
