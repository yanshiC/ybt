#include "ybtmain.h"
#include "ui_ybtmain.h"



ybtMain::ybtMain(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ybtMain)
{
    ui->setupUi(this);

    setWindowState(Qt::WindowMaximized) ;

    QSqlDatabase db = QSqlDatabase ::addDatabase("QMYSQL") ;
    db.setHostName("148.70.14.18") ;
    db.setUserName("ybt") ;
    db.setPort(3306) ;
    db.setPassword("qwerqwer") ;
    db.setDatabaseName("ybt") ;

    if ( ! db.open() )
    {
        QMessageBox ::information( this , "Tips" ,
                                   "数据库连接失败！" ) ;
    }
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
    QMessageBox ::information( this , "Tips" ,
                               "开发中！" ) ;
    //a_2_lsqd lsqd ;
    //lsqd.exec() ;
}


// 药品销售统计
void ybtMain::on_action_3_triggered()
{
    a_3_ypxstj w ;
    w.exec() ;
}
void ybtMain::on_pushButton_5_clicked()
{
    QMessageBox ::information( this , "Tips" ,
                               "开发中！" ) ;
    //a_3_ypxstj w ;
    //w.exec() ;
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
    QMessageBox ::information( this , "Tips" ,
                               "开发中！" ) ;
    //b_1_qssq w ;
    //w.exec() ;
}


void ybtMain::on_action_8_triggered()
{
    b_2_qscx w ;
    w.exec() ;
}


//修改医保卡密码
void ybtMain::on_action_5_triggered()
{
    c_1_xgybkmm w ;
    w.exec() ;
}
void ybtMain::on_pushButton_6_clicked()
{
    c_1_xgybkmm w ;
    w.exec() ;
}


void ybtMain::on_action_9_triggered()
{

}



void ybtMain::on_pushButton_4_clicked()
{
    QMessageBox ::information( this , "Tips" ,
                               "开发中！" ) ;
}
