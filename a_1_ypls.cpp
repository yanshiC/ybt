#include "a_1_ypls.h"
#include "ui_a_1_ypls.h"
#include "ybtmain.h"
#include "a_1_ypls_check.h"

QString CardNo , IdNo , SbjName , Name , Money , Others ;
extern QString globaldata ;


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


void a_1_ypls::on_bt_back_clicked()
{
    a_1_ypls ::close() ;
}


void a_1_ypls::on_pushButton_5_clicked()
{
    ui ->CardNo_Qt ->setText( globaldata ) ;
    CardNo = globaldata ;

    QSqlQuery q ;

    q.exec(QString("SELECT IdNo FROM a_person WHERE CardNo = %1 "
                   ).arg(CardNo)) ;
    q.next() ;
    ui ->IdNo_Qt ->setText( q.value(0).toString() ) ;


    q.exec( QString( "SELECT Name FROM a_person WHERE CardNo = %1"
                     ).arg(CardNo) ) ;
    q.next() ;
    ui ->Name_Qt ->setText( q.value(0).toString() ) ;


    q.exec(QString("SELECT SbjName FROM a_person WHERE CardNo = %1 "
                   ).arg(CardNo) ) ;
    q.next() ;
    ui ->SbjName_Qt ->setText( q.value(0).toString() ) ;


    q.exec(QString("SELECT Money FROM a_person WHERE CardNo = %1 "
                   ).arg(CardNo ) ) ;
    q.next() ;
    ui ->Money_Qt ->setText( q.value(0).toString() ) ;


    q.exec(QString("SELECT Others FROM a_person WHERE CardNo = %1 "
                   ).arg(CardNo ) ) ;
    q.next() ;
    ui ->Others_Qt ->setText( q.value(0).toString() ) ;
}


void a_1_ypls::on_pushButton_2_clicked()
{
    a_1_ypls_check awsl ;
    awsl.exec() ;

    on_pushButton_5_clicked() ;

}

int count = 1 ;

void a_1_ypls::on_bt_select_clicked()
{
    QString d_No , d_Name , d_ChangJia , d_DanWei ,
            d_DianZi , d_DanJia , d_Others ;


    for ( int t = 0 ; t < count ; t ++ )
    {
        QSqlQuery q ;

        d_No = ui ->tableWidget ->item(t,0) ->text() ;

        q.exec(QString("SELECT Name FROM a_drug WHERE No = %1 "
                       ).arg(d_No)) ;
        q.next () ;
        ui ->tableWidget ->setItem(t,1,new QTableWidgetItem
                                   (q.value(0).toString())) ;

        q.exec(QString("SELECT ChangJia FROM a_drug WHERE No = %1 "
                       ).arg(d_No)) ;
        q.next () ;
        ui ->tableWidget ->setItem(t,2,new QTableWidgetItem
                                   (q.value(0).toString())) ;

        q.exec(QString("SELECT DanWei FROM a_drug WHERE No = %1 "
                       ).arg(d_No)) ;
        q.next () ;
        ui ->tableWidget ->setItem(t,3,new QTableWidgetItem
                                   (q.value(0).toString())) ;

        q.exec(QString("SELECT DianZi FROM a_drug WHERE No = %1 "
                       ).arg(d_No)) ;
        q.next () ;
        ui ->tableWidget ->setItem(t,4,new QTableWidgetItem
                                   (q.value(0).toString())) ;

        q.exec(QString("SELECT Others FROM a_drug WHERE No = %1 "
                       ).arg(d_No)) ;
        q.next () ;
        ui ->tableWidget ->setItem(t,6,new QTableWidgetItem
                                   (q.value(0).toString())) ;

        q.exec(QString("SELECT DanJia FROM a_drug WHERE No = %1 "
                       ).arg(d_No)) ;
        q.next () ;
        ui ->tableWidget ->setItem(t,7,new QTableWidgetItem
                                   (q.value(0).toString())) ;

    }

}

void a_1_ypls::on_bt_add_clicked()
{
    count ++ ;
    ui -> tableWidget ->setRowCount( count ) ;
}

void a_1_ypls::on_bt_sum_clicked()
{
    double ar[count] ;
    for ( int t = 0 ; t < count ; t ++ )
    {
        double d = ui ->tableWidget ->item(t,7)
                ->text() .toDouble() ;
        int s = ui ->tableWidget ->item(t,8)
                ->text() .toInt() ;
        double su = d * s ;
        ar[t] = su ;
        QString sum = QString ::number(su,'f',2) ;
        ui ->tableWidget ->setItem(t,9,new QTableWidgetItem
                                   (sum) ) ;
    }
    on_bt_add_clicked() ;
    double su = 0 ;
    for ( int t = 0 ; t < count ; t ++ )
    {
        su += ar[t] ;;
    }
    QString sum = QString ::number(su,'f',2) ;
    ui ->tableWidget ->setItem(count-1,9,new QTableWidgetItem
                               (sum) ) ;
}

void a_1_ypls::on_bt_push_clicked()
{
    QString sub = ui ->tableWidget ->item(count-1,9)
            ->text() ;
    CardNo = globaldata ;

    QSqlQuery q ;
    q.exec(QString("SELECT Money FROM a_person WHERE CardNo = %1 "
                   ).arg(CardNo ) ) ;
    q.next() ;
    double su = q.value(0).toDouble() ;
    su -= sub.toDouble() ;
    QString sum = QString ::number(su,'f',2) ;
    q.exec(QString("UPDATE a_person SET Money = %1 WHERE CardNo = %2"
                   ).arg(sum,CardNo) ) ;
    q.exec( QString( "SELECT Name FROM a_person WHERE CardNo = %1"
                     ).arg(CardNo) ) ;
    q.next() ;
    QString Na = q.value(0).toString() ;
    QMessageBox ::information( this , "Tips" ,
                               QString("扣款成功！%1的卡上还剩%2元。"
                                       ).arg(Na,sum) ) ;
    on_bt_back_clicked() ;

}
