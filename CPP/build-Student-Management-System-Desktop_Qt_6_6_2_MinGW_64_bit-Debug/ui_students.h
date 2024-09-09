/********************************************************************************
** Form generated from reading UI file 'students.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENTS_H
#define UI_STUDENTS_H

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
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_students
{
public:
    QWidget *s_centralwidget;
    QVBoxLayout *verticalLayout;
    QTabWidget *s_tabWidget;
    QWidget *s_classes;
    QListWidget *classes_listWidget;
    QLabel *label;
    QWidget *s_grades;
    QComboBox *gradesSubject_comboBox;
    QComboBox *testOrAss_comboBox_2;
    QTableView *grades_tableView;
    QPushButton *gradesGet_pushButton;
    QWidget *s_assignments;
    QTabWidget *tabWidget;
    QWidget *s_assDownload;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QWidget *s_assSubmit;
    QComboBox *submit_comboBox_3;
    QToolButton *assignmentfile_toolButton;
    QLineEdit *assignmentPath_lineEdit_10;
    QPushButton *assignmentSubmit_pushButton_3;
    QWidget *s_profile;
    QWidget *layoutWidget;
    QFormLayout *formLayout_6;
    QLabel *label_11;
    QLineEdit *profileAge_lineEdit_6;
    QWidget *layoutWidget_2;
    QFormLayout *formLayout_8;
    QLabel *label_13;
    QLineEdit *profileName_lineEdit_8;
    QWidget *layoutWidget_4;
    QFormLayout *formLayout_7;
    QLabel *label_12;
    QLineEdit *profileID_lineEdit_7;
    QLabel *profileImage_label_10;
    QCommandLinkButton *commandLinkButton;
    QWidget *s_messages;
    QPushButton *pushButton_5;
    QFrame *line_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QMenuBar *menubar;

    void setupUi(QMainWindow *students)
    {
        if (students->objectName().isEmpty())
            students->setObjectName("students");
        students->resize(737, 528);
        students->setMinimumSize(QSize(737, 528));
        students->setMaximumSize(QSize(800, 553));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/s.png"), QSize(), QIcon::Normal, QIcon::Off);
        students->setWindowIcon(icon);
        s_centralwidget = new QWidget(students);
        s_centralwidget->setObjectName("s_centralwidget");
        verticalLayout = new QVBoxLayout(s_centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        s_tabWidget = new QTabWidget(s_centralwidget);
        s_tabWidget->setObjectName("s_tabWidget");
        s_tabWidget->setStyleSheet(QString::fromUtf8(""));
        s_tabWidget->setTabPosition(QTabWidget::West);
        s_classes = new QWidget();
        s_classes->setObjectName("s_classes");
        classes_listWidget = new QListWidget(s_classes);
        classes_listWidget->setObjectName("classes_listWidget");
        classes_listWidget->setEnabled(true);
        classes_listWidget->setGeometry(QRect(20, 70, 411, 361));
        classes_listWidget->setAutoScroll(false);
        classes_listWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        label = new QLabel(s_classes);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 50, 49, 16));
        QFont font;
        font.setBold(true);
        label->setFont(font);
        s_tabWidget->addTab(s_classes, QString());
        s_grades = new QWidget();
        s_grades->setObjectName("s_grades");
        gradesSubject_comboBox = new QComboBox(s_grades);
        gradesSubject_comboBox->setObjectName("gradesSubject_comboBox");
        gradesSubject_comboBox->setGeometry(QRect(20, 80, 241, 24));
        testOrAss_comboBox_2 = new QComboBox(s_grades);
        testOrAss_comboBox_2->addItem(QString());
        testOrAss_comboBox_2->addItem(QString());
        testOrAss_comboBox_2->setObjectName("testOrAss_comboBox_2");
        testOrAss_comboBox_2->setGeometry(QRect(280, 80, 72, 24));
        testOrAss_comboBox_2->setEditable(false);
        grades_tableView = new QTableView(s_grades);
        grades_tableView->setObjectName("grades_tableView");
        grades_tableView->setEnabled(true);
        grades_tableView->setGeometry(QRect(20, 130, 401, 271));
        grades_tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        gradesGet_pushButton = new QPushButton(s_grades);
        gradesGet_pushButton->setObjectName("gradesGet_pushButton");
        gradesGet_pushButton->setGeometry(QRect(410, 80, 51, 24));
        s_tabWidget->addTab(s_grades, QString());
        s_assignments = new QWidget();
        s_assignments->setObjectName("s_assignments");
        tabWidget = new QTabWidget(s_assignments);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(0, 0, 711, 531));
        tabWidget->setTabPosition(QTabWidget::West);
        tabWidget->setTabShape(QTabWidget::Rounded);
        s_assDownload = new QWidget();
        s_assDownload->setObjectName("s_assDownload");
        scrollArea_2 = new QScrollArea(s_assDownload);
        scrollArea_2->setObjectName("scrollArea_2");
        scrollArea_2->setGeometry(QRect(0, 0, 661, 481));
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName("scrollAreaWidgetContents_2");
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 659, 479));
        scrollArea_2->setWidget(scrollAreaWidgetContents_2);
        tabWidget->addTab(s_assDownload, QString());
        s_assSubmit = new QWidget();
        s_assSubmit->setObjectName("s_assSubmit");
        submit_comboBox_3 = new QComboBox(s_assSubmit);
        submit_comboBox_3->setObjectName("submit_comboBox_3");
        submit_comboBox_3->setGeometry(QRect(20, 60, 371, 24));
        assignmentfile_toolButton = new QToolButton(s_assSubmit);
        assignmentfile_toolButton->setObjectName("assignmentfile_toolButton");
        assignmentfile_toolButton->setGeometry(QRect(260, 200, 23, 23));
        assignmentPath_lineEdit_10 = new QLineEdit(s_assSubmit);
        assignmentPath_lineEdit_10->setObjectName("assignmentPath_lineEdit_10");
        assignmentPath_lineEdit_10->setGeometry(QRect(20, 200, 231, 24));
        assignmentSubmit_pushButton_3 = new QPushButton(s_assSubmit);
        assignmentSubmit_pushButton_3->setObjectName("assignmentSubmit_pushButton_3");
        assignmentSubmit_pushButton_3->setGeometry(QRect(260, 320, 80, 24));
        tabWidget->addTab(s_assSubmit, QString());
        s_tabWidget->addTab(s_assignments, QString());
        s_profile = new QWidget();
        s_profile->setObjectName("s_profile");
        layoutWidget = new QWidget(s_profile);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(220, 110, 91, 26));
        formLayout_6 = new QFormLayout(layoutWidget);
        formLayout_6->setObjectName("formLayout_6");
        formLayout_6->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(layoutWidget);
        label_11->setObjectName("label_11");

        formLayout_6->setWidget(0, QFormLayout::LabelRole, label_11);

        profileAge_lineEdit_6 = new QLineEdit(layoutWidget);
        profileAge_lineEdit_6->setObjectName("profileAge_lineEdit_6");
        profileAge_lineEdit_6->setReadOnly(true);

        formLayout_6->setWidget(0, QFormLayout::FieldRole, profileAge_lineEdit_6);

        layoutWidget_2 = new QWidget(s_profile);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(180, 70, 361, 26));
        formLayout_8 = new QFormLayout(layoutWidget_2);
        formLayout_8->setObjectName("formLayout_8");
        formLayout_8->setContentsMargins(0, 0, 0, 0);
        label_13 = new QLabel(layoutWidget_2);
        label_13->setObjectName("label_13");
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        label_13->setFont(font1);

        formLayout_8->setWidget(0, QFormLayout::LabelRole, label_13);

        profileName_lineEdit_8 = new QLineEdit(layoutWidget_2);
        profileName_lineEdit_8->setObjectName("profileName_lineEdit_8");
        profileName_lineEdit_8->setEnabled(true);
        profileName_lineEdit_8->setReadOnly(true);

        formLayout_8->setWidget(0, QFormLayout::FieldRole, profileName_lineEdit_8);

        layoutWidget_4 = new QWidget(s_profile);
        layoutWidget_4->setObjectName("layoutWidget_4");
        layoutWidget_4->setGeometry(QRect(190, 150, 201, 26));
        formLayout_7 = new QFormLayout(layoutWidget_4);
        formLayout_7->setObjectName("formLayout_7");
        formLayout_7->setContentsMargins(0, 0, 0, 0);
        label_12 = new QLabel(layoutWidget_4);
        label_12->setObjectName("label_12");
        QFont font2;
        font2.setPointSize(10);
        label_12->setFont(font2);

        formLayout_7->setWidget(0, QFormLayout::LabelRole, label_12);

        profileID_lineEdit_7 = new QLineEdit(layoutWidget_4);
        profileID_lineEdit_7->setObjectName("profileID_lineEdit_7");
        profileID_lineEdit_7->setReadOnly(true);

        formLayout_7->setWidget(0, QFormLayout::FieldRole, profileID_lineEdit_7);

        profileImage_label_10 = new QLabel(s_profile);
        profileImage_label_10->setObjectName("profileImage_label_10");
        profileImage_label_10->setGeometry(QRect(10, 70, 151, 151));
        profileImage_label_10->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
"color: rgb(0, 0, 0);"));
        profileImage_label_10->setScaledContents(true);
        profileImage_label_10->setAlignment(Qt::AlignCenter);
        commandLinkButton = new QCommandLinkButton(s_profile);
        commandLinkButton->setObjectName("commandLinkButton");
        commandLinkButton->setGeometry(QRect(570, 430, 101, 41));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../../../../Downloads/logout.png"), QSize(), QIcon::Normal, QIcon::Off);
        commandLinkButton->setIcon(icon1);
        s_tabWidget->addTab(s_profile, QString());
        s_messages = new QWidget();
        s_messages->setObjectName("s_messages");
        pushButton_5 = new QPushButton(s_messages);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(10, 10, 80, 24));
        line_2 = new QFrame(s_messages);
        line_2->setObjectName("line_2");
        line_2->setGeometry(QRect(0, 30, 661, 16));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        scrollArea = new QScrollArea(s_messages);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(0, 40, 611, 471));
        scrollArea->setWidgetResizable(true);
        scrollArea->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 609, 469));
        scrollArea->setWidget(scrollAreaWidgetContents);
        s_tabWidget->addTab(s_messages, QString());

        verticalLayout->addWidget(s_tabWidget);

        students->setCentralWidget(s_centralwidget);
        menubar = new QMenuBar(students);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 737, 21));
        students->setMenuBar(menubar);

        retranslateUi(students);

        s_tabWidget->setCurrentIndex(0);
        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(students);
    } // setupUi

    void retranslateUi(QMainWindow *students)
    {
        students->setWindowTitle(QCoreApplication::translate("students", "Student", nullptr));
        label->setText(QCoreApplication::translate("students", "Classes", nullptr));
        s_tabWidget->setTabText(s_tabWidget->indexOf(s_classes), QCoreApplication::translate("students", "Classes", nullptr));
        gradesSubject_comboBox->setPlaceholderText(QCoreApplication::translate("students", "Subject", nullptr));
        testOrAss_comboBox_2->setItemText(0, QCoreApplication::translate("students", "Test", nullptr));
        testOrAss_comboBox_2->setItemText(1, QCoreApplication::translate("students", "Assignment", nullptr));

        testOrAss_comboBox_2->setPlaceholderText(QCoreApplication::translate("students", "Choose", nullptr));
        gradesGet_pushButton->setText(QCoreApplication::translate("students", "Get", nullptr));
        s_tabWidget->setTabText(s_tabWidget->indexOf(s_grades), QCoreApplication::translate("students", "Grades", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(s_assDownload), QCoreApplication::translate("students", "Download", nullptr));
        submit_comboBox_3->setPlaceholderText(QCoreApplication::translate("students", "Subject - Assignment Title", nullptr));
        assignmentfile_toolButton->setText(QCoreApplication::translate("students", "...", nullptr));
        assignmentPath_lineEdit_10->setPlaceholderText(QCoreApplication::translate("students", "Upload File...(PDF,DOCS)", nullptr));
        assignmentSubmit_pushButton_3->setText(QCoreApplication::translate("students", "Submit", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(s_assSubmit), QCoreApplication::translate("students", "Submit", nullptr));
        s_tabWidget->setTabText(s_tabWidget->indexOf(s_assignments), QCoreApplication::translate("students", "Assignments", nullptr));
        label_11->setText(QCoreApplication::translate("students", "Age:", nullptr));
        label_13->setText(QCoreApplication::translate("students", "Name:", nullptr));
        profileName_lineEdit_8->setText(QString());
        label_12->setText(QCoreApplication::translate("students", "Student Id:", nullptr));
        profileImage_label_10->setText(QCoreApplication::translate("students", "img", nullptr));
        commandLinkButton->setText(QCoreApplication::translate("students", "Log Out", nullptr));
        s_tabWidget->setTabText(s_tabWidget->indexOf(s_profile), QCoreApplication::translate("students", "My Profile", nullptr));
        pushButton_5->setText(QCoreApplication::translate("students", "New Message", nullptr));
        s_tabWidget->setTabText(s_tabWidget->indexOf(s_messages), QCoreApplication::translate("students", "Messages", nullptr));
    } // retranslateUi

};

namespace Ui {
    class students: public Ui_students {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTS_H
