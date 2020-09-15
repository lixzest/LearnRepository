#-------------------------------------------------
#
# Project created by QtCreator 2020-09-12T16:53:02
#
#-------------------------------------------------

QT       -= gui

TARGET = TestLoaderLib
TEMPLATE = lib

DEFINES += TESTLOADERLIB_LIBRARY

SOURCES += TestLoaderLib.cpp \
    SendThread.cpp

HEADERS += TestLoaderLib.h\
        testloaderlib_global.h \
    SendThread.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
