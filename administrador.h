#ifndef ADMINISTRADOR_H
#define ADMINISTRADOR_H

#include <QDialog>

namespace Ui {
class Administrador;
}

class Administrador : public QDialog
{
    Q_OBJECT

public:
    explicit Administrador(QWidget *parent = nullptr);
    ~Administrador();

private:
    Ui::Administrador *ui;
};

#endif // ADMINISTRADOR_H
