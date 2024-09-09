#ifndef STUDENTS_H
#define STUDENTS_H

#include <QMainWindow>
#include "mainwindow.h"
#include "newmessage.h"

class MainWindow;

namespace Ui {
class students;
}

class students : public QMainWindow
{
    Q_OBJECT

public:
    explicit students(QWidget *parent = nullptr);
    ~students();

protected:
    void closeEvent(QCloseEvent *event) override;


private slots:
    void loadMessages();
    void loadClasses();
    void loadSubjects();


    void on_gradesGet_pushButton_clicked();

    void on_assignmentfile_toolButton_clicked();

    void on_assignmentSubmit_pushButton_3_clicked();

    void on_pushButton_5_clicked();

    void on_commandLinkButton_clicked();

private:
    Ui::students *ui;
    void submitPage();
    void getAssignments();
    void loadStudentDetails();
    QString mimeType;
    QString assignmentPath;
    QByteArray fileData;
    newmessage *messageto;
    MainWindow *mainwindow;

};

#endif // STUDENTS_H
