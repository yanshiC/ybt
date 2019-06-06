#include "ybtmain.h"
#include <QApplication>
#include <QDebug>
#include <QtSql/QSqlResult>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>
#include <QPluginLoader>
#include <QMessageBox>

void accessMySql() ;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    accessMySql() ;
    ybtMain w;
    w.show();

    return a.exec();
}

void accessMySql ()
{

}
