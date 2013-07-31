#include "administrador.h"
#include "ui_administrador.h"

administrador::administrador(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::administrador)
{
    ui->setupUi(this);
    seguir = false;
    ui->boton_verReg->setDisabled(true);
    ui->boton_crearExamen->setDisabled(true);
}

administrador::~administrador()
{
    delete ui;
}



void administrador::on_calendarWidget_activated(const QDate &date)
{

}

void administrador::on_calendarWidget_clicked(const QDate &date)
{
    seguir = true;
    ui->boton_verReg->setDisabled(false);
}

void administrador::on_boton_verReg_clicked()
{
    if(seguir)
    {
        QDate fecha = ui->calendarWidget->selectedDate();
        log.getFecha(fecha);
        log.show();
    }
}

void administrador::on_spinBox_valueChanged(int arg1)
{
    int x = 40;
    int y = 60;

    if(!listaEdits.empty())
    {
        for(int i=0; i<listaEdits.length(); i++)
        {
            listaEdits.at(i)->hide();
        }
    }
    listaEdits.clear();

    for(int i =0; i<arg1;i++)
    {
        if(i == 8 || i==16 || i==22 )
        {
            x = x+40+113;
            y = 60;
        }

        QLineEdit *edit = new QLineEdit(ui->tab_crearExamen);
        edit->move(x,y);
        listaEdits.push_back(edit);
        edit->show();
        y = y+25;
    }
}


void administrador::on_boton_crearExamen_clicked()
{
    QStringList listaCampos;
    for(int i=0; i <listaEdits.length();i++)
    {
        listaCampos << listaEdits.at(i)->text();
    }
    fManager.agregarExamen(ui->line_crearExamen->text().toStdString(),listaCampos);
    ui->boton_crearExamen->setDisabled(true);
    ui->line_crearExamen->setText("");
}

void administrador::on_line_crearExamen_textEdited(const QString &arg1)
{
    if(!arg1.isEmpty())
    {
        ui->boton_crearExamen->setDisabled(false);
    }
}

void administrador::clearForm()
{
    ui->lineEdit->setText("");
    ui->lineEdit_2->setText("");
    ui->line_confirmar->setText("");
    ui->line_crearExamen->setText("");
    ui->line_nuevaC->setText("");
}

void administrador::on_toolButton_clicked()
{
    emit closing();
    this->close();
}
