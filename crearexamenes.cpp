#include "crearexamenes.h"
#include "ui_crearexamenes.h"


crearExamenes::crearExamenes(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::crearExamenes)
{
    ui->setupUi(this);
    connect(&hemo,SIGNAL(closing()),this,SLOT(isClosing()));
    connect(&plant,SIGNAL(closing()),this,SLOT(isClosing()));
}

crearExamenes::~crearExamenes()
{
    delete ui;
}

void crearExamenes::reload()
{
    QStringList listaExamenes;
    listaExamenes = fManager.getExamenes();
    for(int i  = 0; i<listaExamenes.length(); i++)
    {
        QTreeWidgetItem *wut = new QTreeWidgetItem(ui->treeWidget);
        wut->setText(0,listaExamenes.at(i).toStdString().c_str());
    }
}

void crearExamenes::on_pushButton_clicked()
{
    emit closing();
    ui->treeWidget->clear();
    this->close();
}

void crearExamenes::on_pushButton_2_clicked()
{
    examHandler();
}

void crearExamenes::on_treeWidget_itemActivated(QTreeWidgetItem *item, int column)
{
    selectedExamen = item->text(column).toStdString();
    cout << "Slected Examen changed: " << selectedExamen.c_str() << endl;
}

void crearExamenes::isClosing()
{
    emit closing();
}

void crearExamenes::examHandler()
{
    if(selectedExamen == "Hemograma" || selectedExamen == "hemograma")
    {
        hemo.show();
        ui->treeWidget->clear();
        this->close();

    }
    else
    {

        plant.getInformacion(selectedExamen.c_str());
        plant.show();
        this->close();
        ui->treeWidget->clear();
    }
}
