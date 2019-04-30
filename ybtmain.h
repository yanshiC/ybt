#ifndef YBTMAIN_H
#define YBTMAIN_H

#include <QMainWindow>

namespace Ui {
class ybtMain;
}

class ybtMain : public QMainWindow
{
    Q_OBJECT

public:
    explicit ybtMain(QWidget *parent = nullptr);
    ~ybtMain();

private:
    Ui::ybtMain *ui;
};

#endif // YBTMAIN_H
