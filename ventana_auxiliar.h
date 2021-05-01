#ifndef VENTANA_AUXILIAR_H
#define VENTANA_AUXILIAR_H

#include <QDialog>

namespace Ui {
class Ventana_auxiliar;
}

class Ventana_auxiliar : public QDialog
{
    Q_OBJECT

public:
    explicit Ventana_auxiliar(QWidget *parent = nullptr);
    ~Ventana_auxiliar();

private:
    Ui::Ventana_auxiliar *ui;
};

#endif // VENTANA_AUXILIAR_H
