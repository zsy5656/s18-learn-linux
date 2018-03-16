#include "mainwindow.h"
#include <iostream>
#include <QApplication>
#include <QtDebug>
#include "qtermwidget5/qtermwidget.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    //QWidget* widget = new QWidget();
    QTermWidget *console = new QTermWidget();
    w.setCentralWidget(console);
    qDebug() << "Colors: " << console->availableKeyBindings();
    console->setColorScheme("DarkPastels");
    //QObject::connect(console, SIGNAL(finished()), w, SLOT(close()));
    w.show();

    return a.exec();
}
