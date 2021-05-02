#ifndef OPE_H
#define OPE_H

#include <QDialog>

namespace Ui {
class Ope;
}

class Ope : public QDialog
{
    Q_OBJECT

public:
    explicit Ope(QWidget *parent = nullptr);
    ~Ope();

private slots:
    void on_pushButton_clicked();

    void on_spinBox_valueChanged(int arg1);

    void on_spinBox_2_valueChanged(int arg1);

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::Ope *ui;
};

#endif // OPE_H
