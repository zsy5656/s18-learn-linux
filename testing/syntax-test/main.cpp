#include "mainwindow.h"
#include <QApplication>
#include <QDebug>
#include <QFile>
#include <QFileInfo>
#include <srchiliteqt/TextEditHighlighted.h>
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
