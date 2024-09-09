/********************************************************************************
** Form generated from reading UI file 'teachers.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEACHERS_H
#define UI_TEACHERS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QDateTimeEdit>
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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_teachers
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *Class_tab;
    QTableView *studentlist_tableView;
    QLabel *label;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLineEdit *addStudent_lineEdit;
    QPushButton *addStudent_pushButton;
    QLabel *label_3;
    QWidget *Assignment;
    QTabWidget *tabWidget_2;
    QWidget *tab;
    QDateTimeEdit *Start_dateTimeEdit;
    QDateTimeEdit *End_dateTimeEdit_2;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_21;
    QPushButton *selectAllStudents_pushButton_6;
    QPushButton *AssignmnetUpload_pushButton_7;
    QLineEdit *assignmentUpload_lineEdit_10;
    QToolButton *assignmentUpload_toolButton;
    QLineEdit *AssignmentUpload_lineEdit_11;
    QListWidget *assignmentWidget_listWidget;
    QWidget *tab_2;
    QComboBox *assignment_comboBox_5;
    QListWidget *assignmnetSubmitted_listWidget;
    QPushButton *gradeAAssignments_pushButton;
    QComboBox *gradeLevel_comboBox;
    QLabel *label_14;
    QWidget *Test;
    QListWidget *gradeTest_listWidget_2;
    QLabel *label_9;
    QComboBox *testTitle_comboBox;
    QComboBox *gradeAssign_comboBox_2;
    QPushButton *grade_pushButton_4;
    QLabel *label_22;
    QLineEdit *createTest_lineEdit;
    QPushButton *createTest_pushButton;
    QLabel *label_4;
    QLabel *label_6;
    QWidget *vStudent;
    QLabel *studenProfilePic;
    QWidget *layoutWidget;
    QFormLayout *formLayout_7;
    QLabel *label_12;
    QLineEdit *studentIdRetrieve;
    QWidget *layoutWidget_2;
    QFormLayout *formLayout_8;
    QLabel *label_13;
    QLineEdit *nameRetrieve;
    QComboBox *selectStudent_combo1;
    QWidget *layoutWidget1;
    QFormLayout *formLayout_6;
    QLabel *label_11;
    QLineEdit *ageRetrieve;
    QWidget *tProfile;
    QLabel *profilepicture;
    QPushButton *mypEditbutton;
    QPushButton *mypSavebutton;
    QWidget *layoutWidget2;
    QFormLayout *formLayout_2;
    QLabel *label_7;
    QLineEdit *mypSubject;
    QWidget *layoutWidget3;
    QFormLayout *formLayout_3;
    QLabel *label_5;
    QLineEdit *mypName;
    QWidget *layoutWidget4;
    QFormLayout *formLayout_5;
    QLabel *label_8;
    QLineEdit *mypID;
    QWidget *layoutWidget_4;
    QFormLayout *formLayout_12;
    QLabel *label_23;
    QLineEdit *mypPhoneNumber;
    QToolButton *toolButton;
    QLabel *label_10;
    QCommandLinkButton *commandLinkButton;
    QWidget *Messages;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QPushButton *pushButton_5;
    QFrame *line_2;
    QMenuBar *menubar;

    void setupUi(QMainWindow *teachers)
    {
        if (teachers->objectName().isEmpty())
            teachers->setObjectName("teachers");
        teachers->resize(753, 498);
        teachers->setMinimumSize(QSize(0, 0));
        teachers->setMaximumSize(QSize(753, 498));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/T.png"), QSize(), QIcon::Normal, QIcon::Off);
        teachers->setWindowIcon(icon);
        centralwidget = new QWidget(teachers);
        centralwidget->setObjectName("centralwidget");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(0, 0, 711, 481));
        tabWidget->setTabPosition(QTabWidget::West);
        Class_tab = new QWidget();
        Class_tab->setObjectName("Class_tab");
        studentlist_tableView = new QTableView(Class_tab);
        studentlist_tableView->setObjectName("studentlist_tableView");
        studentlist_tableView->setGeometry(QRect(50, 40, 371, 192));
        label = new QLabel(Class_tab);
        label->setObjectName("label");
        label->setGeometry(QRect(50, 20, 71, 20));
        QFont font;
        font.setPointSize(9);
        font.setBold(true);
        font.setItalic(false);
        font.setUnderline(false);
        label->setFont(font);
        formLayoutWidget = new QWidget(Class_tab);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(60, 270, 271, 31));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName("label_2");
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        label_2->setFont(font1);

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        addStudent_lineEdit = new QLineEdit(formLayoutWidget);
        addStudent_lineEdit->setObjectName("addStudent_lineEdit");

        formLayout->setWidget(0, QFormLayout::FieldRole, addStudent_lineEdit);

        addStudent_pushButton = new QPushButton(Class_tab);
        addStudent_pushButton->setObjectName("addStudent_pushButton");
        addStudent_pushButton->setGeometry(QRect(260, 310, 71, 24));
        label_3 = new QLabel(Class_tab);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(380, 260, 151, 51));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(false);
        font2.setItalic(true);
        label_3->setFont(font2);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_3->setWordWrap(true);
        tabWidget->addTab(Class_tab, QString());
        Assignment = new QWidget();
        Assignment->setObjectName("Assignment");
        tabWidget_2 = new QTabWidget(Assignment);
        tabWidget_2->setObjectName("tabWidget_2");
        tabWidget_2->setGeometry(QRect(0, -10, 681, 491));
        tabWidget_2->setStyleSheet(QString::fromUtf8(""));
        tabWidget_2->setTabPosition(QTabWidget::West);
        tab = new QWidget();
        tab->setObjectName("tab");
        Start_dateTimeEdit = new QDateTimeEdit(tab);
        Start_dateTimeEdit->setObjectName("Start_dateTimeEdit");
        Start_dateTimeEdit->setGeometry(QRect(360, 180, 141, 25));
        Start_dateTimeEdit->setCalendarPopup(true);
        End_dateTimeEdit_2 = new QDateTimeEdit(tab);
        End_dateTimeEdit_2->setObjectName("End_dateTimeEdit_2");
        End_dateTimeEdit_2->setGeometry(QRect(360, 250, 141, 25));
        End_dateTimeEdit_2->setCalendarPopup(true);
        label_19 = new QLabel(tab);
        label_19->setObjectName("label_19");
        label_19->setGeometry(QRect(30, 140, 91, 16));
        QFont font3;
        font3.setPointSize(10);
        label_19->setFont(font3);
        label_20 = new QLabel(tab);
        label_20->setObjectName("label_20");
        label_20->setGeometry(QRect(360, 160, 61, 16));
        QFont font4;
        font4.setBold(true);
        label_20->setFont(font4);
        label_21 = new QLabel(tab);
        label_21->setObjectName("label_21");
        label_21->setGeometry(QRect(360, 230, 61, 16));
        QFont font5;
        font5.setPointSize(9);
        font5.setBold(true);
        label_21->setFont(font5);
        selectAllStudents_pushButton_6 = new QPushButton(tab);
        selectAllStudents_pushButton_6->setObjectName("selectAllStudents_pushButton_6");
        selectAllStudents_pushButton_6->setGeometry(QRect(20, 330, 101, 24));
        AssignmnetUpload_pushButton_7 = new QPushButton(tab);
        AssignmnetUpload_pushButton_7->setObjectName("AssignmnetUpload_pushButton_7");
        AssignmnetUpload_pushButton_7->setGeometry(QRect(380, 380, 80, 24));
        assignmentUpload_lineEdit_10 = new QLineEdit(tab);
        assignmentUpload_lineEdit_10->setObjectName("assignmentUpload_lineEdit_10");
        assignmentUpload_lineEdit_10->setGeometry(QRect(30, 80, 231, 24));
        assignmentUpload_toolButton = new QToolButton(tab);
        assignmentUpload_toolButton->setObjectName("assignmentUpload_toolButton");
        assignmentUpload_toolButton->setGeometry(QRect(270, 80, 23, 23));
        AssignmentUpload_lineEdit_11 = new QLineEdit(tab);
        AssignmentUpload_lineEdit_11->setObjectName("AssignmentUpload_lineEdit_11");
        AssignmentUpload_lineEdit_11->setGeometry(QRect(320, 80, 161, 24));
        assignmentWidget_listWidget = new QListWidget(tab);
        assignmentWidget_listWidget->setObjectName("assignmentWidget_listWidget");
        assignmentWidget_listWidget->setGeometry(QRect(20, 160, 301, 161));
        assignmentWidget_listWidget->setSelectionMode(QAbstractItemView::MultiSelection);
        tabWidget_2->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        assignment_comboBox_5 = new QComboBox(tab_2);
        assignment_comboBox_5->setObjectName("assignment_comboBox_5");
        assignment_comboBox_5->setGeometry(QRect(10, 10, 191, 31));
        assignmnetSubmitted_listWidget = new QListWidget(tab_2);
        assignmnetSubmitted_listWidget->setObjectName("assignmnetSubmitted_listWidget");
        assignmnetSubmitted_listWidget->setGeometry(QRect(0, 50, 461, 411));
        assignmnetSubmitted_listWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        assignmnetSubmitted_listWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        assignmnetSubmitted_listWidget->setSortingEnabled(true);
        gradeAAssignments_pushButton = new QPushButton(tab_2);
        gradeAAssignments_pushButton->setObjectName("gradeAAssignments_pushButton");
        gradeAAssignments_pushButton->setGeometry(QRect(470, 330, 80, 31));
        gradeLevel_comboBox = new QComboBox(tab_2);
        gradeLevel_comboBox->addItem(QString());
        gradeLevel_comboBox->addItem(QString());
        gradeLevel_comboBox->addItem(QString());
        gradeLevel_comboBox->addItem(QString());
        gradeLevel_comboBox->addItem(QString());
        gradeLevel_comboBox->addItem(QString());
        gradeLevel_comboBox->addItem(QString());
        gradeLevel_comboBox->addItem(QString());
        gradeLevel_comboBox->setObjectName("gradeLevel_comboBox");
        gradeLevel_comboBox->setGeometry(QRect(470, 180, 72, 24));
        label_14 = new QLabel(tab_2);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(330, 20, 201, 21));
        QFont font6;
        font6.setBold(false);
        label_14->setFont(font6);
        label_14->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        tabWidget_2->addTab(tab_2, QString());
        tabWidget->addTab(Assignment, QString());
        Test = new QWidget();
        Test->setObjectName("Test");
        gradeTest_listWidget_2 = new QListWidget(Test);
        gradeTest_listWidget_2->setObjectName("gradeTest_listWidget_2");
        gradeTest_listWidget_2->setGeometry(QRect(30, 50, 311, 241));
        gradeTest_listWidget_2->setEditTriggers(QAbstractItemView::NoEditTriggers);
        label_9 = new QLabel(Test);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(50, 30, 91, 16));
        label_9->setFont(font4);
        testTitle_comboBox = new QComboBox(Test);
        testTitle_comboBox->addItem(QString());
        testTitle_comboBox->setObjectName("testTitle_comboBox");
        testTitle_comboBox->setGeometry(QRect(370, 170, 81, 24));
        testTitle_comboBox->setEditable(false);
        gradeAssign_comboBox_2 = new QComboBox(Test);
        gradeAssign_comboBox_2->addItem(QString());
        gradeAssign_comboBox_2->addItem(QString());
        gradeAssign_comboBox_2->addItem(QString());
        gradeAssign_comboBox_2->addItem(QString());
        gradeAssign_comboBox_2->addItem(QString());
        gradeAssign_comboBox_2->addItem(QString());
        gradeAssign_comboBox_2->addItem(QString());
        gradeAssign_comboBox_2->addItem(QString());
        gradeAssign_comboBox_2->setObjectName("gradeAssign_comboBox_2");
        gradeAssign_comboBox_2->setGeometry(QRect(460, 170, 72, 24));
        QFont font7;
        font7.setKerning(true);
        gradeAssign_comboBox_2->setFont(font7);
        grade_pushButton_4 = new QPushButton(Test);
        grade_pushButton_4->setObjectName("grade_pushButton_4");
        grade_pushButton_4->setGeometry(QRect(400, 310, 80, 24));
        label_22 = new QLabel(Test);
        label_22->setObjectName("label_22");
        label_22->setGeometry(QRect(380, 150, 61, 16));
        label_22->setFont(font4);
        createTest_lineEdit = new QLineEdit(Test);
        createTest_lineEdit->setObjectName("createTest_lineEdit");
        createTest_lineEdit->setGeometry(QRect(370, 70, 113, 24));
        createTest_pushButton = new QPushButton(Test);
        createTest_pushButton->setObjectName("createTest_pushButton");
        createTest_pushButton->setGeometry(QRect(490, 70, 61, 24));
        label_4 = new QLabel(Test);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(380, 50, 71, 16));
        label_4->setFont(font4);
        label_6 = new QLabel(Test);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(470, 150, 49, 16));
        label_6->setFont(font4);
        tabWidget->addTab(Test, QString());
        vStudent = new QWidget();
        vStudent->setObjectName("vStudent");
        studenProfilePic = new QLabel(vStudent);
        studenProfilePic->setObjectName("studenProfilePic");
        studenProfilePic->setGeometry(QRect(20, 90, 151, 151));
        studenProfilePic->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
"color: rgb(0, 0, 0);"));
        studenProfilePic->setAlignment(Qt::AlignCenter);
        layoutWidget = new QWidget(vStudent);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(200, 170, 201, 26));
        formLayout_7 = new QFormLayout(layoutWidget);
        formLayout_7->setObjectName("formLayout_7");
        formLayout_7->setContentsMargins(0, 0, 0, 0);
        label_12 = new QLabel(layoutWidget);
        label_12->setObjectName("label_12");
        label_12->setFont(font3);

        formLayout_7->setWidget(0, QFormLayout::LabelRole, label_12);

        studentIdRetrieve = new QLineEdit(layoutWidget);
        studentIdRetrieve->setObjectName("studentIdRetrieve");
        studentIdRetrieve->setReadOnly(true);

        formLayout_7->setWidget(0, QFormLayout::FieldRole, studentIdRetrieve);

        layoutWidget_2 = new QWidget(vStudent);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(190, 90, 311, 26));
        formLayout_8 = new QFormLayout(layoutWidget_2);
        formLayout_8->setObjectName("formLayout_8");
        formLayout_8->setContentsMargins(0, 0, 0, 0);
        label_13 = new QLabel(layoutWidget_2);
        label_13->setObjectName("label_13");
        label_13->setFont(font1);

        formLayout_8->setWidget(0, QFormLayout::LabelRole, label_13);

        nameRetrieve = new QLineEdit(layoutWidget_2);
        nameRetrieve->setObjectName("nameRetrieve");
        nameRetrieve->setEnabled(true);
        nameRetrieve->setReadOnly(true);

        formLayout_8->setWidget(0, QFormLayout::FieldRole, nameRetrieve);

        selectStudent_combo1 = new QComboBox(vStudent);
        selectStudent_combo1->setObjectName("selectStudent_combo1");
        selectStudent_combo1->setGeometry(QRect(60, 40, 371, 24));
        QFont font8;
        font8.setHintingPreference(QFont::PreferDefaultHinting);
        selectStudent_combo1->setFont(font8);
        layoutWidget1 = new QWidget(vStudent);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(230, 130, 91, 26));
        formLayout_6 = new QFormLayout(layoutWidget1);
        formLayout_6->setObjectName("formLayout_6");
        formLayout_6->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(layoutWidget1);
        label_11->setObjectName("label_11");

        formLayout_6->setWidget(0, QFormLayout::LabelRole, label_11);

        ageRetrieve = new QLineEdit(layoutWidget1);
        ageRetrieve->setObjectName("ageRetrieve");
        ageRetrieve->setReadOnly(true);

        formLayout_6->setWidget(0, QFormLayout::FieldRole, ageRetrieve);

        tabWidget->addTab(vStudent, QString());
        tProfile = new QWidget();
        tProfile->setObjectName("tProfile");
        profilepicture = new QLabel(tProfile);
        profilepicture->setObjectName("profilepicture");
        profilepicture->setGeometry(QRect(20, 50, 161, 171));
        profilepicture->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
"color: rgb(0, 0, 0);"));
        profilepicture->setAlignment(Qt::AlignCenter);
        profilepicture->setWordWrap(true);
        mypEditbutton = new QPushButton(tProfile);
        mypEditbutton->setObjectName("mypEditbutton");
        mypEditbutton->setGeometry(QRect(370, 280, 61, 24));
        mypSavebutton = new QPushButton(tProfile);
        mypSavebutton->setObjectName("mypSavebutton");
        mypSavebutton->setEnabled(false);
        mypSavebutton->setGeometry(QRect(460, 280, 61, 24));
        layoutWidget2 = new QWidget(tProfile);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(210, 110, 231, 26));
        formLayout_2 = new QFormLayout(layoutWidget2);
        formLayout_2->setObjectName("formLayout_2");
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(layoutWidget2);
        label_7->setObjectName("label_7");

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_7);

        mypSubject = new QLineEdit(layoutWidget2);
        mypSubject->setObjectName("mypSubject");
        mypSubject->setReadOnly(true);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, mypSubject);

        layoutWidget3 = new QWidget(tProfile);
        layoutWidget3->setObjectName("layoutWidget3");
        layoutWidget3->setGeometry(QRect(214, 70, 321, 26));
        formLayout_3 = new QFormLayout(layoutWidget3);
        formLayout_3->setObjectName("formLayout_3");
        formLayout_3->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget3);
        label_5->setObjectName("label_5");
        label_5->setFont(font1);

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_5);

        mypName = new QLineEdit(layoutWidget3);
        mypName->setObjectName("mypName");
        mypName->setReadOnly(true);

        formLayout_3->setWidget(0, QFormLayout::FieldRole, mypName);

        layoutWidget4 = new QWidget(tProfile);
        layoutWidget4->setObjectName("layoutWidget4");
        layoutWidget4->setGeometry(QRect(240, 150, 101, 26));
        formLayout_5 = new QFormLayout(layoutWidget4);
        formLayout_5->setObjectName("formLayout_5");
        formLayout_5->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(layoutWidget4);
        label_8->setObjectName("label_8");
        label_8->setFont(font3);

        formLayout_5->setWidget(0, QFormLayout::LabelRole, label_8);

        mypID = new QLineEdit(layoutWidget4);
        mypID->setObjectName("mypID");
        mypID->setReadOnly(true);

        formLayout_5->setWidget(0, QFormLayout::FieldRole, mypID);

        layoutWidget_4 = new QWidget(tProfile);
        layoutWidget_4->setObjectName("layoutWidget_4");
        layoutWidget_4->setGeometry(QRect(200, 190, 231, 26));
        formLayout_12 = new QFormLayout(layoutWidget_4);
        formLayout_12->setObjectName("formLayout_12");
        formLayout_12->setContentsMargins(0, 0, 0, 0);
        label_23 = new QLabel(layoutWidget_4);
        label_23->setObjectName("label_23");

        formLayout_12->setWidget(0, QFormLayout::LabelRole, label_23);

        mypPhoneNumber = new QLineEdit(layoutWidget_4);
        mypPhoneNumber->setObjectName("mypPhoneNumber");
        mypPhoneNumber->setReadOnly(true);

        formLayout_12->setWidget(0, QFormLayout::FieldRole, mypPhoneNumber);

        toolButton = new QToolButton(tProfile);
        toolButton->setObjectName("toolButton");
        toolButton->setGeometry(QRect(320, 230, 23, 23));
        label_10 = new QLabel(tProfile);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(210, 230, 101, 16));
        commandLinkButton = new QCommandLinkButton(tProfile);
        commandLinkButton->setObjectName("commandLinkButton");
        commandLinkButton->setGeometry(QRect(550, 420, 101, 41));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../../../../Downloads/logout.png"), QSize(), QIcon::Normal, QIcon::Off);
        commandLinkButton->setIcon(icon1);
        tabWidget->addTab(tProfile, QString());
        Messages = new QWidget();
        Messages->setObjectName("Messages");
        scrollArea = new QScrollArea(Messages);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(10, 40, 541, 421));
        scrollArea->setWidgetResizable(true);
        scrollArea->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 539, 419));
        scrollArea->setWidget(scrollAreaWidgetContents);
        pushButton_5 = new QPushButton(Messages);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(10, 3, 111, 31));
        line_2 = new QFrame(Messages);
        line_2->setObjectName("line_2");
        line_2->setGeometry(QRect(0, 30, 571, 16));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        tabWidget->addTab(Messages, QString());
        teachers->setCentralWidget(centralwidget);
        menubar = new QMenuBar(teachers);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 753, 21));
        teachers->setMenuBar(menubar);

        retranslateUi(teachers);

        tabWidget->setCurrentIndex(0);
        tabWidget_2->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(teachers);
    } // setupUi

    void retranslateUi(QMainWindow *teachers)
    {
        teachers->setWindowTitle(QCoreApplication::translate("teachers", "Teacher", nullptr));
        label->setText(QCoreApplication::translate("teachers", "Students:", nullptr));
        label_2->setText(QCoreApplication::translate("teachers", "Student Id:", nullptr));
        addStudent_lineEdit->setPlaceholderText(QCoreApplication::translate("teachers", "eg. S0001", nullptr));
        addStudent_pushButton->setText(QCoreApplication::translate("teachers", "Add", nullptr));
        label_3->setText(QCoreApplication::translate("teachers", "Double click on student to remove", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Class_tab), QCoreApplication::translate("teachers", "Class", nullptr));
        Start_dateTimeEdit->setDisplayFormat(QCoreApplication::translate("teachers", "yyyy-mm-dd hh:mm AP", nullptr));
        End_dateTimeEdit_2->setDisplayFormat(QCoreApplication::translate("teachers", "yyyy-mm-dd hh:mm AP", nullptr));
        label_19->setText(QCoreApplication::translate("teachers", "Select Students", nullptr));
        label_20->setText(QCoreApplication::translate("teachers", "Start Time:", nullptr));
        label_21->setText(QCoreApplication::translate("teachers", "End Time:", nullptr));
        selectAllStudents_pushButton_6->setText(QCoreApplication::translate("teachers", "Select All", nullptr));
        AssignmnetUpload_pushButton_7->setText(QCoreApplication::translate("teachers", "Upload", nullptr));
        assignmentUpload_lineEdit_10->setPlaceholderText(QCoreApplication::translate("teachers", "Choose File...(PDF only)", nullptr));
        assignmentUpload_toolButton->setText(QCoreApplication::translate("teachers", "...", nullptr));
        AssignmentUpload_lineEdit_11->setPlaceholderText(QCoreApplication::translate("teachers", "Assignment Title", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab), QCoreApplication::translate("teachers", "Upload", nullptr));
        assignment_comboBox_5->setPlaceholderText(QCoreApplication::translate("teachers", "Assignment", nullptr));
        gradeAAssignments_pushButton->setText(QCoreApplication::translate("teachers", "Grade", nullptr));
        gradeLevel_comboBox->setItemText(0, QCoreApplication::translate("teachers", "Grade", nullptr));
        gradeLevel_comboBox->setItemText(1, QCoreApplication::translate("teachers", "A", nullptr));
        gradeLevel_comboBox->setItemText(2, QCoreApplication::translate("teachers", "B", nullptr));
        gradeLevel_comboBox->setItemText(3, QCoreApplication::translate("teachers", "C", nullptr));
        gradeLevel_comboBox->setItemText(4, QCoreApplication::translate("teachers", "D", nullptr));
        gradeLevel_comboBox->setItemText(5, QCoreApplication::translate("teachers", "E", nullptr));
        gradeLevel_comboBox->setItemText(6, QCoreApplication::translate("teachers", "F", nullptr));
        gradeLevel_comboBox->setItemText(7, QCoreApplication::translate("teachers", "X", nullptr));

        label_14->setText(QCoreApplication::translate("teachers", "Double Click to Open Student File", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_2), QCoreApplication::translate("teachers", "Grade", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Assignment), QCoreApplication::translate("teachers", "Assignment", nullptr));
        label_9->setText(QCoreApplication::translate("teachers", "Select Students", nullptr));
        testTitle_comboBox->setItemText(0, QCoreApplication::translate("teachers", "Test No.", nullptr));

#if QT_CONFIG(tooltip)
        testTitle_comboBox->setToolTip(QCoreApplication::translate("teachers", "<html><head/><body><p>Type in the title of the test. example 'Test 1'</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        testTitle_comboBox->setAccessibleDescription(QCoreApplication::translate("teachers", "Type in a new Test Tittle or choose one from the dropdown", nullptr));
#endif // QT_CONFIG(accessibility)
        testTitle_comboBox->setCurrentText(QString());
        testTitle_comboBox->setPlaceholderText(QCoreApplication::translate("teachers", "Test Title", nullptr));
        gradeAssign_comboBox_2->setItemText(0, QCoreApplication::translate("teachers", "Grade", nullptr));
        gradeAssign_comboBox_2->setItemText(1, QCoreApplication::translate("teachers", "A", nullptr));
        gradeAssign_comboBox_2->setItemText(2, QCoreApplication::translate("teachers", "B", nullptr));
        gradeAssign_comboBox_2->setItemText(3, QCoreApplication::translate("teachers", "C", nullptr));
        gradeAssign_comboBox_2->setItemText(4, QCoreApplication::translate("teachers", "D", nullptr));
        gradeAssign_comboBox_2->setItemText(5, QCoreApplication::translate("teachers", "E", nullptr));
        gradeAssign_comboBox_2->setItemText(6, QCoreApplication::translate("teachers", "F", nullptr));
        gradeAssign_comboBox_2->setItemText(7, QCoreApplication::translate("teachers", "X", nullptr));

        gradeAssign_comboBox_2->setPlaceholderText(QCoreApplication::translate("teachers", "Grade", nullptr));
        grade_pushButton_4->setText(QCoreApplication::translate("teachers", "Grade", nullptr));
        label_22->setText(QCoreApplication::translate("teachers", "Test Title", nullptr));
        createTest_lineEdit->setPlaceholderText(QCoreApplication::translate("teachers", "Test Title", nullptr));
        createTest_pushButton->setText(QCoreApplication::translate("teachers", "Create", nullptr));
        label_4->setText(QCoreApplication::translate("teachers", "Create Test", nullptr));
        label_6->setText(QCoreApplication::translate("teachers", "Grade", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Test), QCoreApplication::translate("teachers", "Test", nullptr));
        studenProfilePic->setText(QCoreApplication::translate("teachers", "img", nullptr));
        label_12->setText(QCoreApplication::translate("teachers", "Student Id:", nullptr));
        label_13->setText(QCoreApplication::translate("teachers", "Name:", nullptr));
        nameRetrieve->setText(QString());
        selectStudent_combo1->setPlaceholderText(QCoreApplication::translate("teachers", "Select Student", nullptr));
        label_11->setText(QCoreApplication::translate("teachers", "Age:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(vStudent), QCoreApplication::translate("teachers", "Student Profile", nullptr));
        profilepicture->setText(QCoreApplication::translate("teachers", "Click to add picture", nullptr));
        mypEditbutton->setText(QCoreApplication::translate("teachers", "Edit", nullptr));
        mypSavebutton->setText(QCoreApplication::translate("teachers", "Save", nullptr));
        label_7->setText(QCoreApplication::translate("teachers", "Subject:", nullptr));
        label_5->setText(QCoreApplication::translate("teachers", "Name:", nullptr));
        label_8->setText(QCoreApplication::translate("teachers", "Id:", nullptr));
        label_23->setText(QCoreApplication::translate("teachers", "Phone No:", nullptr));
        toolButton->setText(QCoreApplication::translate("teachers", "...", nullptr));
        label_10->setText(QCoreApplication::translate("teachers", "New Profile Image:", nullptr));
        commandLinkButton->setText(QCoreApplication::translate("teachers", "Log Out", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tProfile), QCoreApplication::translate("teachers", "My Profile", nullptr));
        pushButton_5->setText(QCoreApplication::translate("teachers", "New Message", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Messages), QCoreApplication::translate("teachers", "Messages", nullptr));
    } // retranslateUi

};

namespace Ui {
    class teachers: public Ui_teachers {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEACHERS_H
