#include "mainwindow.h"
#include <iostream>
#include <QApplication>
#include <QtDebug>
#include "qtermwidget5/qtermwidget.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    QTermWidget *console = new QTermWidget();
    w.setCentralWidget(console);
    console->setWorkingDirectory("/");
    console->setEnvironment(QStringList("linux"));
    qDebug() << a.applicationDirPath();
    console->setColorScheme("DarkPastels");
    w.connect(console, SIGNAL(finished()), SLOT(close()));
    w.resize(800,500);
    console->changeDir("~/");
    w.show();

    return a.exec();
}
