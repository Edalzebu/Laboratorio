/********************************************************************************
** Form generated from reading UI file 'plantillaingreso.ui'
**
** Created: Sat 6. Jul 23:35:01 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLANTILLAINGRESO_H
#define UI_PLANTILLAINGRESO_H

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
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_plantillaIngreso
{
public:
    QGroupBox *groupBox_2;
    QLabel *label_2;
    QLineEdit *line_apellidos;
    QLabel *label;
    QLineEdit *line_nombres;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_5;
    QDateEdit *dateEdit;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_6;
    QLineEdit *line_doctor;
    QGroupBox *groupBox;
    QFrame *line;

    void setupUi(QWidget *plantillaIngreso)
    {
        if (plantillaIngreso->objectName().isEmpty())
            plantillaIngreso->setObjectName(QString::fromUtf8("plantillaIngreso"));
        plantillaIngreso->resize(640, 480);
        groupBox_2 = new QGroupBox(plantillaIngreso);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(30, 10, 391, 171));
        QFont font;
        font.setPointSize(8);
        font.setBold(true);
        font.setWeight(75);
        groupBox_2->setFont(font);
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(23, 60, 59, 16));
        QFont font1;
        font1.setPointSize(9);
        font1.setBold(false);
        font1.setWeight(50);
        label_2->setFont(font1);
        line_apellidos = new QLineEdit(groupBox_2);
        line_apellidos->setObjectName(QString::fromUtf8("line_apellidos"));
        line_apellidos->setGeometry(QRect(100, 60, 251, 20));
        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(23, 20, 57, 16));
        label->setFont(font1);
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
        label_5->setFont(font1);

        horizontalLayout->addWidget(label_5);

        dateEdit = new QDateEdit(layoutWidget);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));

        horizontalLayout->addWidget(dateEdit);

        layoutWidget_2 = new QWidget(groupBox_2);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(20, 140, 331, 22));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font1);

        horizontalLayout_2->addWidget(label_6);

        line_doctor = new QLineEdit(layoutWidget_2);
        line_doctor->setObjectName(QString::fromUtf8("line_doctor"));

        horizontalLayout_2->addWidget(line_doctor);

        layoutWidget_2->raise();
        layoutWidget->raise();
        label_2->raise();
        line_apellidos->raise();
        label->raise();
        line_nombres->raise();
        groupBox = new QGroupBox(plantillaIngreso);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(30, 190, 531, 271));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setWeight(75);
        groupBox->setFont(font2);
        line = new QFrame(groupBox);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(250, 20, 20, 241));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        retranslateUi(plantillaIngreso);

        QMetaObject::connectSlotsByName(plantillaIngreso);
    } // setupUi

    void retranslateUi(QWidget *plantillaIngreso)
    {
        plantillaIngreso->setWindowTitle(QApplication::translate("plantillaIngreso", "Form", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("plantillaIngreso", "Informacion Paciente", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("plantillaIngreso", "Apellidos:", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("plantillaIngreso", "Nombres:", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("plantillaIngreso", "Fecha Nacimiento:", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("plantillaIngreso", "Remitido por:", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("plantillaIngreso", "Hematologia", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class plantillaIngreso: public Ui_plantillaIngreso {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLANTILLAINGRESO_H
