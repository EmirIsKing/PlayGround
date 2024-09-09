/********************************************************************************
** Form generated from reading UI file 'assignment.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ASSIGNMENT_H
#define UI_ASSIGNMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_assignment
{
public:
    QWidget *assDownloadwidget;
    QLabel *label_2;
    QLabel *s_assTitle;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *startDate_label_6;
    QLabel *dueDate_label_7;
    QPushButton *pushButton_2;

    void setupUi(QWidget *assignment)
    {
        if (assignment->objectName().isEmpty())
            assignment->setObjectName("assignment");
        assignment->resize(502, 152);
        assDownloadwidget = new QWidget(assignment);
        assDownloadwidget->setObjectName("assDownloadwidget");
        assDownloadwidget->setGeometry(QRect(0, 0, 700, 700));
        assDownloadwidget->setMinimumSize(QSize(700, 700));
        label_2 = new QLabel(assDownloadwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 10, 91, 121));
        label_2->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
"color: rgb(0, 0, 0);"));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/new/img/download (1).png")));
        label_2->setScaledContents(true);
        label_2->setAlignment(Qt::AlignCenter);
        s_assTitle = new QLabel(assDownloadwidget);
        s_assTitle->setObjectName("s_assTitle");
        s_assTitle->setGeometry(QRect(140, 30, 101, 16));
        label_4 = new QLabel(assDownloadwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(130, 60, 71, 16));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        label_4->setFont(font);
        label_5 = new QLabel(assDownloadwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(130, 90, 71, 16));
        label_5->setFont(font);
        startDate_label_6 = new QLabel(assDownloadwidget);
        startDate_label_6->setObjectName("startDate_label_6");
        startDate_label_6->setGeometry(QRect(200, 60, 141, 16));
        dueDate_label_7 = new QLabel(assDownloadwidget);
        dueDate_label_7->setObjectName("dueDate_label_7");
        dueDate_label_7->setGeometry(QRect(200, 90, 141, 16));
        pushButton_2 = new QPushButton(assDownloadwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(400, 60, 80, 24));

        retranslateUi(assignment);

        QMetaObject::connectSlotsByName(assignment);
    } // setupUi

    void retranslateUi(QWidget *assignment)
    {
        assignment->setWindowTitle(QCoreApplication::translate("assignment", "Form", nullptr));
        label_2->setText(QString());
        s_assTitle->setText(QCoreApplication::translate("assignment", "Assignment Title", nullptr));
        label_4->setText(QCoreApplication::translate("assignment", "Start Date:", nullptr));
        label_5->setText(QCoreApplication::translate("assignment", "Due Date:", nullptr));
        startDate_label_6->setText(QCoreApplication::translate("assignment", "yyyy-mm-dd hh:mm", nullptr));
        dueDate_label_7->setText(QCoreApplication::translate("assignment", "yyyy-mm-dd hh:mm", nullptr));
        pushButton_2->setText(QCoreApplication::translate("assignment", "Download", nullptr));
    } // retranslateUi

};

namespace Ui {
    class assignment: public Ui_assignment {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ASSIGNMENT_H
