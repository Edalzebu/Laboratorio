/********************************************************************************
** Form generated from reading UI file 'logs.ui'
**
** Created: Tue 2. Jul 19:30:51 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGS_H
#define UI_LOGS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QTreeWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_logs
{
public:
    QLabel *label;
    QLabel *label_2;
    QTreeWidget *treeWidget;
    QPushButton *pushButton;

    void setupUi(QWidget *logs)
    {
        if (logs->objectName().isEmpty())
            logs->setObjectName(QString::fromUtf8("logs"));
        logs->resize(754, 489);
        label = new QLabel(logs);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 30, 46, 13));
        label_2 = new QLabel(logs);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(80, 30, 141, 16));
        label_2->setFrameShape(QFrame::StyledPanel);
        label_2->setFrameShadow(QFrame::Sunken);
        treeWidget = new QTreeWidget(logs);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        treeWidget->setGeometry(QRect(0, 110, 751, 371));
        treeWidget->header()->setDefaultSectionSize(150);
        pushButton = new QPushButton(logs);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(630, 20, 75, 51));

        retranslateUi(logs);

        QMetaObject::connectSlotsByName(logs);
    } // setupUi

    void retranslateUi(QWidget *logs)
    {
        logs->setWindowTitle(QApplication::translate("logs", "Archivos", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("logs", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:600; color:#aa0000;\">Fecha:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_2->setText(QString());
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(4, QApplication::translate("logs", "Fecha", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(3, QApplication::translate("logs", "Examen", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(2, QApplication::translate("logs", "Edad", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(1, QApplication::translate("logs", "Apellido", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(0, QApplication::translate("logs", "Nombre", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("logs", "Volver", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class logs: public Ui_logs {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGS_H
