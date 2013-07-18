#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>
#include "manejadorarchivos.h"
#include "administrador.h"

namespace Ui {
class login;
}

class login : public QWidget
{
    Q_OBJECT
    
public:
    explicit login(QWidget *parent = 0);
    ~login();
    
private slots:
    void onclose();
    void on_boton_ingresar_clicked();

private:
    Ui::login *ui;
    manejadorArchivos fManager;
    administrador adminCP;
signals:
    void closing();
};

#endif // LOGIN_H
