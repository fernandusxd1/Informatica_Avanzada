#ifndef INGENIERIA_H
#define INGENIERIA_H

#include <QDialog>

namespace Ui {
class ingenieria;
}

class ingenieria : public QDialog
{
    Q_OBJECT

public:
    explicit ingenieria(QWidget *parent = nullptr);
    ~ingenieria();

private slots:
    void on_commandLinkButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::ingenieria *ui;
};

#endif // INGENIERIA_H
