#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
 //   ui->editor->loadFile(":resources/viewport.cpp");
}

MainWindow::~MainWindow()
{
    delete ui;
}
