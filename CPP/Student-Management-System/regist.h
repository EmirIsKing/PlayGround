#ifndef REGIST_H
#define REGIST_H

#include "mainwindow.h"
#include <QMainWindow>
#include <QtSql>
#include <QtSql/QSqlDatabase>
#include <QtCore>
#include <QSqlQuery>
#include <QPixmap>
#include <QFile>
#include <QBuffer>
#include <QByteArray>
#include <QFileDialog>
#include <QMessageBox>

class MainWindow;

namespace Ui {
class regist;
}

class regist : public QMainWindow
{
    Q_OBJECT

public:
    explicit regist(QWidget *parent = nullptr);
    ~regist();

protected:
    void closeEvent(QCloseEvent *event) override;

private slots:
    void on_tPic_clicked();

    void on_tSignup_clicked();

    void on_sSignup_clicked();

    void on_sPic_clicked();

    void on_pSignup_clicked();



    void on_commandLinkButton_clicked();

    void on_commandLinkButton_2_clicked();

    void on_commandLinkButton_3_clicked();

private:
    Ui::regist *ui;
    MainWindow *mainwindow;
    QSqlDatabase db;
    QString Fullname;
    QString Subject;
    QString Username;
    QString Password;
    int PhoneNumber;
    QByteArray ProfilePicture;
    int Age;
    QString ChildID;
    QString SearchUser;
};

#endif // REGIST_H
