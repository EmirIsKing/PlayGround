#include "mainwindow.h"
#include "QFile"
#include "QApplication"

int main(int argc, char *argv[])
{

    QFile styleFile(":/styles/global.css");
    styleFile.open(QFile::ReadOnly);
    QString styleSheet = QLatin1String(styleFile.readAll());
    qApp->setStyleSheet(styleSheet);


    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
