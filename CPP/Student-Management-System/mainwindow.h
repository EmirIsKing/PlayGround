#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "teachers.h"
#include "regist.h"
#include "students.h"
#include "parents.h"


#include <QMainWindow>
#include <QtSql/QSqlDatabase>
#include <QCloseEvent>

class regist;
class students;
class parents;
class teachers;

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

protected:
    void closeEvent(QCloseEvent *event) override;

private slots:
    void on_pushButton_6_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_2_clicked();

    void on_tLogin_clicked();

    void on_sLogin_clicked();

    void on_pLogin_clicked();

private:
    Ui::MainWindow *ui;
    teachers *teacherspage;
    regist *registrationpage;
    students *studentspage;
    parents *parentspage;
};
#endif // MAINWINDOW_H
