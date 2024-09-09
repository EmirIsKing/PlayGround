#ifndef NEWMESSAGE_H
#define NEWMESSAGE_H

#include <QMainWindow>
#include <QSqlQuery>

namespace Ui {
class newmessage;
}

class newmessage : public QMainWindow
{
    Q_OBJECT

public:
    explicit newmessage(QWidget *parent = nullptr);
    ~newmessage();

private slots:
    void on_comboBox_currentIndexChanged(int index);

    void on_pushButton_clicked();

private:
    Ui::newmessage *ui;
    newmessage *messageto;
};

#endif // NEWMESSAGE_H
