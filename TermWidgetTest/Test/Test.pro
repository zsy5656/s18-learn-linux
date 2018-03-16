#-------------------------------------------------
#
# Project created by QtCreator 2018-03-13T17:43:26
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Test
TEMPLATE = app
CONFIG += c++11


SOURCES += main.cpp\
        mainwindow.cpp\

LIBS += -lqtermwidget5

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui
