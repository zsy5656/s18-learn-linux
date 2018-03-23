#include "mainwindow.h"
#include <QApplication>
#include <srchiliteqt/TextEditHighlighted.h>
#include <QDebug>
#include <QFile>
#include <QFileInfo>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow *w = new MainWindow;

   srchiliteqt::TextEditHighlighted* editor = new srchiliteqt::TextEditHighlighted();
   editor->loadFile(":examples/viewport.cpp");

   w->setCentralWidget(editor);


    w->show();

    return a.exec();
}
