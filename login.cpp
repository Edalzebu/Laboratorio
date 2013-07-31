#include "login.h"
#include "ui_login.h"

login::login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
    connect(&adminCP, SIGNAL(closing()), this, SLOT(onclose()));
    ui->line_clave->setEchoMode(ui->line_clave->Password);
}

login::~login()
{
    delete ui;
}



void login::onclose()
{
    emit closing();
}

void login::on_boton_ingresar_clicked()
{
    QList<QStringList> listaAdministradores;

    listaAdministradores = fManager.getAdministradores();

    for(int i =0; i < listaAdministradores.length(); i ++)
    {
        if(listaAdministradores.at(i).at(0).toStdString() == ui->line_usuario->text().toStdString() && listaAdministradores.at(i).at(1).toStdString() == ui->line_clave->text().toStdString())
        {
            this->hide();
            adminCP.show();
            ui->line_clave->setText("");
            ui->line_usuario->setText("");
        }
    }
}
