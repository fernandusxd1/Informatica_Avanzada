#ifndef OPERARIO_H
#define OPERARIO_H

#include <QDialog>

namespace Ui {
class Operario;
}

class Operario : public QDialog
{
    Q_OBJECT

public:
    explicit Operario(QWidget *parent = nullptr);
    ~Operario();

private:
    Ui::Operario *ui;
};

#endif // OPERARIO_H
