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

private:
    Ui::ingenieria *ui;
};

#endif // INGENIERIA_H
