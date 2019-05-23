#include "b_1_qssq.h"
#include "ui_b_1_qssq.h"

b_1_qssq::b_1_qssq(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::b_1_qssq)
{
    ui->setupUi(this);

    Qt::WindowFlags flags=Qt::Dialog;
    flags |=Qt::WindowMinMaxButtonsHint;
    flags |=Qt::WindowCloseButtonHint;
    setWindowFlags(flags);
}

b_1_qssq::~b_1_qssq()
{
    delete ui;
}

void b_1_qssq::on_pushButton_clicked()
{
    b_1_qssq ::close() ;
}
