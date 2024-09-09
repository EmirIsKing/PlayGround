/********************************************************************************
** Form generated from reading UI file 'newmessage.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWMESSAGE_H
#define UI_NEWMESSAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_newmessage
{
public:
    QWidget *centralwidget;
    QComboBox *comboBox;
    QPushButton *pushButton;
    QTextEdit *textEdit;
    QMenuBar *menubar;

    void setupUi(QMainWindow *newmessage)
    {
        if (newmessage->objectName().isEmpty())
            newmessage->setObjectName("newmessage");
        newmessage->resize(416, 280);
        centralwidget = new QWidget(newmessage);
        centralwidget->setObjectName("centralwidget");
        comboBox = new QComboBox(centralwidget);
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(20, 10, 371, 24));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(330, 200, 71, 31));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(20, 200, 301, 31));
        QFont font;
        font.setPointSize(10);
        textEdit->setFont(font);
        newmessage->setCentralWidget(centralwidget);
        menubar = new QMenuBar(newmessage);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 416, 21));
        newmessage->setMenuBar(menubar);

        retranslateUi(newmessage);

        QMetaObject::connectSlotsByName(newmessage);
    } // setupUi

    void retranslateUi(QMainWindow *newmessage)
    {
        newmessage->setWindowTitle(QCoreApplication::translate("newmessage", "MainWindow", nullptr));
        comboBox->setPlaceholderText(QCoreApplication::translate("newmessage", "Select User ID", nullptr));
        pushButton->setText(QCoreApplication::translate("newmessage", "Send", nullptr));
    } // retranslateUi

};

namespace Ui {
    class newmessage: public Ui_newmessage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWMESSAGE_H
