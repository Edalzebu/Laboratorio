#include "plantillaexamen.h"
#include "ui_plantillaexamen.h"

plantillaExamen::plantillaExamen(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::plantillaExamen)
{
    ui->setupUi(this);
}

plantillaExamen::~plantillaExamen()
{
    delete ui;
}

void plantillaExamen::getInformacion(QString examen)
{
    listaEdits.clear();
    ex =examen.toStdString();
    QStringList listaCampos;
    ui->groupBox->setTitle(examen);
    listaCampos = fManager.getCamposExamen(examen.toStdString());

    int x = 30;
    int y = 25;
    if(listaCampos.length() > 18)
    {
        cout << "Entro Aqui" << endl;
        //ui->groupBox_2->size().setWidth(ui->groupBox_2->size().width()+265.5);
        ui->groupBox->setGeometry(30,190,796,271);
        this->setGeometry(250,250,size().width()+265,477);
        ui->commandLinkButton->move(690,40);
        ui->commandLinkButton_2->move(690,100);

    }
    for(int i = 0; i < listaCampos.length(); i++)
    {
        QLabel *label = new QLabel(ui->groupBox);
        label->setText(listaCampos.at(i));
        label->move(x,y);
        QLineEdit *line = new QLineEdit(ui->groupBox);
        line->move(x+90,y);
        listaEdits.push_back(line);
        y= y+28;
        if(i==8)
        {
            x = 290;
            y=25;
        }
        if(i==16)
        {
            x=550;
            y=25;
        }
    }
}

void plantillaExamen::on_commandLinkButton_clicked()
{
    QStringList listaInfo;
    QDate fecha;
    int diasDif= fecha.currentDate().daysTo(ui->dateEdit->date());
    int edad = diasDif /365;
    edad = edad*-1;
    stringstream ss;
    ss << edad;

    listaInfo << ui->line_nombres->text() << ui->line_apellidos->text() << ss.str().c_str() << ui->line_doctor->text();
    for(int i = 0; i < listaEdits.length(); i++)
    {
        listaInfo << listaEdits.at(i)->text();
    }
    res.getInformacion(ex,listaInfo);
    res.show();
    this->close();
}

void plantillaExamen::on_commandLinkButton_2_clicked()
{
    this->close();
    emit closing();
}
