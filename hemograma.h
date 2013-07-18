#ifndef HEMOGRAMA_H
#define HEMOGRAMA_H

#include <QWidget>
#include "resultados.h"
#include <QStringList>
#include <sstream>

namespace Ui {
class hemograma;
}

class hemograma : public QWidget
{
    Q_OBJECT
    
public:
    explicit hemograma(QWidget *parent = 0);
    ~hemograma();
    
private slots:
    void on_pushButton_clicked();
    void isClosing();
private:
    Ui::hemograma *ui;
    bool checkFields();
    resultados res;
    QStringList lista;
signals:
    void closing();
};

#endif // HEMOGRAMA_H
