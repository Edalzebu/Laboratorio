#ifndef WIZARD_H
#define WIZARD_H

#include <QWizard>
#include <QLineEdit>
#include <iostream>
#include <QAbstractButton>
#include "manejadorarchivos.h"
using namespace std;
namespace Ui {
class Wizard;
}

class Wizard : public QWizard
{
    Q_OBJECT
    
public:
    explicit Wizard(QWidget *parent = 0);
    void iniciador();
    ~Wizard();
    
private slots:


    void on_spinBox_valueChanged(int arg1);
    void on_spinBox_2_valueChanged(int arg1);
    void on_line_nombreEx_textChanged(const QString &arg1);
    void changingPage(int pagina);

public slots:
    void Wizard_NextButton_clicked();
    void Wizard_BackButton_clicked();
    void Wizard_FinishButton_clicked();

private:
    Ui::Wizard *ui;
    QList<QLineEdit*> listaEdits;
    QList<QLineEdit*> listaEditsCampos;
    int numeroDivisiones;
    void changeDivision();
    QStringList nombresDivisiones;
    QList <QStringList> divisionesCampos;
    QString nombreExamen;
    void agregaraLista();
    manejadorArchivos fManager;
};

#endif // WIZARD_H
