#-------------------------------------------------
#
# Project created by QtCreator 2013-06-26T19:24:49
#
#-------------------------------------------------

QT       += core gui

TARGET = Laboratorio
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    crearexamenes.cpp \
    manejadorarchivos.cpp \
    hemograma.cpp \
    resultados.cpp \
    administrador.cpp \
    login.cpp \
    logs.cpp \
    plantillaexamen.cpp \
    wizard.cpp

HEADERS  += mainwindow.h \
    crearexamenes.h \
    manejadorarchivos.h \
    hemograma.h \
    resultados.h \
    administrador.h \
    login.h \
    logs.h \
    plantillaexamen.h \
    wizard.h

FORMS    += mainwindow.ui \
    crearexamenes.ui \
    hemograma.ui \
    resultados.ui \
    administrador.ui \
    login.ui \
    logs.ui \
    plantillaexamen.ui \
    wizard.ui

RESOURCES += \
    imagenes.qrc
