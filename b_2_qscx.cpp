#include "b_2_qscx.h"
#include "ui_b_2_qscx.h"

b_2_qscx::b_2_qscx(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::b_2_qscx)
{
    ui->setupUi(this);

    setWindowState(Qt::WindowMaximized) ;

    Qt::WindowFlags flags=Qt::Dialog;
    flags |=Qt::WindowMinMaxButtonsHint;
    flags |=Qt::WindowCloseButtonHint;
    setWindowFlags(flags);
}

b_2_qscx::~b_2_qscx()
{
    delete ui;
}

void b_2_qscx::on_pushButton_clicked()
{
    b_2_qscx ::close() ;
}
