#include "hemograma.h"
#include "ui_hemograma.h"

hemograma::hemograma(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::hemograma)
{
    ui->setupUi(this);
    connect(&res,SIGNAL(closing()), this,SLOT(isClosing()));
}

hemograma::~hemograma()
{
    delete ui;
}

void hemograma::on_pushButton_clicked()
{
    if(checkFields())
    {
        res.getInformacion("HEMOGRAMA",lista);
        this->hide();
        res.show();
    }
}

void hemograma::isClosing()
{
    emit closing();
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
        QDate fecha;
        int diasDif= fecha.currentDate().daysTo(ui->dateEdit->date());
        int edad = diasDif /365;
        edad = edad*-1;
        stringstream ss;
        ss << edad;

        lista << ui->line_nombres->text() << ui->line_apellidos->text() << ss.str().c_str() << ui->line_doctor->text()
                 << ui->line_hematocrito->text() << ui->line_hemoglobina->text() << ui->line_eritrocitos->text() << ui->line_mcv->text()
                    << ui->line_mch->text() << ui->line_mchc->text() << ui->line_plaquetas->text() << ui->line_leucocitos->text() << ui->line_segmentados->text()
              << ui->line_linfocitos->text() << ui->line_eosinofilos->text() << ui->line_monocitos->text() << ui->line_bandas->text() << ui->line_basofilos->text();
        return true;
    }
}
