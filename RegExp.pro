#-------------------------------------------------
#
# Project created by QtCreator 2016-10-11T21:29:03
#
#-------------------------------------------------

QT       -= gui widgets
QT       += axserver

CONFIG += warn_off dll

TARGET = RegExp

TEMPLATE = lib

SOURCES += regexp.cpp

RC_FILE  = regexp.rc
DEF_FILE = regexp.def

#TEMPLATE = app
#TARGET	 = RegExp

#CONFIG += warn_off #dll
##CONFIG += qaxserver_no_postlink
#QT += axserver axcontainer

#SOURCES	 = \
#    regexp.cpp
#RC_FILE  = simple.rc

## install
##target.path = $$[QT_INSTALL_EXAMPLES]/activeqt/simple
##INSTALLS += target

##DEF_FILE = qaxserver.def
##VERSION = 0.0.0.1

#DISTFILES += \
#    debug/regexp.moc

DISTFILES += \
    regexp.ico \
    regexp.def \
    regexp.inf \
    regexp.rc \
    img/������.PNG \
    img/������2.PNG \
    img/������3.PNG \
    img/������4.PNG \
    img/������5.PNG
