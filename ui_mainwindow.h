/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Sun 14. Jul 18:32:52 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCommandLinkButton>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QLabel *label_2;
    QCommandLinkButton *boton_nuevo;
    QCommandLinkButton *boton_buscar;
    QCommandLinkButton *boton_admin;
    QFrame *line;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(549, 408);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/logos/imagenes/dibujoMicroscopio.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(-50, -10, 601, 421));
        label->setStyleSheet(QString::fromUtf8("\n"
"background-image: url(:/logos/imagenes/laboratorio.jpg);"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(270, 40, 238, 29));
        boton_nuevo = new QCommandLinkButton(centralWidget);
        boton_nuevo->setObjectName(QString::fromUtf8("boton_nuevo"));
        boton_nuevo->setGeometry(QRect(400, 140, 91, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("Segoe UI"));
        font.setBold(false);
        font.setWeight(50);
        boton_nuevo->setFont(font);
        boton_nuevo->setIconSize(QSize(0, 0));
        boton_buscar = new QCommandLinkButton(centralWidget);
        boton_buscar->setObjectName(QString::fromUtf8("boton_buscar"));
        boton_buscar->setGeometry(QRect(400, 200, 91, 41));
        boton_buscar->setFont(font);
        boton_buscar->setIconSize(QSize(0, 0));
        boton_admin = new QCommandLinkButton(centralWidget);
        boton_admin->setObjectName(QString::fromUtf8("boton_admin"));
        boton_admin->setGeometry(QRect(400, 260, 121, 41));
        boton_admin->setFont(font);
        boton_admin->setIconSize(QSize(0, 0));
        line = new QFrame(centralWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(250, 80, 231, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 549, 21));
        MainWindow->setMenuBar(menuBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Laboratorio Genesis - Lobby", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        label_2->setText(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt; color:#000000;\">Laboratorio Genesis</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        boton_nuevo->setText(QApplication::translate("MainWindow", "Nuevo", 0, QApplication::UnicodeUTF8));
        boton_buscar->setText(QApplication::translate("MainWindow", "Buscar", 0, QApplication::UnicodeUTF8));
        boton_admin->setText(QApplication::translate("MainWindow", "Admin Panel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
