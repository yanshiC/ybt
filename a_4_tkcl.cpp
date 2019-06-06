#include "a_4_tkcl.h"
#include "ui_a_4_tkcl.h"

a_4_tkcl::a_4_tkcl(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::a_4_tkcl)
{
    ui->setupUi(this);

    setWindowState(Qt::WindowMaximized) ;

    Qt::WindowFlags flags=Qt::Dialog;
    flags |=Qt::WindowMinMaxButtonsHint;
    flags |=Qt::WindowCloseButtonHint;
    setWindowFlags(flags);
}

a_4_tkcl::~a_4_tkcl()
{
    delete ui;
}

void a_4_tkcl::on_pushButton_clicked()
{
    a_4_tkcl ::close() ;
}
