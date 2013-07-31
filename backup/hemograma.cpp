#include "hemograma.h"
#include "ui_hemograma.h"

hemograma::hemograma(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::hemograma)
{
    ui->setupUi(this);
}

hemograma::~hemograma()
{
    delete ui;
}

void hemograma::on_pushButton_clicked()
{
    if(checkFields())
    {

    }
}

bool hemograma::checkFields()
{
    if(ui->line_nombres->text().isEmpty() || ui->line_apellidos->text().isEmpty() || ui->line_doctor->text().isEmpty()
            || ui->line_hematocrito->text().isEmpty() || ui->line_hemoglobina->text().isEmpty() || ui->line_eritrocitos->text().isEmpty()
            || ui->line_mcv->text().isEmpty() || ui->line_mch->text().isEmpty() || ui->line_mchc->text().isEmpty() || ui->line_plaquetas->text().isEmpty()
            || ui->line_leucocitos->text().isEmpty() || ui->line_segmentados->text().isEmpty() || ui->line_linfocitos->text().isEmpty()
            || ui->line_eosinofilos->text().isEmpty() ||ui->line_monocitos->text().isEmpty() || ui->line_bandas->text().isEmpty()
            || ui->line_basofilos->text().isEmpty())
    {
        return false;
    }
    else
    {
        return true;
    }
}
