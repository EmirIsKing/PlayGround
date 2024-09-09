/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QPlainTextEdit *plainTextEdit;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(500, 332);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(500, 332));
        MainWindow->setMaximumSize(QSize(500, 332));
        MainWindow->setWindowOpacity(1.000000000000000);
        MainWindow->setStyleSheet(QString::fromUtf8("QMainWindow {\n"
"	background-color: rgb(35, 35, 35);\n"
"\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(90, 90, 80, 24));
        QFont font;
        font.setBold(true);
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(71, 71, 71);\n"
"color: rgb(255, 255, 255);\n"
"border-radius: 5px;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: rgb(99, 99, 99);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: rgba(58, 58, 58, 33);\n"
"}"));
        pushButton->setFlat(false);
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(200, 90, 80, 24));
        pushButton_2->setFont(font);
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(71, 71, 71);\n"
"color: rgb(255, 255, 255);\n"
"border-radius: 5px;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: rgb(99, 99, 99);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: rgba(58, 58, 58, 33);\n"
"}"));
        pushButton_2->setFlat(false);
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(310, 90, 80, 24));
        pushButton_3->setFont(font);
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(71, 71, 71);\n"
"color: rgb(255, 255, 255);\n"
"border-radius: 5px;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: rgb(99, 99, 99);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: rgba(58, 58, 58, 33);\n"
"}"));
        pushButton_3->setFlat(false);
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 10, 141, 71));
        QFont font1;
        font1.setPointSize(48);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(210, 10, 71, 71));
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_2->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(320, 0, 71, 91));
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_3->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(170, 0, 41, 91));
        QFont font2;
        font2.setPointSize(48);
        font2.setBold(false);
        label_4->setFont(font2);
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_4->setAlignment(Qt::AlignCenter);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(280, 0, 41, 91));
        label_5->setFont(font2);
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_5->setAlignment(Qt::AlignCenter);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(0, 120, 71, 41));
        QFont font3;
        font3.setPointSize(16);
        label_6->setFont(font3);
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        plainTextEdit = new QPlainTextEdit(centralwidget);
        plainTextEdit->setObjectName("plainTextEdit");
        plainTextEdit->setGeometry(QRect(0, 160, 501, 191));
        plainTextEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(35, 35, 35);\n"
"color: rgb(255, 255, 255);"));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(200, 120, 80, 24));
        pushButton_4->setFont(font);
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(71, 71, 71);\n"
"color: rgb(255, 255, 255);\n"
"border-radius: 5px;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: rgb(99, 99, 99);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: rgba(58, 58, 58, 33);\n"
"}"));
        pushButton_4->setFlat(false);
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(410, 130, 80, 24));
        pushButton_5->setFont(font);
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(71, 71, 71);\n"
"color: rgb(255, 255, 255);\n"
"border-radius: 5px;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: rgb(99, 99, 99);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: rgba(58, 58, 58, 33);\n"
"}"));
        pushButton_5->setFlat(false);
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(390, 40, 49, 31));
        QFont font4;
        font4.setPointSize(24);
        font4.setBold(true);
        label_7->setFont(font4);
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(110, 0, 51, 20));
        label_8->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_8->setAlignment(Qt::AlignCenter);
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(208, 0, 81, 20));
        label_9->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_9->setAlignment(Qt::AlignCenter);
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(310, 0, 91, 20));
        label_10->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_10->setAlignment(Qt::AlignCenter);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 500, 21));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Stopwatch", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Stop", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "00", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "00", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "00", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", ":", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", ":", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Laps:", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "Lap", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "00", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "hour", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "min", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "sec", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
