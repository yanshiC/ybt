#include "a_1_ypls_check.h"
#include "ui_a_1_ypls_check.h"
#include "a_1_ypls.h"

extern QString CardNo ;
QString globaldata ;

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

void a_1_ypls_check::on_bt_check_clicked()
{
    QSqlQuery q ;
    q.setForwardOnly( 1 ) ;
    CardNo = ui ->CardNo_Qt ->text() ;
    q.exec(QString("SELECT CardPswd FROM a_person WHERE CardNo = %1 "
                   ).arg(CardNo)) ;
    q.next() ;
    QString Pswd = q.value(0).toString() ;
    if ( Pswd == ui ->CardPswd_Qt ->text() )
    {

        globaldata = ui ->CardNo_Qt ->text() ;
        a_1_ypls_check ::close() ;

    }
    else
    {
        QMessageBox ::information( this , "Tips" , "密码输入错误!" ) ;
    }
}

void a_1_ypls_check::on_bt_cancel_clicked()
{
    CardNo = "" ;
    a_1_ypls_check ::close() ;
}
