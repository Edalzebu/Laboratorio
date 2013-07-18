#ifndef LOGS_H
#define LOGS_H

#include <QWidget>
#include "manejadorarchivos.h"
#include <QTreeWidgetItem>

namespace Ui {
class logs;
}

class logs : public QWidget
{
    Q_OBJECT
    
public:
    explicit logs(QWidget *parent = 0);
    ~logs();
    void getFecha(QDate fecha);
    
private slots:
    void on_pushButton_clicked();

private:
    Ui::logs *ui;
    manejadorArchivos fManager;
};

#endif // LOGS_H
