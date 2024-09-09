#ifndef CHATPAGE_H
#define CHATPAGE_H

#include <QMainWindow>
#include "message.h"
#include <QTimer>
#include <QVBoxLayout>


namespace Ui {
class chatpage;
}

class chatpage : public QMainWindow
{
    Q_OBJECT

public:
    explicit chatpage(QWidget *parent = nullptr);
    ~chatpage();

protected:
    void closeEvent(QCloseEvent *event) override;

private slots:
    void on_pushButton_clicked();
    void loadChat();

private:
    Ui::chatpage *ui;
    chatpage *chat;
    QWidget* containerWidget;
    QVBoxLayout* containerLayout;
    QTimer *timer;
    void initializeChat();
    void cleanupChat();
    void scrollToBottom();
};

#endif // CHATPAGE_H
