#ifndef INGENIERO_H
#define INGENIERO_H

#include <QMainWindow>

namespace Ui {
class ingeniero;
}

class ingeniero : public QMainWindow
{
    Q_OBJECT

public:
    explicit ingeniero(QWidget *parent = nullptr);
    ~ingeniero();

private:
    Ui::ingeniero *ui;
};

#endif // INGENIERO_H
