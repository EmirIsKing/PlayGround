/********************************************************************************
** Form generated from reading UI file 'regist.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGIST_H
#define UI_REGIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCommandLinkButton>
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

class Ui_regist
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
    QLabel *dbChecker;
    QCommandLinkButton *commandLinkButton;
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
    QLabel *dbChecker_2;
    QCommandLinkButton *commandLinkButton_2;
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
    QLabel *dbChecker_3;
    QCommandLinkButton *commandLinkButton_3;
    QMenuBar *menubar;

    void setupUi(QMainWindow *regist)
    {
        if (regist->objectName().isEmpty())
            regist->setObjectName("regist");
        regist->resize(562, 431);
        regist->setMinimumSize(QSize(562, 431));
        regist->setMaximumSize(QSize(562, 431));
        centralwidget = new QWidget(regist);
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
        tPhone->setInputMethodHints(Qt::ImhDigitsOnly|Qt::ImhPreferNumbers);
        tPhone->setPlaceholderText(QString::fromUtf8("eg. 0241234567"));

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
        dbChecker = new QLabel(r_tabTeachers);
        dbChecker->setObjectName("dbChecker");
        dbChecker->setGeometry(QRect(20, 330, 521, 16));
        dbChecker->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        commandLinkButton = new QCommandLinkButton(r_tabTeachers);
        commandLinkButton->setObjectName("commandLinkButton");
        commandLinkButton->setGeometry(QRect(460, 340, 168, 41));
        QFont font2;
        font2.setPointSize(11);
        commandLinkButton->setFont(font2);
        commandLinkButton->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);"));
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
        dbChecker_2 = new QLabel(r_tabStudents);
        dbChecker_2->setObjectName("dbChecker_2");
        dbChecker_2->setGeometry(QRect(20, 330, 471, 16));
        dbChecker_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        commandLinkButton_2 = new QCommandLinkButton(r_tabStudents);
        commandLinkButton_2->setObjectName("commandLinkButton_2");
        commandLinkButton_2->setGeometry(QRect(460, 340, 168, 41));
        commandLinkButton_2->setFont(font2);
        commandLinkButton_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);"));
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
        dbChecker_3 = new QLabel(r_tabParents);
        dbChecker_3->setObjectName("dbChecker_3");
        dbChecker_3->setGeometry(QRect(20, 330, 501, 16));
        dbChecker_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        commandLinkButton_3 = new QCommandLinkButton(r_tabParents);
        commandLinkButton_3->setObjectName("commandLinkButton_3");
        commandLinkButton_3->setGeometry(QRect(460, 340, 168, 41));
        commandLinkButton_3->setFont(font2);
        commandLinkButton_3->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);"));
        register_tab->addTab(r_tabParents, QString());
        regist->setCentralWidget(centralwidget);
        menubar = new QMenuBar(regist);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 562, 21));
        regist->setMenuBar(menubar);

        retranslateUi(regist);

        register_tab->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(regist);
    } // setupUi

    void retranslateUi(QMainWindow *regist)
    {
        regist->setWindowTitle(QCoreApplication::translate("regist", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("regist", "Full Name:", nullptr));
        label_2->setText(QCoreApplication::translate("regist", "Subject:", nullptr));
        label_4->setText(QCoreApplication::translate("regist", "Username: ", nullptr));
        label_5->setText(QCoreApplication::translate("regist", "Password:", nullptr));
        label_8->setText(QCoreApplication::translate("regist", "Phone No.:", nullptr));
        label_7->setText(QCoreApplication::translate("regist", "Profile Picture", nullptr));
        tPic->setText(QCoreApplication::translate("regist", "...", nullptr));
        tSignup->setText(QCoreApplication::translate("regist", "Sign Up", nullptr));
        dbChecker->setText(QString());
        commandLinkButton->setText(QCoreApplication::translate("regist", "login", nullptr));
        register_tab->setTabText(register_tab->indexOf(r_tabTeachers), QCoreApplication::translate("regist", "Teachers", nullptr));
        label_12->setText(QCoreApplication::translate("regist", "Age:", nullptr));
        label_13->setText(QCoreApplication::translate("regist", "Username: ", nullptr));
        label_14->setText(QCoreApplication::translate("regist", "Password:", nullptr));
        label_6->setText(QCoreApplication::translate("regist", "Profile Picture", nullptr));
        sPic->setText(QCoreApplication::translate("regist", "...", nullptr));
        label_15->setText(QCoreApplication::translate("regist", "Full Name:", nullptr));
        sSignup->setText(QCoreApplication::translate("regist", "Sign Up", nullptr));
        dbChecker_2->setText(QString());
        commandLinkButton_2->setText(QCoreApplication::translate("regist", "login", nullptr));
        register_tab->setTabText(register_tab->indexOf(r_tabStudents), QCoreApplication::translate("regist", "Students", nullptr));
        label_16->setText(QCoreApplication::translate("regist", "Childs ID:", nullptr));
        pCID->setPlaceholderText(QCoreApplication::translate("regist", "eg. S0001", nullptr));
        label_18->setText(QCoreApplication::translate("regist", "Username: ", nullptr));
        label_19->setText(QCoreApplication::translate("regist", "Password:", nullptr));
        label_20->setText(QCoreApplication::translate("regist", "Full Name:", nullptr));
        pSignup->setText(QCoreApplication::translate("regist", "Sign Up", nullptr));
        dbChecker_3->setText(QString());
        commandLinkButton_3->setText(QCoreApplication::translate("regist", "login", nullptr));
        register_tab->setTabText(register_tab->indexOf(r_tabParents), QCoreApplication::translate("regist", "Parents", nullptr));
    } // retranslateUi

};

namespace Ui {
    class regist: public Ui_regist {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGIST_H
