#include "plantillaingreso.h"
#include "ui_plantillaingreso.h"

plantillaIngreso::plantillaIngreso(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::plantillaIngreso)
{
    ui->setupUi(this);
}

plantillaIngreso::~plantillaIngreso()
{
    delete ui;
}
