#include "mainwindow.h"
#include "teachers.h"
#include "regist.h"
#include "students.h"
#include <QTimer>
#include <QSplashScreen>

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QSplashScreen *splash = new QSplashScreen;
    QPixmap originalPixmap(":/smssplashscreen.png");
    QPixmap scaledPixmap = originalPixmap.scaled(700, 498, Qt::KeepAspectRatio);
    splash->setPixmap(scaledPixmap);
    splash->show();
    MainWindow w;

    QTimer::singleShot(2000, splash, SLOT(close()));
    QTimer::singleShot(2000, &w, SLOT(show()));

  //  w.show();

    QObject::connect(&w, &QMainWindow::destroyed, &a, &QApplication::quit);

    return a.exec();
}
