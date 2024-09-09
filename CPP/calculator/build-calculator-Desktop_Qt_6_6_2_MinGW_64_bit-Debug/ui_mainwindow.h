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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *lineEdit;
    QPushButton *add;
    QPushButton *subt;
    QPushButton *divide;
    QPushButton *multiply;
    QPushButton *equalTo;
    QPushButton *mod;
    QPushButton *clear;
    QPushButton *nine;
    QPushButton *six;
    QPushButton *three;
    QPushButton *eight;
    QPushButton *five;
    QPushButton *two;
    QPushButton *seven;
    QPushButton *four;
    QPushButton *one;
    QPushButton *zero;
    QPushButton *dot;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(322, 341);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(322, 341));
        MainWindow->setMaximumSize(QSize(322, 341));
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgba(0, 0, 0, 128);"));
        MainWindow->setInputMethodHints(Qt::ImhNone);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(20, 10, 281, 101));
        QFont font;
        font.setPointSize(18);
        lineEdit->setFont(font);
        lineEdit->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        lineEdit->setInputMethodHints(Qt::ImhNone);
        lineEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        add = new QPushButton(centralwidget);
        add->setObjectName("add");
        add->setGeometry(QRect(200, 210, 41, 41));
        QFont font1;
        font1.setPointSize(20);
        add->setFont(font1);
        add->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: rgb(255, 255, 255);\n"
"	border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qlineargradient(spread:pad, x1:0.631, y1:0.704, x2:0, y2:0.0681818, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255)); \n"
"    border: 2px solid blue;\n"
"    color: white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color:rgb(52, 52, 52); \n"
"    border: 2px solid blue;\n"
"    color: white;\n"
"}"));
        subt = new QPushButton(centralwidget);
        subt->setObjectName("subt");
        subt->setGeometry(QRect(240, 130, 41, 41));
        QFont font2;
        font2.setPointSize(37);
        subt->setFont(font2);
        subt->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: rgb(255, 255, 255);\n"
"	border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qlineargradient(spread:pad, x1:0.631, y1:0.704, x2:0, y2:0.0681818, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255)); \n"
"    border: 2px solid blue;\n"
"    color: white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color:rgb(52, 52, 52); \n"
"    border: 2px solid blue;\n"
"    color: white;\n"
"}"));
        divide = new QPushButton(centralwidget);
        divide->setObjectName("divide");
        divide->setGeometry(QRect(240, 170, 41, 41));
        divide->setFont(font1);
        divide->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: rgb(255, 255, 255);\n"
"	border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qlineargradient(spread:pad, x1:0.631, y1:0.704, x2:0, y2:0.0681818, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255)); \n"
"    border: 2px solid blue;\n"
"    color: white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color:rgb(52, 52, 52); \n"
"    border: 2px solid blue;\n"
"    color: white;\n"
"}"));
        multiply = new QPushButton(centralwidget);
        multiply->setObjectName("multiply");
        multiply->setGeometry(QRect(240, 210, 41, 41));
        QFont font3;
        font3.setPointSize(16);
        multiply->setFont(font3);
        multiply->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: rgb(255, 255, 255);\n"
"	border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qlineargradient(spread:pad, x1:0.631, y1:0.704, x2:0, y2:0.0681818, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255)); \n"
"    border: 2px solid blue;\n"
"    color: white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color:rgb(52, 52, 52); \n"
"    border: 2px solid blue;\n"
"    color: white;\n"
"}"));
        equalTo = new QPushButton(centralwidget);
        equalTo->setObjectName("equalTo");
        equalTo->setGeometry(QRect(240, 250, 41, 41));
        QFont font4;
        font4.setPointSize(26);
        equalTo->setFont(font4);
        equalTo->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: rgb(255, 255, 255);\n"
"	border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qlineargradient(spread:pad, x1:0.631, y1:0.704, x2:0, y2:0.0681818, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255)); \n"
"    border: 2px solid blue;\n"
"    color: white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color:rgb(52, 52, 52); \n"
"    border: 2px solid blue;\n"
"    color: white;\n"
"}"));
        mod = new QPushButton(centralwidget);
        mod->setObjectName("mod");
        mod->setGeometry(QRect(200, 170, 41, 41));
        QFont font5;
        font5.setPointSize(11);
        mod->setFont(font5);
        mod->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: rgb(255, 255, 255);\n"
"	border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qlineargradient(spread:pad, x1:0.631, y1:0.704, x2:0, y2:0.0681818, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255)); \n"
"    border: 2px solid blue;\n"
"    color: white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color:rgb(52, 52, 52); \n"
"    border: 2px solid blue;\n"
"    color: white;\n"
"}"));
        clear = new QPushButton(centralwidget);
        clear->setObjectName("clear");
        clear->setGeometry(QRect(200, 130, 41, 41));
        clear->setFont(font);
        clear->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: rgb(255, 255, 255);\n"
"	border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qlineargradient(spread:pad, x1:0.631, y1:0.704, x2:0, y2:0.0681818, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255)); \n"
"    border: 2px solid blue;\n"
"    color: white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color:rgb(52, 52, 52); \n"
"    border: 2px solid blue;\n"
"    color: white;\n"
"}"));
        nine = new QPushButton(centralwidget);
        nine->setObjectName("nine");
        nine->setGeometry(QRect(120, 130, 41, 41));
        nine->setFont(font3);
        nine->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: rgb(255, 255, 255);\n"
"	border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qlineargradient(spread:pad, x1:0.631, y1:0.704, x2:0, y2:0.0681818, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255)); \n"
"    border: 2px solid blue;\n"
"    color: white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color:rgb(52, 52, 52); \n"
"    border: 2px solid blue;\n"
"    color: white;\n"
"}"));
        six = new QPushButton(centralwidget);
        six->setObjectName("six");
        six->setGeometry(QRect(120, 170, 41, 41));
        six->setFont(font3);
        six->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: rgb(255, 255, 255);\n"
"	border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qlineargradient(spread:pad, x1:0.631, y1:0.704, x2:0, y2:0.0681818, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255)); \n"
"    border: 2px solid blue;\n"
"    color: white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color:rgb(52, 52, 52); \n"
"    border: 2px solid blue;\n"
"    color: white;\n"
"}"));
        three = new QPushButton(centralwidget);
        three->setObjectName("three");
        three->setGeometry(QRect(120, 210, 41, 41));
        three->setFont(font3);
        three->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: rgb(255, 255, 255);\n"
"	border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qlineargradient(spread:pad, x1:0.631, y1:0.704, x2:0, y2:0.0681818, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255)); \n"
"    border: 2px solid blue;\n"
"    color: white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color:rgb(52, 52, 52); \n"
"    border: 2px solid blue;\n"
"    color: white;\n"
"}"));
        eight = new QPushButton(centralwidget);
        eight->setObjectName("eight");
        eight->setGeometry(QRect(80, 130, 41, 41));
        eight->setFont(font3);
        eight->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: rgb(255, 255, 255);\n"
"	border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qlineargradient(spread:pad, x1:0.631, y1:0.704, x2:0, y2:0.0681818, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255)); \n"
"    border: 2px solid blue;\n"
"    color: white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color:rgb(52, 52, 52); \n"
"    border: 2px solid blue;\n"
"    color: white;\n"
"}"));
        five = new QPushButton(centralwidget);
        five->setObjectName("five");
        five->setGeometry(QRect(80, 170, 41, 41));
        five->setFont(font3);
        five->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: rgb(255, 255, 255);\n"
"	border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qlineargradient(spread:pad, x1:0.631, y1:0.704, x2:0, y2:0.0681818, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255)); \n"
"    border: 2px solid blue;\n"
"    color: white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color:rgb(52, 52, 52); \n"
"    border: 2px solid blue;\n"
"    color: white;\n"
"}"));
        two = new QPushButton(centralwidget);
        two->setObjectName("two");
        two->setGeometry(QRect(80, 210, 41, 41));
        two->setFont(font3);
        two->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: rgb(255, 255, 255);\n"
"	border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qlineargradient(spread:pad, x1:0.631, y1:0.704, x2:0, y2:0.0681818, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255)); \n"
"    border: 2px solid blue;\n"
"    color: white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color:rgb(52, 52, 52); \n"
"    border: 2px solid blue;\n"
"    color: white;\n"
"}"));
        seven = new QPushButton(centralwidget);
        seven->setObjectName("seven");
        seven->setGeometry(QRect(40, 130, 41, 41));
        seven->setFont(font3);
        seven->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: rgb(255, 255, 255);\n"
"	border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qlineargradient(spread:pad, x1:0.631, y1:0.704, x2:0, y2:0.0681818, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255)); \n"
"    border: 2px solid blue;\n"
"    color: white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color:rgb(52, 52, 52); \n"
"    border: 2px solid blue;\n"
"    color: white;\n"
"}"));
        four = new QPushButton(centralwidget);
        four->setObjectName("four");
        four->setGeometry(QRect(40, 170, 41, 41));
        four->setFont(font3);
        four->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: rgb(255, 255, 255);\n"
"	border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qlineargradient(spread:pad, x1:0.631, y1:0.704, x2:0, y2:0.0681818, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255)); \n"
"    border: 2px solid blue;\n"
"    color: white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color:rgb(52, 52, 52); \n"
"    border: 2px solid blue;\n"
"    color: white;\n"
"}"));
        one = new QPushButton(centralwidget);
        one->setObjectName("one");
        one->setGeometry(QRect(40, 210, 41, 41));
        one->setFont(font3);
        one->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: rgb(255, 255, 255);\n"
"	border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qlineargradient(spread:pad, x1:0.631, y1:0.704, x2:0, y2:0.0681818, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255)); \n"
"    border: 2px solid blue;\n"
"    color: white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color:rgb(52, 52, 52); \n"
"    border: 2px solid blue;\n"
"    color: white;\n"
"}"));
        zero = new QPushButton(centralwidget);
        zero->setObjectName("zero");
        zero->setGeometry(QRect(80, 250, 41, 41));
        zero->setFont(font3);
        zero->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: rgb(255, 255, 255);\n"
"	border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qlineargradient(spread:pad, x1:0.631, y1:0.704, x2:0, y2:0.0681818, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255)); \n"
"    border: 2px solid blue;\n"
"    color: white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color:rgb(52, 52, 52); \n"
"    border: 2px solid blue;\n"
"    color: white;\n"
"}"));
        dot = new QPushButton(centralwidget);
        dot->setObjectName("dot");
        dot->setGeometry(QRect(200, 250, 41, 41));
        dot->setFont(font1);
        dot->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: rgb(255, 255, 255);\n"
"	border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qlineargradient(spread:pad, x1:0.631, y1:0.704, x2:0, y2:0.0681818, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255)); \n"
"    border: 2px solid blue;\n"
"    color: white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color:rgb(52, 52, 52); \n"
"    border: 2px solid blue;\n"
"    color: white;\n"
"}"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 322, 21));
        MainWindow->setMenuBar(menubar);
        QWidget::setTabOrder(lineEdit, eight);
        QWidget::setTabOrder(eight, multiply);
        QWidget::setTabOrder(multiply, equalTo);
        QWidget::setTabOrder(equalTo, add);
        QWidget::setTabOrder(add, seven);
        QWidget::setTabOrder(seven, subt);
        QWidget::setTabOrder(subt, mod);
        QWidget::setTabOrder(mod, nine);
        QWidget::setTabOrder(nine, six);
        QWidget::setTabOrder(six, three);
        QWidget::setTabOrder(three, clear);
        QWidget::setTabOrder(clear, five);
        QWidget::setTabOrder(five, two);
        QWidget::setTabOrder(two, divide);
        QWidget::setTabOrder(divide, four);
        QWidget::setTabOrder(four, one);
        QWidget::setTabOrder(one, zero);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Calculator", nullptr));
        add->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        subt->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        divide->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        multiply->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        equalTo->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        mod->setText(QCoreApplication::translate("MainWindow", "MOD", nullptr));
        clear->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        nine->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        six->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        three->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        eight->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        five->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        two->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        seven->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        four->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        one->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        zero->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        dot->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
