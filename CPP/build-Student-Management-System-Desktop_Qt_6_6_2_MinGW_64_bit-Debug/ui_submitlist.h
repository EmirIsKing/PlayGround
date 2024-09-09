/********************************************************************************
** Form generated from reading UI file 'submitlist.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUBMITLIST_H
#define UI_SUBMITLIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include "submitlist.h"

QT_BEGIN_NAMESPACE

class Ui_submitlist
{
public:
    submitlist *widget_2;
    QWidget *widget;
    QLabel *label_1;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *pushButton;
    QFrame *line;

    void setupUi(QWidget *submitlist)
    {
        if (submitlist->objectName().isEmpty())
            submitlist->setObjectName("submitlist");
        submitlist->resize(723, 394);
     //   widget_2 = new submitlist(submitlist);
        widget_2->setObjectName("widget_2");
        widget_2->setGeometry(QRect(80, 50, 549, 159));
        widget = new QWidget(widget_2);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(0, 0, 272, 159));
        label_1 = new QLabel(widget);
        label_1->setObjectName("label_1");
        label_1->setGeometry(QRect(20, 20, 49, 16));
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(90, 20, 49, 16));
        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 60, 49, 16));
        label_4 = new QLabel(widget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(90, 60, 49, 16));
        label_5 = new QLabel(widget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(20, 100, 49, 16));
        label_6 = new QLabel(widget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(90, 100, 49, 16));
        pushButton = new QPushButton(widget_2);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(440, 60, 80, 24));
        line = new QFrame(widget_2);
        line->setObjectName("line");
        line->setGeometry(QRect(20, 140, 531, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        retranslateUi(submitlist);

        QMetaObject::connectSlotsByName(submitlist);
    } // setupUi

    void retranslateUi(QWidget *submitlist)
    {
        submitlist->setWindowTitle(QCoreApplication::translate("submitlist", "Form", nullptr));
        label_1->setText(QCoreApplication::translate("submitlist", "TextLabel", nullptr));
        label_2->setText(QCoreApplication::translate("submitlist", "TextLabel", nullptr));
        label_3->setText(QCoreApplication::translate("submitlist", "TextLabel", nullptr));
        label_4->setText(QCoreApplication::translate("submitlist", "TextLabel", nullptr));
        label_5->setText(QCoreApplication::translate("submitlist", "TextLabel", nullptr));
        label_6->setText(QCoreApplication::translate("submitlist", "TextLabel", nullptr));
        pushButton->setText(QCoreApplication::translate("submitlist", "Grade", nullptr));
    } // retranslateUi

};

namespace Ui {
    class submitlist: public Ui_submitlist {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUBMITLIST_H
