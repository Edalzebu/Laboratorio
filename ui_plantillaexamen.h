/********************************************************************************
** Form generated from reading UI file 'plantillaexamen.ui'
**
** Created: Sun 14. Jul 18:32:52 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLANTILLAEXAMEN_H
#define UI_PLANTILLAEXAMEN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCommandLinkButton>
#include <QtGui/QDateEdit>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_plantillaExamen
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
    QCommandLinkButton *commandLinkButton;
    QCommandLinkButton *commandLinkButton_2;

    void setupUi(QWidget *plantillaExamen)
    {
        if (plantillaExamen->objectName().isEmpty())
            plantillaExamen->setObjectName(QString::fromUtf8("plantillaExamen"));
        plantillaExamen->resize(612, 477);
        groupBox_2 = new QGroupBox(plantillaExamen);
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
        groupBox = new QGroupBox(plantillaExamen);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(30, 190, 531, 271));
        QFont font2;
        font2.setPointSize(8);
        font2.setBold(false);
        font2.setWeight(50);
        groupBox->setFont(font2);
        commandLinkButton = new QCommandLinkButton(plantillaExamen);
        commandLinkButton->setObjectName(QString::fromUtf8("commandLinkButton"));
        commandLinkButton->setGeometry(QRect(450, 40, 101, 41));
        commandLinkButton->setIconSize(QSize(20, 20));
        commandLinkButton_2 = new QCommandLinkButton(plantillaExamen);
        commandLinkButton_2->setObjectName(QString::fromUtf8("commandLinkButton_2"));
        commandLinkButton_2->setGeometry(QRect(450, 100, 101, 41));
        commandLinkButton_2->setIconSize(QSize(20, 20));

        retranslateUi(plantillaExamen);

        QMetaObject::connectSlotsByName(plantillaExamen);
    } // setupUi

    void retranslateUi(QWidget *plantillaExamen)
    {
        plantillaExamen->setWindowTitle(QApplication::translate("plantillaExamen", "Form", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("plantillaExamen", "Informacion Paciente", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("plantillaExamen", "Apellidos:", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("plantillaExamen", "Nombres:", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("plantillaExamen", "Fecha Nacimiento:", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("plantillaExamen", "Remitido por:", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("plantillaExamen", "Hematologia", 0, QApplication::UnicodeUTF8));
        commandLinkButton->setText(QApplication::translate("plantillaExamen", "Siguiente", 0, QApplication::UnicodeUTF8));
        commandLinkButton_2->setText(QApplication::translate("plantillaExamen", "Atras", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class plantillaExamen: public Ui_plantillaExamen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLANTILLAEXAMEN_H
