/********************************************************************************
** Form generated from reading UI file 'parents.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PARENTS_H
#define UI_PARENTS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_parents
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *p_grades;
    QTableView *tableView_2;
    QComboBox *gradeType_comboBox_6;
    QPushButton *getGrades_pushButton_4;
    QWidget *p_cProfile;
    QWidget *layoutWidget_2;
    QFormLayout *formLayout_8;
    QLabel *label_13;
    QLineEdit *childName_lineEdit_8;
    QWidget *layoutWidget_4;
    QFormLayout *formLayout_7;
    QLabel *label_12;
    QLineEdit *childID_lineEdit_7;
    QWidget *layoutWidget;
    QFormLayout *formLayout_6;
    QLabel *label_11;
    QLineEdit *childAge_lineEdit_6;
    QLabel *childPP_label_10;
    QWidget *p_tProfile;
    QWidget *layoutWidget_5;
    QFormLayout *formLayout_5;
    QLabel *label_8;
    QLineEdit *teacherid_lineEdit_5;
    QLabel *teacherPP_label_4;
    QWidget *layoutWidget_6;
    QFormLayout *formLayout_3;
    QLabel *label_5;
    QLineEdit *teacherName_lineEdit_2;
    QWidget *layoutWidget_7;
    QFormLayout *formLayout_12;
    QLabel *label_23;
    QLineEdit *teacherPhone_lineEdit_12;
    QWidget *layoutWidget_8;
    QFormLayout *formLayout_2;
    QLabel *label_7;
    QLineEdit *teacherSubject_lineEdit_4;
    QComboBox *selectTeacher_comboBox;
    QCommandLinkButton *commandLinkButton;
    QWidget *t_messages;
    QFrame *line_4;
    QPushButton *pushButton_6;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QMenuBar *menubar;

    void setupUi(QMainWindow *parents)
    {
        if (parents->objectName().isEmpty())
            parents->setObjectName("parents");
        parents->resize(702, 501);
        parents->setMaximumSize(QSize(702, 501));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/P.png"), QSize(), QIcon::Normal, QIcon::Off);
        parents->setWindowIcon(icon);
        centralwidget = new QWidget(parents);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setMinimumSize(QSize(684, 462));
        tabWidget->setMaximumSize(QSize(800, 800));
        tabWidget->setTabPosition(QTabWidget::West);
        p_grades = new QWidget();
        p_grades->setObjectName("p_grades");
        tableView_2 = new QTableView(p_grades);
        tableView_2->setObjectName("tableView_2");
        tableView_2->setEnabled(true);
        tableView_2->setGeometry(QRect(20, 110, 481, 271));
        tableView_2->setEditTriggers(QAbstractItemView::NoEditTriggers);
        gradeType_comboBox_6 = new QComboBox(p_grades);
        gradeType_comboBox_6->addItem(QString());
        gradeType_comboBox_6->addItem(QString());
        gradeType_comboBox_6->setObjectName("gradeType_comboBox_6");
        gradeType_comboBox_6->setGeometry(QRect(231, 60, 121, 24));
        gradeType_comboBox_6->setEditable(false);
        getGrades_pushButton_4 = new QPushButton(p_grades);
        getGrades_pushButton_4->setObjectName("getGrades_pushButton_4");
        getGrades_pushButton_4->setGeometry(QRect(410, 60, 51, 24));
        tabWidget->addTab(p_grades, QString());
        p_cProfile = new QWidget();
        p_cProfile->setObjectName("p_cProfile");
        layoutWidget_2 = new QWidget(p_cProfile);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(180, 50, 361, 26));
        formLayout_8 = new QFormLayout(layoutWidget_2);
        formLayout_8->setObjectName("formLayout_8");
        formLayout_8->setContentsMargins(0, 0, 0, 0);
        label_13 = new QLabel(layoutWidget_2);
        label_13->setObjectName("label_13");
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        label_13->setFont(font);

        formLayout_8->setWidget(0, QFormLayout::LabelRole, label_13);

        childName_lineEdit_8 = new QLineEdit(layoutWidget_2);
        childName_lineEdit_8->setObjectName("childName_lineEdit_8");
        childName_lineEdit_8->setEnabled(true);
        childName_lineEdit_8->setReadOnly(true);

        formLayout_8->setWidget(0, QFormLayout::FieldRole, childName_lineEdit_8);

        layoutWidget_4 = new QWidget(p_cProfile);
        layoutWidget_4->setObjectName("layoutWidget_4");
        layoutWidget_4->setGeometry(QRect(190, 130, 201, 26));
        formLayout_7 = new QFormLayout(layoutWidget_4);
        formLayout_7->setObjectName("formLayout_7");
        formLayout_7->setContentsMargins(0, 0, 0, 0);
        label_12 = new QLabel(layoutWidget_4);
        label_12->setObjectName("label_12");
        QFont font1;
        font1.setPointSize(10);
        label_12->setFont(font1);

        formLayout_7->setWidget(0, QFormLayout::LabelRole, label_12);

        childID_lineEdit_7 = new QLineEdit(layoutWidget_4);
        childID_lineEdit_7->setObjectName("childID_lineEdit_7");
        childID_lineEdit_7->setReadOnly(true);

        formLayout_7->setWidget(0, QFormLayout::FieldRole, childID_lineEdit_7);

        layoutWidget = new QWidget(p_cProfile);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(220, 90, 91, 26));
        formLayout_6 = new QFormLayout(layoutWidget);
        formLayout_6->setObjectName("formLayout_6");
        formLayout_6->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(layoutWidget);
        label_11->setObjectName("label_11");

        formLayout_6->setWidget(0, QFormLayout::LabelRole, label_11);

        childAge_lineEdit_6 = new QLineEdit(layoutWidget);
        childAge_lineEdit_6->setObjectName("childAge_lineEdit_6");
        childAge_lineEdit_6->setReadOnly(true);

        formLayout_6->setWidget(0, QFormLayout::FieldRole, childAge_lineEdit_6);

        childPP_label_10 = new QLabel(p_cProfile);
        childPP_label_10->setObjectName("childPP_label_10");
        childPP_label_10->setGeometry(QRect(10, 50, 151, 151));
        childPP_label_10->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
"color: rgb(0, 0, 0);"));
        childPP_label_10->setAlignment(Qt::AlignCenter);
        tabWidget->addTab(p_cProfile, QString());
        p_tProfile = new QWidget();
        p_tProfile->setObjectName("p_tProfile");
        layoutWidget_5 = new QWidget(p_tProfile);
        layoutWidget_5->setObjectName("layoutWidget_5");
        layoutWidget_5->setGeometry(QRect(230, 150, 181, 26));
        formLayout_5 = new QFormLayout(layoutWidget_5);
        formLayout_5->setObjectName("formLayout_5");
        formLayout_5->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(layoutWidget_5);
        label_8->setObjectName("label_8");
        label_8->setFont(font1);

        formLayout_5->setWidget(0, QFormLayout::LabelRole, label_8);

        teacherid_lineEdit_5 = new QLineEdit(layoutWidget_5);
        teacherid_lineEdit_5->setObjectName("teacherid_lineEdit_5");
        teacherid_lineEdit_5->setReadOnly(true);

        formLayout_5->setWidget(0, QFormLayout::FieldRole, teacherid_lineEdit_5);

        teacherPP_label_4 = new QLabel(p_tProfile);
        teacherPP_label_4->setObjectName("teacherPP_label_4");
        teacherPP_label_4->setGeometry(QRect(10, 50, 161, 171));
        teacherPP_label_4->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
"color: rgb(0, 0, 0);"));
        teacherPP_label_4->setAlignment(Qt::AlignCenter);
        teacherPP_label_4->setWordWrap(true);
        layoutWidget_6 = new QWidget(p_tProfile);
        layoutWidget_6->setObjectName("layoutWidget_6");
        layoutWidget_6->setGeometry(QRect(204, 70, 361, 26));
        formLayout_3 = new QFormLayout(layoutWidget_6);
        formLayout_3->setObjectName("formLayout_3");
        formLayout_3->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget_6);
        label_5->setObjectName("label_5");
        label_5->setFont(font);

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_5);

        teacherName_lineEdit_2 = new QLineEdit(layoutWidget_6);
        teacherName_lineEdit_2->setObjectName("teacherName_lineEdit_2");
        teacherName_lineEdit_2->setReadOnly(true);

        formLayout_3->setWidget(0, QFormLayout::FieldRole, teacherName_lineEdit_2);

        layoutWidget_7 = new QWidget(p_tProfile);
        layoutWidget_7->setObjectName("layoutWidget_7");
        layoutWidget_7->setGeometry(QRect(190, 190, 301, 26));
        formLayout_12 = new QFormLayout(layoutWidget_7);
        formLayout_12->setObjectName("formLayout_12");
        formLayout_12->setContentsMargins(0, 0, 0, 0);
        label_23 = new QLabel(layoutWidget_7);
        label_23->setObjectName("label_23");

        formLayout_12->setWidget(0, QFormLayout::LabelRole, label_23);

        teacherPhone_lineEdit_12 = new QLineEdit(layoutWidget_7);
        teacherPhone_lineEdit_12->setObjectName("teacherPhone_lineEdit_12");
        teacherPhone_lineEdit_12->setReadOnly(true);

        formLayout_12->setWidget(0, QFormLayout::FieldRole, teacherPhone_lineEdit_12);

        layoutWidget_8 = new QWidget(p_tProfile);
        layoutWidget_8->setObjectName("layoutWidget_8");
        layoutWidget_8->setGeometry(QRect(200, 110, 331, 26));
        formLayout_2 = new QFormLayout(layoutWidget_8);
        formLayout_2->setObjectName("formLayout_2");
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(layoutWidget_8);
        label_7->setObjectName("label_7");

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_7);

        teacherSubject_lineEdit_4 = new QLineEdit(layoutWidget_8);
        teacherSubject_lineEdit_4->setObjectName("teacherSubject_lineEdit_4");
        teacherSubject_lineEdit_4->setReadOnly(true);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, teacherSubject_lineEdit_4);

        selectTeacher_comboBox = new QComboBox(p_tProfile);
        selectTeacher_comboBox->setObjectName("selectTeacher_comboBox");
        selectTeacher_comboBox->setGeometry(QRect(110, 10, 371, 24));
        commandLinkButton = new QCommandLinkButton(p_tProfile);
        commandLinkButton->setObjectName("commandLinkButton");
        commandLinkButton->setGeometry(QRect(540, 400, 91, 41));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../../../../Downloads/logout.png"), QSize(), QIcon::Normal, QIcon::Off);
        commandLinkButton->setIcon(icon1);
        tabWidget->addTab(p_tProfile, QString());
        t_messages = new QWidget();
        t_messages->setObjectName("t_messages");
        line_4 = new QFrame(t_messages);
        line_4->setObjectName("line_4");
        line_4->setGeometry(QRect(0, 30, 661, 16));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        pushButton_6 = new QPushButton(t_messages);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(10, 10, 80, 24));
        scrollArea = new QScrollArea(t_messages);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(0, 40, 621, 421));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 619, 419));
        scrollArea->setWidget(scrollAreaWidgetContents);
        tabWidget->addTab(t_messages, QString());

        verticalLayout->addWidget(tabWidget);

        parents->setCentralWidget(centralwidget);
        menubar = new QMenuBar(parents);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 702, 21));
        parents->setMenuBar(menubar);

        retranslateUi(parents);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(parents);
    } // setupUi

    void retranslateUi(QMainWindow *parents)
    {
        parents->setWindowTitle(QCoreApplication::translate("parents", "Parent", nullptr));
        gradeType_comboBox_6->setItemText(0, QCoreApplication::translate("parents", "Test", nullptr));
        gradeType_comboBox_6->setItemText(1, QCoreApplication::translate("parents", "Assignment", nullptr));

        gradeType_comboBox_6->setPlaceholderText(QCoreApplication::translate("parents", "Choose", nullptr));
        getGrades_pushButton_4->setText(QCoreApplication::translate("parents", "Get", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(p_grades), QCoreApplication::translate("parents", "Grades", nullptr));
        label_13->setText(QCoreApplication::translate("parents", "Name:", nullptr));
        childName_lineEdit_8->setText(QString());
        label_12->setText(QCoreApplication::translate("parents", "Student Id:", nullptr));
        label_11->setText(QCoreApplication::translate("parents", "Age:", nullptr));
        childPP_label_10->setText(QCoreApplication::translate("parents", "img", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(p_cProfile), QCoreApplication::translate("parents", "Childs Profile", nullptr));
        label_8->setText(QCoreApplication::translate("parents", "Id:", nullptr));
        teacherPP_label_4->setText(QString());
        label_5->setText(QCoreApplication::translate("parents", "Name:", nullptr));
        label_23->setText(QCoreApplication::translate("parents", "Phone No:", nullptr));
        label_7->setText(QCoreApplication::translate("parents", "Subject:", nullptr));
        selectTeacher_comboBox->setPlaceholderText(QCoreApplication::translate("parents", "Select Teacher", nullptr));
        commandLinkButton->setText(QCoreApplication::translate("parents", "Log Out", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(p_tProfile), QCoreApplication::translate("parents", "Teacher Profile", nullptr));
        pushButton_6->setText(QCoreApplication::translate("parents", "New Message", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(t_messages), QCoreApplication::translate("parents", "Messages", nullptr));
    } // retranslateUi

};

namespace Ui {
    class parents: public Ui_parents {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PARENTS_H
