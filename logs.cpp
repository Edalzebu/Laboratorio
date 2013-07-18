#include "logs.h"
#include "ui_logs.h"

logs::logs(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::logs)
{
    ui->setupUi(this);
}

logs::~logs()
{
    delete ui;
}

void logs::getFecha(QDate fecha)
{
    QList<QStringList> listaReg = fManager.getRegistros(fecha.toString("ddMMyyyy").toStdString());
    ui->label_2->setText(fecha.toString("dddd,d / MMMM /yyyy"));
    if(!listaReg.isEmpty())
    {
        for(int i = 0; i < listaReg.length(); i++)
        {
            QTreeWidgetItem *item = new QTreeWidgetItem(ui->treeWidget);
            for(int j = 0; j < listaReg.at(i).length(); j++)
            {               
                item->setText(j,listaReg.at(i).at(j));
            }

        }
    }
    else
    {
        cout << "Lista esta vacia " << endl;
    }

}

void logs::on_pushButton_clicked()
{
    ui->treeWidget->clear();
    this->close();
}
