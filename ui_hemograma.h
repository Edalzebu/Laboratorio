/********************************************************************************
** Form generated from reading UI file 'hemograma.ui'
**
** Created: Sun 14. Jul 18:32:52 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HEMOGRAMA_H
#define UI_HEMOGRAMA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDateEdit>
#include <QtGui/QFrame>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_hemograma
{
public:
    QGroupBox *groupBox;
    QLabel *label_3;
    QLineEdit *line_hematocrito;
    QLineEdit *line_hemoglobina;
    QLineEdit *line_eritrocitos;
    QLineEdit *line_mcv;
    QLineEdit *line_mch;
    QLineEdit *line_mchc;
    QLineEdit *line_plaquetas;
    QLineEdit *line_leucocitos;
    QLabel *label_4;
    QFrame *line;
    QLineEdit *line_segmentados;
    QLineEdit *line_linfocitos;
    QLineEdit *line_eosinofilos;
    QLineEdit *line_monocitos;
    QLineEdit *line_bandas;
    QLineEdit *line_basofilos;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QGroupBox *groupBox_2;
    QLabel *label_2;
    QLineEdit *line_apellidos;
    QLabel *label;
    QLineEdit *line_nombres;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_5;
    QDateEdit *dateEdit;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_6;
    QLineEdit *line_doctor;

    void setupUi(QWidget *hemograma)
    {
        if (hemograma->objectName().isEmpty())
            hemograma->setObjectName(QString::fromUtf8("hemograma"));
        hemograma->resize(612, 477);
        groupBox = new QGroupBox(hemograma);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(30, 190, 531, 271));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        groupBox->setFont(font);
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 40, 74, 210));
        line_hematocrito = new QLineEdit(groupBox);
        line_hematocrito->setObjectName(QString::fromUtf8("line_hematocrito"));
        line_hematocrito->setGeometry(QRect(132, 35, 89, 22));
        line_hemoglobina = new QLineEdit(groupBox);
        line_hemoglobina->setObjectName(QString::fromUtf8("line_hemoglobina"));
        line_hemoglobina->setGeometry(QRect(132, 62, 89, 22));
        line_eritrocitos = new QLineEdit(groupBox);
        line_eritrocitos->setObjectName(QString::fromUtf8("line_eritrocitos"));
        line_eritrocitos->setGeometry(QRect(132, 92, 89, 22));
        line_mcv = new QLineEdit(groupBox);
        line_mcv->setObjectName(QString::fromUtf8("line_mcv"));
        line_mcv->setGeometry(QRect(132, 120, 89, 22));
        line_mch = new QLineEdit(groupBox);
        line_mch->setObjectName(QString::fromUtf8("line_mch"));
        line_mch->setGeometry(QRect(132, 149, 89, 22));
        line_mchc = new QLineEdit(groupBox);
        line_mchc->setObjectName(QString::fromUtf8("line_mchc"));
        line_mchc->setGeometry(QRect(132, 177, 89, 22));
        line_plaquetas = new QLineEdit(groupBox);
        line_plaquetas->setObjectName(QString::fromUtf8("line_plaquetas"));
        line_plaquetas->setGeometry(QRect(132, 207, 89, 22));
        line_leucocitos = new QLineEdit(groupBox);
        line_leucocitos->setObjectName(QString::fromUtf8("line_leucocitos"));
        line_leucocitos->setGeometry(QRect(132, 235, 89, 22));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(300, 40, 95, 176));
        line = new QFrame(groupBox);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(250, 20, 20, 241));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        line_segmentados = new QLineEdit(groupBox);
        line_segmentados->setObjectName(QString::fromUtf8("line_segmentados"));
        line_segmentados->setGeometry(QRect(400, 40, 81, 22));
        line_linfocitos = new QLineEdit(groupBox);
        line_linfocitos->setObjectName(QString::fromUtf8("line_linfocitos"));
        line_linfocitos->setGeometry(QRect(400, 70, 81, 22));
        line_eosinofilos = new QLineEdit(groupBox);
        line_eosinofilos->setObjectName(QString::fromUtf8("line_eosinofilos"));
        line_eosinofilos->setGeometry(QRect(400, 100, 81, 22));
        line_monocitos = new QLineEdit(groupBox);
        line_monocitos->setObjectName(QString::fromUtf8("line_monocitos"));
        line_monocitos->setGeometry(QRect(400, 133, 81, 22));
        line_bandas = new QLineEdit(groupBox);
        line_bandas->setObjectName(QString::fromUtf8("line_bandas"));
        line_bandas->setGeometry(QRect(400, 168, 81, 22));
        line_basofilos = new QLineEdit(groupBox);
        line_basofilos->setObjectName(QString::fromUtf8("line_basofilos"));
        line_basofilos->setGeometry(QRect(400, 200, 81, 22));
        pushButton = new QPushButton(hemograma);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(460, 40, 75, 23));
        pushButton_2 = new QPushButton(hemograma);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(460, 80, 75, 23));
        groupBox_2 = new QGroupBox(hemograma);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(30, 10, 391, 171));
        QFont font1;
        font1.setPointSize(8);
        font1.setBold(true);
        font1.setWeight(75);
        groupBox_2->setFont(font1);
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(23, 60, 59, 16));
        QFont font2;
        font2.setPointSize(9);
        font2.setBold(false);
        font2.setWeight(50);
        label_2->setFont(font2);
        line_apellidos = new QLineEdit(groupBox_2);
        line_apellidos->setObjectName(QString::fromUtf8("line_apellidos"));
        line_apellidos->setGeometry(QRect(100, 60, 251, 20));
        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(23, 20, 57, 16));
        label->setFont(font2);
        line_nombres = new QLineEdit(groupBox_2);
        line_nombres->setObjectName(QString::fromUtf8("line_nombres"));
        line_nombres->setGeometry(QRect(100, 20, 251, 20));
        layoutWidget = new QWidget(groupBox_2);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 100, 213, 22));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font2);

        horizontalLayout->addWidget(label_5);

        dateEdit = new QDateEdit(layoutWidget);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));

        horizontalLayout->addWidget(dateEdit);

        layoutWidget1 = new QWidget(groupBox_2);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(20, 140, 331, 22));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget1);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font2);

        horizontalLayout_2->addWidget(label_6);

        line_doctor = new QLineEdit(layoutWidget1);
        line_doctor->setObjectName(QString::fromUtf8("line_doctor"));

        horizontalLayout_2->addWidget(line_doctor);

        layoutWidget->raise();
        layoutWidget->raise();
        label_2->raise();
        line_apellidos->raise();
        label->raise();
        line_nombres->raise();

        retranslateUi(hemograma);

        QMetaObject::connectSlotsByName(hemograma);
    } // setupUi

    void retranslateUi(QWidget *hemograma)
    {
        hemograma->setWindowTitle(QApplication::translate("hemograma", "Hemograma", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("hemograma", "Hematologia", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("hemograma", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:10pt; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt; font-weight:400;\">Hematocrito:</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:9pt; font-weight:400;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt; font-weight:400;\">Hemoglobina:</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-righ"
                        "t:0px; -qt-block-indent:0; text-indent:0px; font-size:9pt; font-weight:400;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt; font-weight:400;\">Eritrocitos:</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:9pt; font-weight:400;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt; font-weight:400;\">MCV:</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:9pt; font-weight:400;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt; font-weight:400;\">MCH:</"
                        "span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:9pt; font-weight:400;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt; font-weight:400;\">MCHC:</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:9pt; font-weight:400;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt; font-weight:400;\">Plaquetas:</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:9pt; font-weight:400;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px;"
                        " margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt; font-weight:400;\">Leucocitos:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("hemograma", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:10pt; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:400;\">N Segmentados:</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-weight:400;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:400;\">Linfocitos:</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; "
                        "font-weight:400;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:400;\">Eosinofilos:</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-weight:400;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:400;\">Monocitos:</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-weight:400;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:400;\">Bandas:</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-"
                        "block-indent:0; text-indent:0px; font-weight:400;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:400;\">Basofilos:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("hemograma", "Siguiente", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("hemograma", "Atras", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("hemograma", "Informacion Paciente", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("hemograma", "Apellidos:", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("hemograma", "Nombres:", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("hemograma", "Fecha Nacimiento:", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("hemograma", "Remitido por:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class hemograma: public Ui_hemograma {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HEMOGRAMA_H
