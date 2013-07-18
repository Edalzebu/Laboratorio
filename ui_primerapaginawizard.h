/********************************************************************************
** Form generated from reading UI file 'primerapaginawizard.ui'
**
** Created: Sun 14. Jul 18:32:52 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRIMERAPAGINAWIZARD_H
#define UI_PRIMERAPAGINAWIZARD_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpinBox>
#include <QtGui/QWizardPage>

QT_BEGIN_NAMESPACE

class Ui_primeraPaginaWizard
{
public:
    QSpinBox *spinBox;
    QLabel *label;

    void setupUi(QWizardPage *primeraPaginaWizard)
    {
        if (primeraPaginaWizard->objectName().isEmpty())
            primeraPaginaWizard->setObjectName(QString::fromUtf8("primeraPaginaWizard"));
        primeraPaginaWizard->resize(421, 339);
        spinBox = new QSpinBox(primeraPaginaWizard);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setGeometry(QRect(220, 140, 42, 22));
        label = new QLabel(primeraPaginaWizard);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(80, 140, 111, 16));

        retranslateUi(primeraPaginaWizard);

        QMetaObject::connectSlotsByName(primeraPaginaWizard);
    } // setupUi

    void retranslateUi(QWizardPage *primeraPaginaWizard)
    {
        primeraPaginaWizard->setWindowTitle(QApplication::translate("primeraPaginaWizard", "WizardPage", 0, QApplication::UnicodeUTF8));
        primeraPaginaWizard->setTitle(QApplication::translate("primeraPaginaWizard", "Crear Examen", 0, QApplication::UnicodeUTF8));
        primeraPaginaWizard->setSubTitle(QApplication::translate("primeraPaginaWizard", "Divisiones", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("primeraPaginaWizard", "Numero de divisiones", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class primeraPaginaWizard: public Ui_primeraPaginaWizard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRIMERAPAGINAWIZARD_H
