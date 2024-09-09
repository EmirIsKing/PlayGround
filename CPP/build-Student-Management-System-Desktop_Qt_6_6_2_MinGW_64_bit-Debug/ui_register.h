/********************************************************************************
** Form generated from reading UI file 'register.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTER_H
#define UI_REGISTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *register_tab;
    QWidget *r_tabTeachers;
    QLabel *label;
    QLineEdit *tFullname;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLineEdit *tSubject;
    QLabel *label_4;
    QLineEdit *tUsername;
    QLabel *label_5;
    QLineEdit *tPassword;
    QLabel *label_8;
    QLineEdit *tPhone;
    QLabel *label_7;
    QToolButton *tPic;
    QPushButton *tSignup;
    QWidget *r_tabStudents;
    QWidget *formLayoutWidget_3;
    QFormLayout *formLayout_3;
    QLabel *label_12;
    QLineEdit *sAge;
    QLabel *label_13;
    QLineEdit *sUsername;
    QLabel *label_14;
    QLineEdit *sPassword;
    QLabel *label_6;
    QToolButton *sPic;
    QLabel *label_15;
    QLineEdit *sFullname;
    QPushButton *sSignup;
    QWidget *r_tabParents;
    QWidget *formLayoutWidget_4;
    QFormLayout *formLayout_4;
    QLabel *label_16;
    QLineEdit *pCID;
    QLabel *label_18;
    QLineEdit *pUsername;
    QLabel *label_19;
    QLineEdit *pPassword;
    QLabel *label_20;
    QLineEdit *pFullname;
    QPushButton *pSignup;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(552, 410);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        register_tab = new QTabWidget(centralwidget);
        register_tab->setObjectName("register_tab");
        register_tab->setGeometry(QRect(0, 0, 561, 411));
        r_tabTeachers = new QWidget();
        r_tabTeachers->setObjectName("r_tabTeachers");
        label = new QLabel(r_tabTeachers);
        label->setObjectName("label");
        label->setGeometry(QRect(90, 60, 67, 17));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        label->setFont(font);
        tFullname = new QLineEdit(r_tabTeachers);
        tFullname->setObjectName("tFullname");
        tFullname->setGeometry(QRect(161, 60, 301, 24));
        formLayoutWidget = new QWidget(r_tabTeachers);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(90, 110, 231, 161));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName("label_2");
        QFont font1;
        font1.setBold(true);
        label_2->setFont(font1);

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        tSubject = new QLineEdit(formLayoutWidget);
        tSubject->setObjectName("tSubject");

        formLayout->setWidget(0, QFormLayout::FieldRole, tSubject);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName("label_4");
        label_4->setFont(font1);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_4);

        tUsername = new QLineEdit(formLayoutWidget);
        tUsername->setObjectName("tUsername");

        formLayout->setWidget(1, QFormLayout::FieldRole, tUsername);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName("label_5");
        label_5->setFont(font1);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_5);

        tPassword = new QLineEdit(formLayoutWidget);
        tPassword->setObjectName("tPassword");

        formLayout->setWidget(2, QFormLayout::FieldRole, tPassword);

        label_8 = new QLabel(formLayoutWidget);
        label_8->setObjectName("label_8");
        label_8->setFont(font1);

        formLayout->setWidget(3, QFormLayout::LabelRole, label_8);

        tPhone = new QLineEdit(formLayoutWidget);
        tPhone->setObjectName("tPhone");

        formLayout->setWidget(3, QFormLayout::FieldRole, tPhone);

        label_7 = new QLabel(formLayoutWidget);
        label_7->setObjectName("label_7");
        label_7->setFont(font1);

        formLayout->setWidget(4, QFormLayout::LabelRole, label_7);

        tPic = new QToolButton(formLayoutWidget);
        tPic->setObjectName("tPic");

        formLayout->setWidget(4, QFormLayout::FieldRole, tPic);

        tSignup = new QPushButton(r_tabTeachers);
        tSignup->setObjectName("tSignup");
        tSignup->setGeometry(QRect(350, 280, 80, 24));
        register_tab->addTab(r_tabTeachers, QString());
        r_tabStudents = new QWidget();
        r_tabStudents->setObjectName("r_tabStudents");
        formLayoutWidget_3 = new QWidget(r_tabStudents);
        formLayoutWidget_3->setObjectName("formLayoutWidget_3");
        formLayoutWidget_3->setGeometry(QRect(90, 110, 231, 131));
        formLayout_3 = new QFormLayout(formLayoutWidget_3);
        formLayout_3->setObjectName("formLayout_3");
        formLayout_3->setContentsMargins(0, 0, 0, 0);
        label_12 = new QLabel(formLayoutWidget_3);
        label_12->setObjectName("label_12");
        label_12->setFont(font1);

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_12);

        sAge = new QLineEdit(formLayoutWidget_3);
        sAge->setObjectName("sAge");

        formLayout_3->setWidget(0, QFormLayout::FieldRole, sAge);

        label_13 = new QLabel(formLayoutWidget_3);
        label_13->setObjectName("label_13");
        label_13->setFont(font1);

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_13);

        sUsername = new QLineEdit(formLayoutWidget_3);
        sUsername->setObjectName("sUsername");

        formLayout_3->setWidget(1, QFormLayout::FieldRole, sUsername);

        label_14 = new QLabel(formLayoutWidget_3);
        label_14->setObjectName("label_14");
        label_14->setFont(font1);

        formLayout_3->setWidget(2, QFormLayout::LabelRole, label_14);

        sPassword = new QLineEdit(formLayoutWidget_3);
        sPassword->setObjectName("sPassword");

        formLayout_3->setWidget(2, QFormLayout::FieldRole, sPassword);

        label_6 = new QLabel(formLayoutWidget_3);
        label_6->setObjectName("label_6");
        label_6->setFont(font1);

        formLayout_3->setWidget(3, QFormLayout::LabelRole, label_6);

        sPic = new QToolButton(formLayoutWidget_3);
        sPic->setObjectName("sPic");

        formLayout_3->setWidget(3, QFormLayout::FieldRole, sPic);

        label_15 = new QLabel(r_tabStudents);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(90, 60, 67, 17));
        label_15->setFont(font);
        sFullname = new QLineEdit(r_tabStudents);
        sFullname->setObjectName("sFullname");
        sFullname->setGeometry(QRect(161, 60, 301, 24));
        sSignup = new QPushButton(r_tabStudents);
        sSignup->setObjectName("sSignup");
        sSignup->setGeometry(QRect(340, 250, 80, 24));
        register_tab->addTab(r_tabStudents, QString());
        r_tabParents = new QWidget();
        r_tabParents->setObjectName("r_tabParents");
        formLayoutWidget_4 = new QWidget(r_tabParents);
        formLayoutWidget_4->setObjectName("formLayoutWidget_4");
        formLayoutWidget_4->setGeometry(QRect(90, 110, 231, 116));
        formLayout_4 = new QFormLayout(formLayoutWidget_4);
        formLayout_4->setObjectName("formLayout_4");
        formLayout_4->setContentsMargins(0, 0, 0, 0);
        label_16 = new QLabel(formLayoutWidget_4);
        label_16->setObjectName("label_16");
        label_16->setFont(font1);

        formLayout_4->setWidget(0, QFormLayout::LabelRole, label_16);

        pCID = new QLineEdit(formLayoutWidget_4);
        pCID->setObjectName("pCID");

        formLayout_4->setWidget(0, QFormLayout::FieldRole, pCID);

        label_18 = new QLabel(formLayoutWidget_4);
        label_18->setObjectName("label_18");
        label_18->setFont(font1);

        formLayout_4->setWidget(1, QFormLayout::LabelRole, label_18);

        pUsername = new QLineEdit(formLayoutWidget_4);
        pUsername->setObjectName("pUsername");

        formLayout_4->setWidget(1, QFormLayout::FieldRole, pUsername);

        label_19 = new QLabel(formLayoutWidget_4);
        label_19->setObjectName("label_19");
        label_19->setFont(font1);

        formLayout_4->setWidget(2, QFormLayout::LabelRole, label_19);

        pPassword = new QLineEdit(formLayoutWidget_4);
        pPassword->setObjectName("pPassword");

        formLayout_4->setWidget(2, QFormLayout::FieldRole, pPassword);

        label_20 = new QLabel(r_tabParents);
        label_20->setObjectName("label_20");
        label_20->setGeometry(QRect(90, 60, 67, 17));
        label_20->setFont(font);
        pFullname = new QLineEdit(r_tabParents);
        pFullname->setObjectName("pFullname");
        pFullname->setGeometry(QRect(161, 60, 301, 24));
        pSignup = new QPushButton(r_tabParents);
        pSignup->setObjectName("pSignup");
        pSignup->setGeometry(QRect(340, 250, 80, 24));
        register_tab->addTab(r_tabParents, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 552, 21));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        register_tab->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Full Name:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Subject:", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Username: ", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Password:", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Phone No.:", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Profile Picture", nullptr));
        tPic->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        tSignup->setText(QCoreApplication::translate("MainWindow", "Sign Up", nullptr));
        register_tab->setTabText(register_tab->indexOf(r_tabTeachers), QCoreApplication::translate("MainWindow", "Teachers", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Age:", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "Username: ", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "Password:", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Profile Picture", nullptr));
        sPic->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "Full Name:", nullptr));
        sSignup->setText(QCoreApplication::translate("MainWindow", "Sign Up", nullptr));
        register_tab->setTabText(register_tab->indexOf(r_tabStudents), QCoreApplication::translate("MainWindow", "Students", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "Childs ID:", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "Username: ", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "Password:", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "Full Name:", nullptr));
        pSignup->setText(QCoreApplication::translate("MainWindow", "Sign Up", nullptr));
        register_tab->setTabText(register_tab->indexOf(r_tabParents), QCoreApplication::translate("MainWindow", "Parents", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_H
