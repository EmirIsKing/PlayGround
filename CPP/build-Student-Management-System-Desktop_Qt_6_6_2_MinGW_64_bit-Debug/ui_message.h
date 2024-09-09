/********************************************************************************
** Form generated from reading UI file 'message.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MESSAGE_H
#define UI_MESSAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_message
{
public:
    QWidget *widget;
    QLabel *name_label_2;
    QLabel *message_label;
    QFrame *line;

    void setupUi(QWidget *message)
    {
        if (message->objectName().isEmpty())
            message->setObjectName("message");
        message->resize(393, 61);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(message->sizePolicy().hasHeightForWidth());
        message->setSizePolicy(sizePolicy);
        message->setMinimumSize(QSize(393, 61));
        message->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        widget = new QWidget(message);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(0, -10, 401, 71));
        name_label_2 = new QLabel(widget);
        name_label_2->setObjectName("name_label_2");
        name_label_2->setGeometry(QRect(20, 20, 49, 16));
        QFont font;
        font.setPointSize(8);
        name_label_2->setFont(font);
        message_label = new QLabel(widget);
        message_label->setObjectName("message_label");
        message_label->setGeometry(QRect(20, 40, 361, 21));
        QFont font1;
        font1.setPointSize(10);
        message_label->setFont(font1);
        message_label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        message_label->setWordWrap(true);
        line = new QFrame(widget);
        line->setObjectName("line");
        line->setGeometry(QRect(0, 10, 20, 61));
        line->setLineWidth(2);
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        line->raise();
        name_label_2->raise();
        message_label->raise();

        retranslateUi(message);

        QMetaObject::connectSlotsByName(message);
    } // setupUi

    void retranslateUi(QWidget *message)
    {
        message->setWindowTitle(QCoreApplication::translate("message", "Form", nullptr));
        name_label_2->setText(QCoreApplication::translate("message", "Name", nullptr));
        message_label->setText(QCoreApplication::translate("message", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class message: public Ui_message {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MESSAGE_H
