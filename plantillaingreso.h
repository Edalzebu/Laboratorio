#ifndef PLANTILLAINGRESO_H
#define PLANTILLAINGRESO_H

#include <QWidget>

namespace Ui {
class plantillaIngreso;
}

class plantillaIngreso : public QWidget
{
    Q_OBJECT
    
public:
    explicit plantillaIngreso(QWidget *parent = 0);
    ~plantillaIngreso();
    
private:
    Ui::plantillaIngreso *ui;
};

#endif // PLANTILLAINGRESO_H
