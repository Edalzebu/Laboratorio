#ifndef WIZARD_H
#define WIZARD_H

#include <QWizard>
#include <QLineEdit>
#include <iostream>
#include <QAbstractButton>
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

    void Wizard_customButtonClicked(int which);
    void on_spinBox_valueChanged(int arg1);
    void on_spinBox_2_valueChanged(int arg1);
    void on_line_nombreEx_textChanged(const QString &arg1);
    void changingPage(int pagina);

private:
    Ui::Wizard *ui;
    QList<QLineEdit*> listaEdits;
    QList<QLineEdit*> listaEditsCampos;
    int numeroDivisiones;
};

#endif // WIZARD_H
