#include "a_2_lsqd.h"
#include "ui_a_2_lsqd.h"
#include "ybtmain.h"

a_2_lsqd::a_2_lsqd(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::a_2_lsqd)
{
    ui->setupUi(this);

    Qt::WindowFlags flags=Qt::Dialog;
    flags |=Qt::WindowMinMaxButtonsHint;
    flags |=Qt::WindowCloseButtonHint;
    setWindowFlags(flags);
}

a_2_lsqd::~a_2_lsqd()
{
    delete ui;
}

void a_2_lsqd::on_pushButton_clicked()
{
    a_2_lsqd ::close() ;
}
