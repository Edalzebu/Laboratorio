#ifndef RESULTADOS_H
#define RESULTADOS_H

#include <QWidget>
#include <QDate>
#include <QLineEdit>
#include <QLabel>
#include "manejadorarchivos.h"

using namespace std;
namespace Ui {
class resultados;
}

class resultados : public QWidget
{
    Q_OBJECT
    
public:
    explicit resultados(QWidget *parent = 0);
    ~resultados();
    void getInformacion(string examen, QStringList informacion);
    
private:
    Ui::resultados *ui;
    manejadorArchivos fManager;
};

#endif // RESULTADOS_H
