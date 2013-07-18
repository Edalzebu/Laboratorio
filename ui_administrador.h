/********************************************************************************
** Form generated from reading UI file 'administrador.ui'
**
** Created: Sun 14. Jul 18:32:52 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINISTRADOR_H
#define UI_ADMINISTRADOR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCalendarWidget>
#include <QtGui/QCommandLinkButton>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpinBox>
#include <QtGui/QTabWidget>
#include <QtGui/QToolButton>
#include <QtGui/QTreeWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_administrador
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QLabel *label_4;
    QCalendarWidget *calendarWidget;
    QCommandLinkButton *boton_verReg;
    QWidget *tab_crearExamen;
    QLabel *label_5;
    QSpinBox *spinBox;
    QLineEdit *line_crearExamen;
    QLabel *label_6;
    QCommandLinkButton *boton_crearExamen;
    QCommandLinkButton *commandLinkButton_3;
    QWidget *tab_4;
    QCommandLinkButton *boton_eliminarExamen;
    QTreeWidget *tree_Examenes;
    QLabel *label_8;
    QWidget *tab_2;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QCommandLinkButton *commandLinkButton;
    QWidget *tab_3;
    QLabel *label;
    QLineEdit *line_confirmar;
    QLineEdit *line_nuevaC;
    QLabel *label_error_cambiarCon;
    QCommandLinkButton *commandLinkButton_2;
    QLabel *label_3;
    QLabel *label_7;
    QToolButton *toolButton;

    void setupUi(QWidget *administrador)
    {
        if (administrador->objectName().isEmpty())
            administrador->setObjectName(QString::fromUtf8("administrador"));
        administrador->resize(620, 446);
        tabWidget = new QTabWidget(administrador);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(10, 130, 601, 311));
        tabWidget->setCursor(QCursor(Qt::ArrowCursor));
        tabWidget->setAutoFillBackground(false);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        label_4 = new QLabel(tab);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(40, 20, 176, 19));
        calendarWidget = new QCalendarWidget(tab);
        calendarWidget->setObjectName(QString::fromUtf8("calendarWidget"));
        calendarWidget->setGeometry(QRect(30, 80, 256, 155));
        QFont font;
        font.setBold(false);
        font.setItalic(false);
        font.setUnderline(false);
        font.setWeight(50);
        calendarWidget->setFont(font);
        calendarWidget->setCursor(QCursor(Qt::PointingHandCursor));
        calendarWidget->setGridVisible(true);
        calendarWidget->setNavigationBarVisible(true);
        boton_verReg = new QCommandLinkButton(tab);
        boton_verReg->setObjectName(QString::fromUtf8("boton_verReg"));
        boton_verReg->setGeometry(QRect(410, 230, 131, 41));
        tabWidget->addTab(tab, QString());
        tab_crearExamen = new QWidget();
        tab_crearExamen->setObjectName(QString::fromUtf8("tab_crearExamen"));
        label_5 = new QLabel(tab_crearExamen);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(380, 20, 111, 13));
        spinBox = new QSpinBox(tab_crearExamen);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setGeometry(QRect(520, 20, 42, 22));
        spinBox->setMaximum(25);
        line_crearExamen = new QLineEdit(tab_crearExamen);
        line_crearExamen->setObjectName(QString::fromUtf8("line_crearExamen"));
        line_crearExamen->setGeometry(QRect(160, 20, 113, 20));
        label_6 = new QLabel(tab_crearExamen);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(40, 20, 95, 13));
        boton_crearExamen = new QCommandLinkButton(tab_crearExamen);
        boton_crearExamen->setObjectName(QString::fromUtf8("boton_crearExamen"));
        boton_crearExamen->setGeometry(QRect(410, 230, 131, 41));
        commandLinkButton_3 = new QCommandLinkButton(tab_crearExamen);
        commandLinkButton_3->setObjectName(QString::fromUtf8("commandLinkButton_3"));
        commandLinkButton_3->setGeometry(QRect(140, 220, 172, 41));
        tabWidget->addTab(tab_crearExamen, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        boton_eliminarExamen = new QCommandLinkButton(tab_4);
        boton_eliminarExamen->setObjectName(QString::fromUtf8("boton_eliminarExamen"));
        boton_eliminarExamen->setGeometry(QRect(410, 230, 131, 41));
        tree_Examenes = new QTreeWidget(tab_4);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        tree_Examenes->setHeaderItem(__qtreewidgetitem);
        tree_Examenes->setObjectName(QString::fromUtf8("tree_Examenes"));
        tree_Examenes->setGeometry(QRect(30, 80, 256, 155));
        tree_Examenes->header()->setVisible(false);
        label_8 = new QLabel(tab_4);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(40, 40, 225, 13));
        tabWidget->addTab(tab_4, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        label_2 = new QLabel(tab_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(70, 80, 97, 64));
        lineEdit = new QLineEdit(tab_2);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(200, 80, 161, 20));
        lineEdit_2 = new QLineEdit(tab_2);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(200, 130, 161, 20));
        commandLinkButton = new QCommandLinkButton(tab_2);
        commandLinkButton->setObjectName(QString::fromUtf8("commandLinkButton"));
        commandLinkButton->setGeometry(QRect(410, 230, 131, 41));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        label = new QLabel(tab_3);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 80, 147, 64));
        QFont font1;
        font1.setPointSize(8);
        label->setFont(font1);
        line_confirmar = new QLineEdit(tab_3);
        line_confirmar->setObjectName(QString::fromUtf8("line_confirmar"));
        line_confirmar->setGeometry(QRect(260, 130, 171, 20));
        line_nuevaC = new QLineEdit(tab_3);
        line_nuevaC->setObjectName(QString::fromUtf8("line_nuevaC"));
        line_nuevaC->setGeometry(QRect(260, 80, 171, 20));
        label_error_cambiarCon = new QLabel(tab_3);
        label_error_cambiarCon->setObjectName(QString::fromUtf8("label_error_cambiarCon"));
        label_error_cambiarCon->setGeometry(QRect(20, 240, 361, 16));
        QFont font2;
        font2.setBold(true);
        font2.setWeight(75);
        label_error_cambiarCon->setFont(font2);
        commandLinkButton_2 = new QCommandLinkButton(tab_3);
        commandLinkButton_2->setObjectName(QString::fromUtf8("commandLinkButton_2"));
        commandLinkButton_2->setGeometry(QRect(410, 230, 172, 41));
        tabWidget->addTab(tab_3, QString());
        label_3 = new QLabel(administrador);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(400, 10, 192, 19));
        label_7 = new QLabel(administrador);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(0, 0, 621, 151));
        label_7->setStyleSheet(QString::fromUtf8("background-image: url(:/logos/imagenes/13125230.colonia.de.bacterias.patogenas.3d.jpg);"));
        toolButton = new QToolButton(administrador);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));
        toolButton->setGeometry(QRect(20, 20, 21, 21));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/logos/imagenes/back.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton->setIcon(icon);
        label_7->raise();
        tabWidget->raise();
        label_3->raise();
        toolButton->raise();

        retranslateUi(administrador);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(administrador);
    } // setupUi

    void retranslateUi(QWidget *administrador)
    {
        administrador->setWindowTitle(QApplication::translate("administrador", "Admin CP", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("administrador", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; color:#000000;\">Seleccione una fecha:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        boton_verReg->setText(QApplication::translate("administrador", "Ver Registros", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("administrador", "Archivos", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("administrador", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; font-weight:600; color:#aa0000;\">Numero de campos:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("administrador", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; font-weight:600; color:#aa0000;\">Nombre Examen:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        boton_crearExamen->setText(QApplication::translate("administrador", "Crear", 0, QApplication::UnicodeUTF8));
        commandLinkButton_3->setText(QApplication::translate("administrador", "Wizard", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_crearExamen), QApplication::translate("administrador", "Crear Examen", 0, QApplication::UnicodeUTF8));
        boton_eliminarExamen->setText(QApplication::translate("administrador", "Eliminar", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("administrador", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600; color:#aa0000;\">Seleccione el examen que desea borrar.</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("administrador", "Eliminar Examen", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("administrador", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:600; color:#aa0000;\">Nuevo Usuario:</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt; font-weight:600; color:#aa0000;\"></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt; font-weight:600; color:#aa0000;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:"
                        "0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:600; color:#aa0000;\">Contrase\303\261a:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        commandLinkButton->setText(QApplication::translate("administrador", "Crear Usuario", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("administrador", "Crear Usuario", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("administrador", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:600; color:#aa0000;\">Nueva Contrasena:</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt; font-weight:600; color:#aa0000;\"></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt; font-weight:600; color:#aa0000;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:"
                        "0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:600; color:#aa0000;\">Confirmar Contrasena:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_error_cambiarCon->setText(QString());
        commandLinkButton_2->setText(QApplication::translate("administrador", "Cambiar Contrasena", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("administrador", "Cambiar Contrasena", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("administrador", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600; color:#000000;\">Panel de Administrador</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_7->setText(QString());
        toolButton->setText(QApplication::translate("administrador", "...", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class administrador: public Ui_administrador {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINISTRADOR_H
