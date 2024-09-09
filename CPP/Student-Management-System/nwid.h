#ifndef NWID_H
#define NWID_H

#include <QWidget>
#include <QPixmap>
#include <QMouseEvent>
#include "chatpage.h"


namespace Ui {
class nwid;
}

class nwid : public QWidget
{
    Q_OBJECT

public:
    explicit nwid(QWidget *parent = nullptr);
    ~nwid();

    void setDetails(const QString &name, const QString &id, const bool &messageRead);

    void setPic(QPixmap &pic);

signals:
    void doubleClicked();

private:
    Ui::nwid *ui;
    void mouseDoubleClickEvent(QMouseEvent *event) override;
    chatpage *chatPage;

};

#endif // NWID_H
