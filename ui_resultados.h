/********************************************************************************
** Form generated from reading UI file 'resultados.ui'
**
** Created: Sun 14. Jul 18:32:52 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESULTADOS_H
#define UI_RESULTADOS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCommandLinkButton>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_resultados
{
public:
    QLabel *label;
    QLabel *label_2;
    QFrame *line;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_nombre;
    QLabel *label_6;
    QLabel *label_edad;
    QLabel *label_8;
    QLabel *label_fecha;
    QLabel *label_10;
    QLabel *label_doctor;
    QLabel *label_Examen;
    QWidget *widget;
    QCommandLinkButton *commandLinkButton;

    void setupUi(QWidget *resultados)
    {
        if (resultados->objectName().isEmpty())
            resultados->setObjectName(QString::fromUtf8("resultados"));
        resultados->resize(641, 503);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush1);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush1);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        resultados->setPalette(palette);
        label = new QLabel(resultados);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 20, 71, 61));
        label->setStyleSheet(QString::fromUtf8("image: url(:/logos/imagenes/dibujoMicroscopio.png);"));
        label_2 = new QLabel(resultados);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(140, 30, 354, 29));
        QFont font;
        font.setPointSize(18);
        label_2->setFont(font);
        line = new QFrame(resultados);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(10, 90, 591, 20));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        line->setPalette(palette1);
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        label_3 = new QLabel(resultados);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(170, 70, 296, 14));
        QFont font1;
        font1.setPointSize(9);
        font1.setBold(true);
        font1.setWeight(75);
        label_3->setFont(font1);
        label_4 = new QLabel(resultados);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 110, 61, 16));
        label_nombre = new QLabel(resultados);
        label_nombre->setObjectName(QString::fromUtf8("label_nombre"));
        label_nombre->setGeometry(QRect(100, 110, 181, 16));
        label_nombre->setFrameShape(QFrame::StyledPanel);
        label_6 = new QLabel(resultados);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(30, 140, 41, 16));
        label_edad = new QLabel(resultados);
        label_edad->setObjectName(QString::fromUtf8("label_edad"));
        label_edad->setGeometry(QRect(100, 140, 51, 16));
        label_edad->setFrameShape(QFrame::StyledPanel);
        label_8 = new QLabel(resultados);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(320, 110, 61, 16));
        label_fecha = new QLabel(resultados);
        label_fecha->setObjectName(QString::fromUtf8("label_fecha"));
        label_fecha->setGeometry(QRect(390, 110, 161, 16));
        label_fecha->setFrameShape(QFrame::StyledPanel);
        label_10 = new QLabel(resultados);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(320, 140, 61, 16));
        label_doctor = new QLabel(resultados);
        label_doctor->setObjectName(QString::fromUtf8("label_doctor"));
        label_doctor->setGeometry(QRect(390, 140, 161, 16));
        label_doctor->setFrameShape(QFrame::StyledPanel);
        label_Examen = new QLabel(resultados);
        label_Examen->setObjectName(QString::fromUtf8("label_Examen"));
        label_Examen->setGeometry(QRect(40, 190, 121, 21));
        QFont font2;
        font2.setPointSize(11);
        font2.setBold(true);
        font2.setItalic(false);
        font2.setUnderline(true);
        font2.setWeight(75);
        label_Examen->setFont(font2);
        widget = new QWidget(resultados);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 240, 611, 251));
        QFont font3;
        font3.setBold(true);
        font3.setWeight(75);
        widget->setFont(font3);
        commandLinkButton = new QCommandLinkButton(resultados);
        commandLinkButton->setObjectName(QString::fromUtf8("commandLinkButton"));
        commandLinkButton->setGeometry(QRect(510, 30, 81, 41));
        commandLinkButton->setIconSize(QSize(0, 0));

        retranslateUi(resultados);

        QMetaObject::connectSlotsByName(resultados);
    } // setupUi

    void retranslateUi(QWidget *resultados)
    {
        resultados->setWindowTitle(QApplication::translate("resultados", "Resultado", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        label_2->setText(QApplication::translate("resultados", "LABORATORIO CLINICO GENESIS", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("resultados", "Calle del bco Azteca contiguo clinica dental Ulloa", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("resultados", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:600;\">Paciente:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_nombre->setText(QString());
        label_6->setText(QApplication::translate("resultados", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:600;\">Edad:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_edad->setText(QString());
        label_8->setText(QApplication::translate("resultados", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:600;\">Fecha:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_fecha->setText(QString());
        label_10->setText(QApplication::translate("resultados", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:600;\">Doctor:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_doctor->setText(QString());
        label_Examen->setText(QApplication::translate("resultados", "HEMATOLOGIA", 0, QApplication::UnicodeUTF8));
        commandLinkButton->setText(QApplication::translate("resultados", "Imprimir", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class resultados: public Ui_resultados {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESULTADOS_H
