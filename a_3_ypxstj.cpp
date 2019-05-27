#include "a_3_ypxstj.h"
#include "ui_a_3_ypxstj.h"

a_3_ypxstj::a_3_ypxstj(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::a_3_ypxstj)
{
    ui->setupUi(this);

    setWindowState(Qt::WindowMaximized) ;

    Qt::WindowFlags flags=Qt::Dialog;
    flags |=Qt::WindowMinMaxButtonsHint;
    flags |=Qt::WindowCloseButtonHint;
    setWindowFlags(flags);
}

a_3_ypxstj::~a_3_ypxstj()
{
    delete ui;
}

void a_3_ypxstj::on_pushButton_clicked()
{
    a_3_ypxstj ::close() ;
}
