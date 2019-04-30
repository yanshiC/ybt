#include "ybtmain.h"
#include "ui_ybtmain.h"

ybtMain::ybtMain(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ybtMain)
{
    ui->setupUi(this);
}

ybtMain::~ybtMain()
{
    delete ui;
}
