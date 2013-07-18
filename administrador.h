#ifndef ADMINISTRADOR_H
#define ADMINISTRADOR_H

#include <QWidget>
#include "logs.h"
#include <QWizard>
#include "wizard.h"
#include <QLineEdit>
#include <QLabel>
#include <QList>
#include "manejadorarchivos.h"

namespace Ui {
class administrador;
}

class administrador : public QWidget
{
    Q_OBJECT
    
public:
    explicit administrador(QWidget *parent = 0);
    ~administrador();
    void reloadTree();
private slots:

    void on_calendarWidget_activated(const QDate &date);
    void on_calendarWidget_clicked(const QDate &date);    
    void on_boton_verReg_clicked();
    void on_spinBox_valueChanged(int arg1);
    void on_boton_crearExamen_clicked();
    void on_line_crearExamen_textEdited(const QString &arg1);
    void clearForm();
    void on_toolButton_clicked();
    void on_tree_Examenes_itemActivated(QTreeWidgetItem *item, int column);
    void on_boton_eliminarExamen_clicked();
    void on_commandLinkButton_3_clicked();

private:
    Ui::administrador *ui;
    bool seguir;
    logs log;
    QList<QLineEdit *> listaEdits;
    manejadorArchivos fManager;
    QString itemSelected;

    Wizard wiz;

signals:
    void closing();
};

#endif // ADMINISTRADOR_H
