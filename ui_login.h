/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created: Sun 14. Jul 18:32:52 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCommandLinkButton>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QLabel *label_panel;
    QLabel *label_imagen;
    QCommandLinkButton *boton_ingresar;
    QCommandLinkButton *boton_atras;
    QLineEdit *line_usuario;
    QLineEdit *line_clave;
    QLabel *label_usuario;
    QLabel *label_clave;

    void setupUi(QWidget *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName(QString::fromUtf8("login"));
        login->resize(400, 300);
        label_panel = new QLabel(login);
        label_panel->setObjectName(QString::fromUtf8("label_panel"));
        label_panel->setGeometry(QRect(20, 260, 167, 19));
        QFont font;
        font.setPointSize(12);
        font.setBold(false);
        font.setWeight(50);
        label_panel->setFont(font);
        label_imagen = new QLabel(login);
        label_imagen->setObjectName(QString::fromUtf8("label_imagen"));
        label_imagen->setGeometry(QRect(0, 0, 401, 311));
        label_imagen->setStyleSheet(QString::fromUtf8("background-image: url(:/logos/imagenes/login.jpg);"));
        boton_ingresar = new QCommandLinkButton(login);
        boton_ingresar->setObjectName(QString::fromUtf8("boton_ingresar"));
        boton_ingresar->setGeometry(QRect(270, 90, 111, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Segoe UI"));
        font1.setPointSize(8);
        font1.setBold(true);
        font1.setWeight(75);
        boton_ingresar->setFont(font1);
        boton_ingresar->setIconSize(QSize(0, 0));
        boton_atras = new QCommandLinkButton(login);
        boton_atras->setObjectName(QString::fromUtf8("boton_atras"));
        boton_atras->setGeometry(QRect(270, 150, 111, 41));
        boton_atras->setFont(font1);
        boton_atras->setIconSize(QSize(0, 0));
        line_usuario = new QLineEdit(login);
        line_usuario->setObjectName(QString::fromUtf8("line_usuario"));
        line_usuario->setGeometry(QRect(80, 100, 133, 20));
        line_clave = new QLineEdit(login);
        line_clave->setObjectName(QString::fromUtf8("line_clave"));
        line_clave->setGeometry(QRect(80, 140, 133, 20));
        label_usuario = new QLabel(login);
        label_usuario->setObjectName(QString::fromUtf8("label_usuario"));
        label_usuario->setGeometry(QRect(21, 100, 53, 16));
        QFont font2;
        font2.setPointSize(8);
        font2.setBold(false);
        font2.setWeight(50);
        label_usuario->setFont(font2);
        label_clave = new QLabel(login);
        label_clave->setObjectName(QString::fromUtf8("label_clave"));
        label_clave->setGeometry(QRect(21, 140, 40, 16));
        label_clave->setFont(font2);
        label_imagen->raise();
        label_panel->raise();
        boton_ingresar->raise();
        boton_atras->raise();
        line_usuario->raise();
        line_clave->raise();
        label_usuario->raise();
        label_clave->raise();

        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QWidget *login)
    {
        login->setWindowTitle(QApplication::translate("login", "Ingresar al Panel de Control", 0, QApplication::UnicodeUTF8));
        label_panel->setText(QApplication::translate("login", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:12pt; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:400;\">Panel Administrador</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_imagen->setText(QString());
        boton_ingresar->setText(QApplication::translate("login", "Ingresar", 0, QApplication::UnicodeUTF8));
        boton_atras->setText(QApplication::translate("login", "Atras", 0, QApplication::UnicodeUTF8));
        label_usuario->setText(QApplication::translate("login", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:10pt; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:400; color:#000000;\">Usuario:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_clave->setText(QApplication::translate("login", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#000000;\">Clave:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
