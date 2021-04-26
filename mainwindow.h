#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_Boton_op_clicked();

    void on_Boton_ing_adm_clicked();

    void on_commandLinkButton_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
