#ifndef CLAVEOP_H
#define CLAVEOP_H

#include <QDialog>

namespace Ui {
class claveOp;
}

class claveOp : public QDialog
{
    Q_OBJECT

public:
    explicit claveOp(QWidget *parent = nullptr);
    ~claveOp();

private slots:
    void on_pushButton_clicked();

private:
    Ui::claveOp *ui;
};

#endif // CLAVEOP_H
