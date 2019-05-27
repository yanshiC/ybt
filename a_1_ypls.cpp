#include "a_1_ypls.h"
#include "ui_a_1_ypls.h"
#include "ybtmain.h"

a_1_ypls::a_1_ypls(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::a_1_ypls)
{
    ui->setupUi(this);

    setWindowState(Qt::WindowMaximized) ;

    Qt::WindowFlags flags=Qt::Dialog;
    flags |=Qt::WindowMinMaxButtonsHint;
    flags |=Qt::WindowCloseButtonHint;
    setWindowFlags(flags);
}

a_1_ypls::~a_1_ypls()
{
    delete ui;
}

void a_1_ypls::on_pushButton_clicked()
{
    a_1_ypls ::close() ;
}
