#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "crearexamenes.h"
#include "login.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
private slots:

    void destruirCrearEx();



    void on_boton_nuevo_clicked();

    void on_boton_admin_clicked();

private:
    Ui::MainWindow *ui;
    crearExamenes crearEx;
    login log;
};

#endif // MAINWINDOW_H
