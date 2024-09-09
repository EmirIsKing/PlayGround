#ifndef PARENTS_H
#define PARENTS_H

#include <QMainWindow>

#include "newmessage.h"
#include "mainwindow.h"

class MainWindow;

namespace Ui {
class parents;
}

class parents : public QMainWindow
{
    Q_OBJECT

public:
    explicit parents(QWidget *parent = nullptr);
    ~parents();

protected:
    void closeEvent(QCloseEvent *event) override;


private slots:
    void loadMessages();

    void loadChildProfile();

    void teachers();


    void on_pushButton_6_clicked();

    void on_getGrades_pushButton_4_clicked();

    void on_selectTeacher_comboBox_currentTextChanged(const QString &arg1);

    void on_commandLinkButton_clicked();

private:
    Ui::parents *ui;
    newmessage *messageto;
    MainWindow *mainwindow;
};

#endif // PARENTS_H
