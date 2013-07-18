/********************************************************************************
** Form generated from reading UI file 'crearexamenes.ui'
**
** Created: Sun 14. Jul 18:32:52 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREAREXAMENES_H
#define UI_CREAREXAMENES_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QTreeWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_crearExamenes
{
public:
    QTreeWidget *treeWidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *crearExamenes)
    {
        if (crearExamenes->objectName().isEmpty())
            crearExamenes->setObjectName(QString::fromUtf8("crearExamenes"));
        crearExamenes->resize(417, 350);
        treeWidget = new QTreeWidget(crearExamenes);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        treeWidget->setGeometry(QRect(20, 50, 256, 251));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        treeWidget->setFont(font);
        pushButton = new QPushButton(crearExamenes);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(320, 100, 75, 23));
        pushButton_2 = new QPushButton(crearExamenes);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(320, 60, 75, 23));

        retranslateUi(crearExamenes);

        QMetaObject::connectSlotsByName(crearExamenes);
    } // setupUi

    void retranslateUi(QWidget *crearExamenes)
    {
        crearExamenes->setWindowTitle(QApplication::translate("crearExamenes", "Se;eccion de Examen", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("crearExamenes", "Elija un examen", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("crearExamenes", "Atras", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("crearExamenes", "Siguiente", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class crearExamenes: public Ui_crearExamenes {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREAREXAMENES_H
