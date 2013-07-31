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

    connect(this, SIGNAL(currentIdChanged(int)),this,SLOT(changingPage(int)));
    QAbstractButton *nextButton = this->button(NextButton);
    QAbstractButton *backButton = this->button(BackButton);
    QAbstractButton *finishButton = this->button(FinishButton);
    connect(finishButton,SIGNAL(clicked()),this,SLOT(Wizard_FinishButton_clicked()));
    connect(nextButton,SIGNAL(clicked()),this, SLOT(Wizard_NextButton_clicked()));
    connect(backButton,SIGNAL(clicked()),this, SLOT(Wizard_BackButton_clicked()));
    fManager.checkingArch();

}

Wizard::~Wizard()
{
    delete ui;
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



void Wizard::Wizard_NextButton_clicked()
{
     if( currentId()-1 == 0)
     {
        numeroDivisiones = ui->spinBox->value();
        cout << "Numero Divisiones: " << numeroDivisiones << endl << " Lista Edits Length: " << listaEdits.length() << endl;
        for(int i = 0; i < listaEdits.length(); i++)
        {
            nombresDivisiones.push_front(listaEdits.at(i)->text());
        }
        changeDivision();
        numeroDivisiones = numeroDivisiones-1;
        nombreExamen = ui->line_nombreEx->text();
     }
     else if(currentId()-1 == 1)
     {
         agregaraLista();
        if(numeroDivisiones >0)
        {
            changeDivision();
            back();
            numeroDivisiones = numeroDivisiones-1;
        }
     }
     if (currentId() == 2)
     {
         QTreeWidgetItem *item = new QTreeWidgetItem(ui->treeWidget);
         item->setText(0,nombreExamen);

         for(int i = 0 ; i < divisionesCampos.length();i++)
         {
             QTreeWidgetItem *division = new QTreeWidgetItem(item);
             division->setText(0,divisionesCampos.at(i).at(0));
             for(int j =1; j < divisionesCampos.at(i).length(); j++)
             {
                 QTreeWidgetItem *campo = new QTreeWidgetItem(division);
                 campo->setText(0,divisionesCampos.at(i).at(j));
             }
         }

     }
}

void Wizard::Wizard_BackButton_clicked()
{

}

void Wizard::Wizard_FinishButton_clicked()
{
    if(fManager.agregarExamenComplejo(nombreExamen,divisionesCampos))
    {
        cout << "Se agrego el examen complejo " << endl;
    }
}
void Wizard::changeDivision()
{

    ui->label_Division->setText(nombresDivisiones.at(nombresDivisiones.length()-1));
    ui->spinBox_2->setValue(0);
    if(!nombresDivisiones.isEmpty())
    {
         nombresDivisiones.pop_back();
    }

}

void Wizard::agregaraLista()
{
    QStringList lista;
    lista<< ui->label_Division->text();
    cout << "Nombre Division: " << ui->label_Division->text().toStdString().c_str() << endl;

    for(int i =0; i < listaEditsCampos.length(); i++)
    {
        lista << listaEditsCampos.at(i)->text();
        cout << "Agregando: " << listaEditsCampos.at(i)->text().toStdString().c_str() << endl;
    }
    divisionesCampos.push_back(lista);
}
