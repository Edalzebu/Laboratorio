/********************************************************************************
** Form generated from reading UI file 'wizard.ui'
**
** Created: Thu 18. Jul 11:19:11 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIZARD_H
#define UI_WIZARD_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpinBox>
#include <QtGui/QTreeWidget>
#include <QtGui/QWizard>
#include <QtGui/QWizardPage>

QT_BEGIN_NAMESPACE

class Ui_Wizard
{
public:
    QWizardPage *PaginaComienzo;
    QLabel *label_Basic;
    QLabel *label_shade;
    QLabel *label;
    QLabel *label_2;
    QFrame *line_2;
    QLineEdit *line_nombreEx;
    QLabel *label_9;
    QGroupBox *groupBox;
    QLabel *label_8;
    QSpinBox *spinBox;
    QLabel *label_7;
    QWizardPage *Pagina_campos;
    QLabel *label_shade_3;
    QLabel *label_Basic_3;
    QLabel *label_5;
    QFrame *line_3;
    QLabel *label_6;
    QLabel *label_10;
    QLabel *label_12;
    QLabel *label_Division;
    QLabel *label_14;
    QSpinBox *spinBox_2;
    QWizardPage *PaginaFinal;
    QTreeWidget *treeWidget;
    QFrame *line;
    QLabel *label_shade_2;
    QLabel *label_Basic_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_11;

    void setupUi(QWizard *Wizard)
    {
        if (Wizard->objectName().isEmpty())
            Wizard->setObjectName(QString::fromUtf8("Wizard"));
        Wizard->resize(717, 347);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        QBrush brush2(QColor(127, 127, 127, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush2);
        QBrush brush3(QColor(170, 170, 170, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        QBrush brush4(QColor(255, 255, 220, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush4);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        Wizard->setPalette(palette);
        Wizard->setWizardStyle(QWizard::ClassicStyle);
        PaginaComienzo = new QWizardPage();
        PaginaComienzo->setObjectName(QString::fromUtf8("PaginaComienzo"));
        label_Basic = new QLabel(PaginaComienzo);
        label_Basic->setObjectName(QString::fromUtf8("label_Basic"));
        label_Basic->setGeometry(QRect(10, 40, 78, 13));
        label_shade = new QLabel(PaginaComienzo);
        label_shade->setObjectName(QString::fromUtf8("label_shade"));
        label_shade->setGeometry(QRect(0, 30, 131, 41));
        label_shade->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 85, 85);"));
        label = new QLabel(PaginaComienzo);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 130, 98, 13));
        label_2 = new QLabel(PaginaComienzo);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 210, 47, 13));
        line_2 = new QFrame(PaginaComienzo);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(120, 0, 20, 311));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_nombreEx = new QLineEdit(PaginaComienzo);
        line_nombreEx->setObjectName(QString::fromUtf8("line_nombreEx"));
        line_nombreEx->setGeometry(QRect(280, 20, 161, 20));
        label_9 = new QLabel(PaginaComienzo);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(160, 20, 107, 16));
        groupBox = new QGroupBox(PaginaComienzo);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(160, 70, 531, 171));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        groupBox->setFont(font);
        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(350, 10, 121, 13));
        spinBox = new QSpinBox(groupBox);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setGeometry(QRect(490, 10, 42, 22));
        spinBox->setMaximum(5);
        label_7 = new QLabel(PaginaComienzo);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(0, 2, 131, 301));
        label_7->setStyleSheet(QString::fromUtf8("background-color: rgb(150, 158, 148);"));
        Wizard->addPage(PaginaComienzo);
        label_7->raise();
        label_shade->raise();
        label_Basic->raise();
        label->raise();
        label_2->raise();
        line_2->raise();
        line_nombreEx->raise();
        label_9->raise();
        groupBox->raise();
        Pagina_campos = new QWizardPage();
        Pagina_campos->setObjectName(QString::fromUtf8("Pagina_campos"));
        label_shade_3 = new QLabel(Pagina_campos);
        label_shade_3->setObjectName(QString::fromUtf8("label_shade_3"));
        label_shade_3->setGeometry(QRect(0, 120, 131, 41));
        label_shade_3->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 85, 85);"));
        label_Basic_3 = new QLabel(Pagina_campos);
        label_Basic_3->setObjectName(QString::fromUtf8("label_Basic_3"));
        label_Basic_3->setGeometry(QRect(10, 40, 78, 13));
        label_5 = new QLabel(Pagina_campos);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 130, 98, 13));
        line_3 = new QFrame(Pagina_campos);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(120, -30, 20, 341));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);
        label_6 = new QLabel(Pagina_campos);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(20, 210, 47, 13));
        label_10 = new QLabel(Pagina_campos);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(0, 2, 131, 301));
        label_10->setStyleSheet(QString::fromUtf8("background-color: rgb(150, 158, 148);"));
        label_12 = new QLabel(Pagina_campos);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(160, 30, 54, 16));
        label_Division = new QLabel(Pagina_campos);
        label_Division->setObjectName(QString::fromUtf8("label_Division"));
        label_Division->setGeometry(QRect(230, 30, 151, 16));
        QFont font1;
        font1.setPointSize(8);
        font1.setBold(true);
        font1.setWeight(75);
        label_Division->setFont(font1);
        label_Division->setFrameShape(QFrame::StyledPanel);
        label_14 = new QLabel(Pagina_campos);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(460, 30, 111, 13));
        spinBox_2 = new QSpinBox(Pagina_campos);
        spinBox_2->setObjectName(QString::fromUtf8("spinBox_2"));
        spinBox_2->setGeometry(QRect(610, 30, 42, 22));
        spinBox_2->setMaximum(13);
        Wizard->addPage(Pagina_campos);
        label_10->raise();
        label_shade_3->raise();
        label_Basic_3->raise();
        label_5->raise();
        line_3->raise();
        label_6->raise();
        label_12->raise();
        label_Division->raise();
        label_14->raise();
        spinBox_2->raise();
        PaginaFinal = new QWizardPage();
        PaginaFinal->setObjectName(QString::fromUtf8("PaginaFinal"));
        treeWidget = new QTreeWidget(PaginaFinal);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        treeWidget->setGeometry(QRect(200, 30, 441, 231));
        treeWidget->header()->setVisible(false);
        line = new QFrame(PaginaFinal);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(120, -40, 21, 361));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        label_shade_2 = new QLabel(PaginaFinal);
        label_shade_2->setObjectName(QString::fromUtf8("label_shade_2"));
        label_shade_2->setGeometry(QRect(0, 200, 131, 41));
        label_shade_2->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 85, 85);"));
        label_Basic_2 = new QLabel(PaginaFinal);
        label_Basic_2->setObjectName(QString::fromUtf8("label_Basic_2"));
        label_Basic_2->setGeometry(QRect(10, 40, 78, 13));
        label_3 = new QLabel(PaginaFinal);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 130, 98, 13));
        label_4 = new QLabel(PaginaFinal);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 210, 47, 13));
        label_11 = new QLabel(PaginaFinal);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(0, 2, 131, 301));
        label_11->setStyleSheet(QString::fromUtf8("background-color: rgb(150, 158, 148);"));
        Wizard->addPage(PaginaFinal);
        label_11->raise();
        treeWidget->raise();
        line->raise();
        label_shade_2->raise();
        label_Basic_2->raise();
        label_3->raise();
        label_4->raise();

        retranslateUi(Wizard);

        QMetaObject::connectSlotsByName(Wizard);
    } // setupUi

    void retranslateUi(QWizard *Wizard)
    {
        Wizard->setWindowTitle(QApplication::translate("Wizard", "Creador de Examenes", 0, QApplication::UnicodeUTF8));
        label_Basic->setText(QApplication::translate("Wizard", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; font-weight:600; color:#ffffff;\">Datos Basicos</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_shade->setText(QString());
        label->setText(QApplication::translate("Wizard", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; font-weight:600;\">Grupos y Campos</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Wizard", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; font-weight:600;\">Finalizar</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("Wizard", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:600;\">Nombre Examen:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("Wizard", "Divisiones", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("Wizard", "Numero de Divisiones", 0, QApplication::UnicodeUTF8));
        label_7->setText(QString());
        label_shade_3->setText(QString());
        label_Basic_3->setText(QApplication::translate("Wizard", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; font-weight:600; color:#000000;\">Datos Basicos</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("Wizard", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; font-weight:600; color:#ffffff;\">Grupos y Campos</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("Wizard", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; font-weight:600;\">Finalizar</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_10->setText(QString());
        label_12->setText(QApplication::translate("Wizard", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; font-weight:600;\">Division:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_Division->setText(QString());
        label_14->setText(QApplication::translate("Wizard", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; font-weight:600;\">Numero de campos:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_shade_2->setText(QString());
        label_Basic_2->setText(QApplication::translate("Wizard", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; font-weight:600; color:#000000;\">Datos Basicos</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Wizard", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; font-weight:600;\">Grupos y Campos</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("Wizard", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; font-weight:600; color:#ffffff;\">Finalizar</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_11->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Wizard: public Ui_Wizard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIZARD_H
