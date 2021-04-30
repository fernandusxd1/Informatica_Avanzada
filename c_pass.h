#ifndef C_PASS_H
#define C_PASS_H

#include <QDialog>

namespace Ui {
class C_pass;
}

class C_pass : public QDialog
{
    Q_OBJECT

public:
    explicit C_pass(QWidget *parent = nullptr);
    ~C_pass();

private slots:

    void on_pushButton_2_clicked();

    void on_radioButton_toggled(bool checked);

private:
    Ui::C_pass *ui;
};

#endif // C_PASS_H
