#include "mainwindow.h"
#include <QApplication>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    //QObject::connect(w.getConsole(), SIGNAL(finished()), &w, SLOT(close()));
    w.show();

    return a.exec();
}
