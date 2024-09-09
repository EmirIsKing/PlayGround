#ifndef TEAACHERS_H
#define TEAACHERS_H

#include <QMainWindow>

namespace Ui {
class teaachers;
}

class teaachers : public QMainWindow
{
    Q_OBJECT

public:
    explicit teaachers(QWidget *parent = nullptr);
    ~teaachers();

private:
    Ui::teaachers *ui;
};

#endif // TEAACHERS_H
