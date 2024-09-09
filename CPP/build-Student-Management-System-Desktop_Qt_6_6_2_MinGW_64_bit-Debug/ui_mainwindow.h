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
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab_1;
    QPushButton *tLogin;
    QPushButton *pushButton_2;
    QLabel *dbChecker;
    QWidget *layoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *tUsername;
    QLabel *label_2;
    QLineEdit *tPassword;
    QWidget *tab_2;
    QPushButton *sLogin;
    QPushButton *pushButton_4;
    QLabel *dbChecker_2;
    QWidget *layoutWidget1;
    QFormLayout *formLayout_2;
    QLabel *label_4;
    QLineEdit *sUsername;
    QLabel *label_3;
    QLineEdit *sPassword;
    QWidget *tab_3;
    QPushButton *pLogin;
    QPushButton *pushButton_6;
    QLabel *dbChecker_3;
    QWidget *layoutWidget2;
    QFormLayout *formLayout_3;
    QLabel *label_6;
    QLabel *label_5;
    QLineEdit *pPassword;
    QLineEdit *pUsername;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(429, 260);
        MainWindow->setMinimumSize(QSize(429, 260));
        MainWindow->setMaximumSize(QSize(455, 260));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/smsht.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(0, 0, 591, 401));
        tab_1 = new QWidget();
        tab_1->setObjectName("tab_1");
        tLogin = new QPushButton(tab_1);
        tLogin->setObjectName("tLogin");
        tLogin->setGeometry(QRect(210, 150, 80, 24));
        QFont font;
        font.setBold(true);
        tLogin->setFont(font);
        pushButton_2 = new QPushButton(tab_1);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(300, 150, 80, 24));
        pushButton_2->setFont(font);
        dbChecker = new QLabel(tab_1);
        dbChecker->setObjectName("dbChecker");
        dbChecker->setGeometry(QRect(20, 310, 541, 16));
        dbChecker->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        layoutWidget = new QWidget(tab_1);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(80, 50, 251, 81));
        formLayout = new QFormLayout(layoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName("label");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe UI Semibold")});
        font1.setPointSize(13);
        font1.setBold(true);
        label->setFont(font1);

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        tUsername = new QLineEdit(layoutWidget);
        tUsername->setObjectName("tUsername");

        formLayout->setWidget(0, QFormLayout::FieldRole, tUsername);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");
        label_2->setFont(font1);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        tPassword = new QLineEdit(layoutWidget);
        tPassword->setObjectName("tPassword");

        formLayout->setWidget(1, QFormLayout::FieldRole, tPassword);

        tabWidget->addTab(tab_1, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        sLogin = new QPushButton(tab_2);
        sLogin->setObjectName("sLogin");
        sLogin->setGeometry(QRect(210, 150, 80, 24));
        sLogin->setFont(font);
        pushButton_4 = new QPushButton(tab_2);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(300, 150, 80, 24));
        pushButton_4->setFont(font);
        dbChecker_2 = new QLabel(tab_2);
        dbChecker_2->setObjectName("dbChecker_2");
        dbChecker_2->setGeometry(QRect(20, 310, 551, 16));
        dbChecker_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        layoutWidget1 = new QWidget(tab_2);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(80, 50, 251, 71));
        formLayout_2 = new QFormLayout(layoutWidget1);
        formLayout_2->setObjectName("formLayout_2");
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName("label_4");
        label_4->setFont(font1);

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_4);

        sUsername = new QLineEdit(layoutWidget1);
        sUsername->setObjectName("sUsername");

        formLayout_2->setWidget(0, QFormLayout::FieldRole, sUsername);

        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName("label_3");
        label_3->setFont(font1);

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_3);

        sPassword = new QLineEdit(layoutWidget1);
        sPassword->setObjectName("sPassword");

        formLayout_2->setWidget(1, QFormLayout::FieldRole, sPassword);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        pLogin = new QPushButton(tab_3);
        pLogin->setObjectName("pLogin");
        pLogin->setGeometry(QRect(210, 150, 80, 24));
        pLogin->setFont(font);
        pushButton_6 = new QPushButton(tab_3);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(300, 150, 80, 24));
        pushButton_6->setFont(font);
        dbChecker_3 = new QLabel(tab_3);
        dbChecker_3->setObjectName("dbChecker_3");
        dbChecker_3->setGeometry(QRect(20, 310, 551, 16));
        dbChecker_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        layoutWidget2 = new QWidget(tab_3);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(80, 50, 251, 84));
        formLayout_3 = new QFormLayout(layoutWidget2);
        formLayout_3->setObjectName("formLayout_3");
        formLayout_3->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget2);
        label_6->setObjectName("label_6");
        label_6->setFont(font1);

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_6);

        label_5 = new QLabel(layoutWidget2);
        label_5->setObjectName("label_5");
        label_5->setFont(font1);

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_5);

        pPassword = new QLineEdit(layoutWidget2);
        pPassword->setObjectName("pPassword");

        formLayout_3->setWidget(1, QFormLayout::FieldRole, pPassword);

        pUsername = new QLineEdit(layoutWidget2);
        pUsername->setObjectName("pUsername");

        formLayout_3->setWidget(0, QFormLayout::FieldRole, pUsername);

        tabWidget->addTab(tab_3, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 429, 21));
        MainWindow->setMenuBar(menubar);
        QWidget::setTabOrder(tUsername, tPassword);
        QWidget::setTabOrder(tPassword, tLogin);
        QWidget::setTabOrder(tLogin, pushButton_2);
        QWidget::setTabOrder(pushButton_2, sUsername);
        QWidget::setTabOrder(sUsername, sPassword);
        QWidget::setTabOrder(sPassword, sLogin);
        QWidget::setTabOrder(sLogin, pushButton_4);
        QWidget::setTabOrder(pushButton_4, pUsername);
        QWidget::setTabOrder(pUsername, pPassword);
        QWidget::setTabOrder(pPassword, pLogin);
        QWidget::setTabOrder(pLogin, pushButton_6);
        QWidget::setTabOrder(pushButton_6, tabWidget);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Student Management System", nullptr));
        tLogin->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Register", nullptr));
        dbChecker->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "Username:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Password:", nullptr));
        tPassword->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_1), QCoreApplication::translate("MainWindow", "Teachers", nullptr));
        sLogin->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "Register", nullptr));
        dbChecker_2->setText(QString());
        label_4->setText(QCoreApplication::translate("MainWindow", "Username:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Password:", nullptr));
        sPassword->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Students", nullptr));
        pLogin->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "Register", nullptr));
        dbChecker_3->setText(QString());
        label_6->setText(QCoreApplication::translate("MainWindow", "Username:", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Password:", nullptr));
        pPassword->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("MainWindow", "Parents", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
