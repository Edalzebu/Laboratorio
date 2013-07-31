#ifndef CREAREXAMENES_H
#define CREAREXAMENES_H
#include <QTreeWidgetItem>
#include <QWidget>
#include "manejadorarchivos.h"
#include "hemograma.h"
namespace Ui {
class crearExamenes;
}

class crearExamenes : public QWidget
{
    Q_OBJECT
    
public:
    explicit crearExamenes(QWidget *parent = 0);
    ~crearExamenes();
    void reload();

    
private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_treeWidget_itemActivated(QTreeWidgetItem *item, int column);

private:
    Ui::crearExamenes *ui;
    manejadorArchivos fManager;
    string selectedExamen;
    void examHandler();
    hemograma hemo;
signals:
    void closing();

};

#endif // CREAREXAMENES_H
