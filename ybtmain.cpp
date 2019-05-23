#include "ybtmain.h"
#include "ui_ybtmain.h"

ybtMain::ybtMain(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ybtMain)
{
    ui->setupUi(this);

    setWindowFlags(Qt::WindowStaysOnTopHint);
}

ybtMain::~ybtMain()
{
    delete ui;
}


// 药品零售
void ybtMain::on_action_triggered()
{
    a_1_ypls ypls ;
    ypls.exec() ;
}
void ybtMain::on_pushButton_clicked()
{
    a_1_ypls ypls ;
    ypls.exec() ;
}


// 零售清单
void ybtMain::on_action_2_triggered()
{
    a_2_lsqd lsqd ;
    lsqd.exec() ;
}
void ybtMain::on_pushButton_2_clicked()
{
    a_2_lsqd lsqd ;
    lsqd.exec() ;
}


// 药品销售统计
void ybtMain::on_action_3_triggered()
{
    a_3_ypxstj w ;
    w.exec() ;
}

void ybtMain::on_action_4_triggered()
{
    a_4_tkcl w ;
    w.exec() ;
}

void ybtMain::on_action_7_triggered()
{
    b_1_qssq w ;
    w.exec() ;
}
void ybtMain::on_pushButton_3_clicked()
{
    b_1_qssq w ;
    w.exec() ;
}


void ybtMain::on_action_8_triggered()
{
    b_2_qscx w ;
    w.exec() ;
}


void ybtMain::on_action_5_triggered()
{
    c_1_xgybkmm w ;
    w.exec() ;
}

void ybtMain::on_action_9_triggered()
{

}
