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
    this->examen = examen;
    QString name;
    QDate date;
    QStringList campos = fManager.getCamposExamen(examen);
    listaPrin = informacion;
    //nombres,apellido,fecha/edad,doctor,
    name.push_back(informacion.at(0));
    name.push_back(" ");
    name.push_back(informacion.at(1));
    ui->label_nombre->setText(name);
    ui->label_Examen->setText(examen.c_str());
    ui->label_fecha->setText(date.currentDate().toString("dddd,d / MMMM /yyyy"));
    ui->label_edad->setText(informacion.at(2));
    ui->label_doctor->setText(informacion.at(3));
    int x = 50;
    int y = 20;
    if(!campos.isEmpty())
    {
        if(campos.length()<= 8)
        {
            x = 315;
            cout << "X: 315" << endl;
        }
        if(campos.length() >8 && campos.length() <16 )
        {
            x=150;
            cout << "X:150"<<endl;
        }
        for(int i =0 ; i < campos.length(); i++)
        {
            QLabel *wut = new QLabel(ui->widget);
            QString label;
            label = campos.at(i);
            label.push_back(":");
            wut->setText(label);
            wut->move(x,y);
            y = y+25;
            if(y>200)
            {
                y=20;
                x=x+200;
            }
        }
        if(campos.length()<= 8)
        {
            x = 315;
            cout << "X: 315" << endl;
        }
        if(campos.length() >8 && campos.length() <16 )
        {
            x=150;
            cout << "X:150"<<endl;
        }
        if(campos.length() > 16 && campos.length() <= 25)
        {
            x =50;
        }
        x=x+95;
        y=20;
        for(int i =4; i< informacion.length();i++)
        {
            QLabel *wut = new QLabel(ui->widget);
            wut->setText(informacion.at(i));
            wut->move(x,y);
            y = y+25;
            if(y>200)
            {
                y=20;
                x=x+200;
            }
        }
    }
}

void resultados::getInformacion2(string examen, QStringList divisiones, QStringList informacion)
{
    this->examen = examen;
    QString name;
    QDate date;
    listaPrin = informacion;
    //nombres,apellido,fecha/edad,doctor,
    name.push_back(informacion.at(0));
    name.push_back(" ");
    name.push_back(informacion.at(1));
    ui->label_nombre->setText(name);
    ui->label_Examen->setText(examen.c_str());
    ui->label_fecha->setText(date.currentDate().toString("dddd,d / MMMM /yyyy"));
    ui->label_edad->setText(informacion.at(2));
    ui->label_doctor->setText(informacion.at(3));

    int x=20;
    int y = 10;
    for(int i =0; i <divisiones.length(); i++)
    {
        QGroupBox *division = new QGroupBox(ui->widget);
        listaGroupbox.push_back(division);
        QString nameExam = examen.c_str();
        QStringList listaCampos = fManager.getCamposExamen(examen);
        for(int j =0; j < fManager.getNumeroCamposDivision(nameExam,QStringList.at(i));j++)
        {

        }

    }



}

void resultados::on_commandLinkButton_clicked()
{
    ui->commandLinkButton->hide();
    bool ok;
    fManager.agregarRegistro(listaPrin.at(0).toStdString(),listaPrin.at(1).toStdString(),listaPrin.at(2).toInt(&ok,10),examen);
    this->close();
    emit closing();
}
