QT += core
QT -= gui

CONFIG += c++11

TARGET = Singleton
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    mythread.cpp \
    singleton.cpp

HEADERS += \
    mythread.h \
    singleton.h
