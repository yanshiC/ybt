#include "a_1_ypls_check.h"
#include "ui_a_1_ypls_check.h"

a_1_ypls_check::a_1_ypls_check(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::a_1_ypls_check)
{
    ui->setupUi(this);
}

a_1_ypls_check::~a_1_ypls_check()
{
    delete ui;
}

void a_1_ypls_check::on_buttonBox_accepted()
{
    a_1_ypls_check ::close() ;
}

void a_1_ypls_check::on_buttonBox_rejected()
{
    a_1_ypls_check ::close() ;
}
