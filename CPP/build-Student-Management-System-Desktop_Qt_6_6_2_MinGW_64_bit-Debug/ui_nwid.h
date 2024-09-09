/********************************************************************************
** Form generated from reading UI file 'nwid.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NWID_H
#define UI_NWID_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_nwid
{
public:
    QLabel *name_label_25;
    QLabel *img_label_24;
    QLabel *NM_label_26;
    QFrame *line;
    QLabel *backLabel;
    QLabel *id_label_2;

    void setupUi(QWidget *nwid)
    {
        if (nwid->objectName().isEmpty())
            nwid->setObjectName("nwid");
        nwid->resize(530, 73);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(nwid->sizePolicy().hasHeightForWidth());
        nwid->setSizePolicy(sizePolicy);
        nwid->setMinimumSize(QSize(530, 73));
        nwid->setStyleSheet(QString::fromUtf8(""));
        name_label_25 = new QLabel(nwid);
        name_label_25->setObjectName("name_label_25");
        name_label_25->setGeometry(QRect(90, 20, 191, 20));
        QFont font;
        font.setPointSize(11);
        name_label_25->setFont(font);
        img_label_24 = new QLabel(nwid);
        img_label_24->setObjectName("img_label_24");
        img_label_24->setGeometry(QRect(20, 20, 51, 41));
        img_label_24->setStyleSheet(QString::fromUtf8("border: 1px solid black;"));
        img_label_24->setScaledContents(true);
        NM_label_26 = new QLabel(nwid);
        NM_label_26->setObjectName("NM_label_26");
        NM_label_26->setGeometry(QRect(410, 30, 91, 16));
        NM_label_26->setCursor(QCursor(Qt::ArrowCursor));
        NM_label_26->setMouseTracking(false);
        NM_label_26->setTabletTracking(false);
        line = new QFrame(nwid);
        line->setObjectName("line");
        line->setGeometry(QRect(0, 60, 601, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        backLabel = new QLabel(nwid);
        backLabel->setObjectName("backLabel");
        backLabel->setGeometry(QRect(0, 0, 541, 71));
        backLabel->setCursor(QCursor(Qt::PointingHandCursor));
        backLabel->setMouseTracking(true);
        backLabel->setTabletTracking(true);
        backLabel->setStyleSheet(QString::fromUtf8(""));
        id_label_2 = new QLabel(nwid);
        id_label_2->setObjectName("id_label_2");
        id_label_2->setGeometry(QRect(90, 40, 49, 16));
        backLabel->raise();
        name_label_25->raise();
        img_label_24->raise();
        NM_label_26->raise();
        line->raise();
        id_label_2->raise();

        retranslateUi(nwid);

        QMetaObject::connectSlotsByName(nwid);
    } // setupUi

    void retranslateUi(QWidget *nwid)
    {
        nwid->setWindowTitle(QCoreApplication::translate("nwid", "Form", nullptr));
        name_label_25->setText(QCoreApplication::translate("nwid", "Name", nullptr));
        img_label_24->setText(QString());
        NM_label_26->setText(QCoreApplication::translate("nwid", "New Message", nullptr));
        backLabel->setText(QString());
        id_label_2->setText(QCoreApplication::translate("nwid", "Id", nullptr));
    } // retranslateUi

};

namespace Ui {
    class nwid: public Ui_nwid {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NWID_H
