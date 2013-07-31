#ifndef HEMOGRAMA_H
#define HEMOGRAMA_H

#include <QWidget>

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

private:
    Ui::hemograma *ui;
    bool checkFields();
};

#endif // HEMOGRAMA_H
