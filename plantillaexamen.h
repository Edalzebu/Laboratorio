#ifndef PLANTILLAEXAMEN_H
#define PLANTILLAEXAMEN_H

#include <QWidget>
#include "manejadorarchivos.h"
#include <QLabel>
#include <QLineEdit>
#include "resultados.h"
using namespace std;
namespace Ui {
class plantillaExamen;
}

class plantillaExamen : public QWidget
{
    Q_OBJECT
    
public:
    explicit plantillaExamen(QWidget *parent = 0);
    ~plantillaExamen();
    void getInformacion(QString examen);
    
private slots:
    void on_commandLinkButton_clicked();

    void on_commandLinkButton_2_clicked();

private:
    Ui::plantillaExamen *ui;
    manejadorArchivos fManager;
    resultados res;
    string ex;
    QList<QLineEdit *> listaEdits;
signals:
    void closing();
};

#endif // PLANTILLAEXAMEN_H
