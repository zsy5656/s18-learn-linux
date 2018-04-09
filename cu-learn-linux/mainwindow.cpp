#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QProcess>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    QStringList env = QProcess::systemEnvironment();
    ui->setupUi(this);
    ui->editor->loadFile(":resources/examples/viewport.cpp");

    connect(ui->treeWidget, SIGNAL(clicked(QModelIndex)), this, SLOT(setInformation()));
    connect(ui->treeWidget, SIGNAL(clicked(QModelIndex)), this, SLOT(setResource()));

    env << "TERM=xterm";
    ui->console->setEnvironment(env);
    ui->console->startShellProgram();
    ui->console->setColorScheme("DarkPastels");
    ui->console->changeDir("~/");
    connect(ui->console, SIGNAL(finished()), this, SLOT(close()));

}

MainWindow::~MainWindow()
{
    delete ui;
}

const QTermWidget* MainWindow::getConsole(){
    return ui->console;
}

void MainWindow::setResource(){
    QString option = ui->treeWidget->currentItem()->text(0);

    if(option == "Navigation"){
        ui->editor->loadFile(":resources/examples/navigation.txt");
    }

    if(option == "gcc"){
        ui->editor->loadFile(":resources/examples/gcc.c");
    }

    if(option == "Makefiles"){
        ui->editor->loadFile(":resources/examples/Makefile");
    }

    if(option == "gdb"){
        ui->editor->loadFile(":resources/examples/gcc.c");
    }

    if(option == "Text Editors"){
        ui->editor->loadFile(":resources/examples/navigation.txt");
    }
}

void MainWindow::loadInformation(QString filename){
    QFile file(filename);


    QString line;
    ui->information->clear();
    if(file.open(QIODevice::ReadOnly | QIODevice::Text)){
        QTextStream stream(&file);
        while(!stream.atEnd()){
            line = stream.readLine();
            ui->information->setText(ui->information->toPlainText()+line+"\n");
        }

    }
    file.close();

}

void MainWindow::setInformation(){
    QString option = ui->treeWidget->currentItem()->text(0);

    if(option == "Navigation"){
        loadInformation(":resources/info/navigation.txt");
    }

    if(option == "gcc"){
        loadInformation(":resources/info/gcc.txt");
    }

    if(option == "Makefiles"){
        loadInformation(":resources/info/makefiles.txt");
    }

    if(option == "gdb"){
        loadInformation(":resources/info/navigation.txt");
    }

    if(option == "Text Editors"){
        loadInformation(":resources/info/editors.txt");
    }


}
