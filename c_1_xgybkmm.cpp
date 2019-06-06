#include "c_1_xgybkmm.h"
#include "ui_c_1_xgybkmm.h"

c_1_xgybkmm::c_1_xgybkmm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::c_1_xgybkmm)
{
    ui->setupUi(this);

    //setWindowState(Qt::WindowMaximized) ;

    Qt::WindowFlags flags=Qt::Dialog;
    flags |=Qt::WindowMinMaxButtonsHint;
    flags |=Qt::WindowCloseButtonHint;
    setWindowFlags(flags);
}

c_1_xgybkmm::~c_1_xgybkmm()
{
    delete ui;
}

void c_1_xgybkmm::on_pushButton_clicked()
{
    c_1_xgybkmm ::close() ;
}
