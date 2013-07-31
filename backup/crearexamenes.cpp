#include "crearexamenes.h"
#include "ui_crearexamenes.h"


crearExamenes::crearExamenes(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::crearExamenes)
{
    ui->setupUi(this);

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
}

void crearExamenes::examHandler()
{
    if(selectedExamen.compare("Hemograma"))
    {
        hemo.show();
        ui->treeWidget->clear();
        this->close();
    }
    else if(selectedExamen.compare("Quimica"))
    {

    }
    else if(selectedExamen.compare("Heces"))
    {

    }
    else if(selectedExamen.compare("Orina"))
    {

    }
}
