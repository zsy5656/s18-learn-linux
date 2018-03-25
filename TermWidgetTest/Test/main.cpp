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
    console->changeDir("~/");
    w.setCentralWidget(console);
    qDebug() << a.applicationDirPath();
    console->setColorScheme("DarkPastels");
    w.connect(console, SIGNAL(finished()), SLOT(close()));
    w.resize(800,500);
    w.show();

    return a.exec();
}
