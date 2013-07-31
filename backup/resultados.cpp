#include "resultados.h"
#include "ui_resultados.h"

resultados::resultados(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::resultados)
{
    ui->setupUi(this);

}

resultados::~resultados()
{
    delete ui;
}

void resultados::getInformacion(string examen, QStringList informacion)
{
    QString name;
    QDate date;
    QStringList campos = fManager.getCamposExamen(examen);

    //nombres,apellido,fecha/edad,doctor,
    name.push_back(informacion.at(0));
    name.push_back(" ");
    name.push_back(informacion.at(1));
    ui->label_nombre->setText(name);
    ui->label_Examen->setText(examen.c_str());
    ui->label_fecha->setText(date.currentDate().toString("dddd,d/MMM/yyyy"));
    ui->label_edad->setText(informacion.at(2));
    ui->label_doctor->setText(informacion.at(3));

    int y = 50;
    for(int i = 0; i < informacion.length() -4; i++)
    {
        QLabel *wut = new QLabel(ui->widget);
        wut->setText(informacion.at(i));
        wut->move(50,y);
        y = y+50;
    }
    if(examen == "hemograma")
    {

    }
}
