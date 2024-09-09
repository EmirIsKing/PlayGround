#ifndef MESSAGE_H
#define MESSAGE_H

#include <QWidget>
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>

namespace Ui {
class message;
}

class message : public QWidget
{
    Q_OBJECT

public:
    explicit message(QWidget *parent = nullptr);
    ~message();
    void dropMessage(const QString &from, const QString &message);

private:
    Ui::message *ui;
};

#endif // MESSAGE_H
