#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(&crearEx,SIGNAL(closing()),this,SLOT(show()));
    connect(&log,SIGNAL(closing()),this,SLOT(show()));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::destruirCrearEx()
{

}



void MainWindow::on_boton_nuevo_clicked()
{
    crearEx.reload();
    crearEx.show();
    this->close();
}

void MainWindow::on_boton_admin_clicked()
{
    this->hide();
    log.show();
    this->close();
}
