#include "wizard.h"
#include "ui_wizard.h"

Wizard::Wizard(QWidget *parent) :
    QWizard(parent),
    ui(new Ui::Wizard)
{

    ui->setupUi(this);


}

void Wizard::iniciador()
{
    numeroDivisiones = 0;
    connect(this,SIGNAL(customButtonClicked(int)),this,SLOT(Wizard_customButtonClicked(int)));
    connect(this, SIGNAL(currentIdChanged(int)),this,SLOT(changingPage(int)));


}

Wizard::~Wizard()
{
    delete ui;
}


void Wizard::Wizard_customButtonClicked(int which)
{
    cout << "Boton #: " << which << "Current ID: " << currentId() << endl;
    if(which == 1 && currentPage()->title() == "PaginaComienzo" )
    {
        numeroDivisiones = ui->spinBox->value();
    }
    if(which == 1 && currentPage()->nextId() == 1)
    {
        if(numeroDivisiones >0)
        {
            numeroDivisiones = numeroDivisiones-1;


        }
    }
}

void Wizard::on_spinBox_valueChanged(int arg1)
{
    if(!listaEdits.empty())
    {
        for(int i=0; i<listaEdits.length(); i++)
        {
            listaEdits.at(i)->hide();
        }
    }
    listaEdits.clear();
    int x = 25;
    int y = 25;
    for(int i =0; i < arg1; i++)
    {
        QLineEdit *line = new QLineEdit(ui->groupBox);
        line->move(x,y);
        line->show();
        listaEdits.push_back(line);
        y=y+50;
        if(i ==2)
        {
            x = x+200;
            y = 50;
        }
        if(i==4)
        {
            x = x+150;
            y=50;
        }

    }

}

void Wizard::on_spinBox_2_valueChanged(int arg1)
{
    int x = 140;
    int y = 100;

    if(!listaEditsCampos.empty())
    {
        for(int i=0; i<listaEditsCampos.length(); i++)
        {
            listaEditsCampos.at(i)->hide();
        }
    }
    listaEditsCampos.clear();

    for(int i =0; i<arg1;i++)
    {
        if(i == 5 || i==10 || i==22 )
        {
            x = x+40+150;
            y = 100;
        }

        QLineEdit *edit = new QLineEdit(ui->Pagina_campos);
        edit->move(x,y);
        listaEditsCampos.push_back(edit);
        edit->show();
        y = y+25;
    }
}

void Wizard::on_line_nombreEx_textChanged(const QString &arg1)
{
    if(!arg1.isEmpty())
    {
       button(NextButton)->setEnabled(true);
    }
    else
    {
        button(NextButton)->setEnabled(false);
    }
}

void Wizard::changingPage(int pagina)
{
    if(pagina == 0)
    {
        button(NextButton)->setEnabled(false);
        ui->line_nombreEx->clear();
        ui->spinBox->setValue(0);
    }
}
