#ifndef VENTANA1_H
#define VENTANA1_H

#include <QDialog>

namespace Ui {
class Ventana1;
}

class Ventana1 : public QDialog
{
    Q_OBJECT

public:
    explicit Ventana1(QWidget *parent = nullptr);
    ~Ventana1();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::Ventana1 *ui;
};

#endif // VENTANA1_H
