#ifndef TEACHERS_H
#define TEACHERS_H

#include "newmessage.h"
#include <QMainWindow>
#include "mainwindow.h"
#include <QListWidgetItem>
#include <QVBoxLayout>
#include <QLayout>


class newmessage;
class MainWindow;

namespace Ui {
class teachers;
}

class teachers : public QMainWindow
{
    Q_OBJECT

public:
    explicit teachers(QWidget *parent = nullptr);
    ~teachers();


protected:
    void closeEvent(QCloseEvent *event) override;

private slots:
    void on_addStudent_pushButton_clicked();

    void on_studentlist_tableView_doubleClicked(const QModelIndex &index);

    void on_mypEditbutton_clicked();

    void on_mypSavebutton_clicked();

    void on_selectStudent_combo1_currentIndexChanged(int index);

    void on_grade_pushButton_4_clicked();

    void on_createTest_pushButton_clicked();

    void on_assignmentUpload_toolButton_clicked();

    void on_selectAllStudents_pushButton_6_clicked();

    void on_AssignmnetUpload_pushButton_7_clicked();

    void on_assignment_comboBox_5_currentIndexChanged(int index);

    void on_assignmnetSubmitted_listWidget_itemDoubleClicked(QListWidgetItem *item);

    void on_pushButton_5_clicked();

    void loadMessages();



    void on_toolButton_clicked();

    void on_gradeAAssignments_pushButton_clicked();

    void on_commandLinkButton_clicked();

private:
    Ui::teachers *ui;
    void loadStudents();
    void loadTests();
    void loadAssignmentStudents();
    void listStudent();
    void students();
    MainWindow *mainwindow;
    newmessage *messageto;
};



#endif // TEACHERS_H
