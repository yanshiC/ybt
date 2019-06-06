#ifndef A_1_YPLS_H
#define A_1_YPLS_H

#include <QDialog>
#include <QDebug>
#include <QtSql/QSqlResult>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>
#include <QtSql>
#include <QtSql/QtSql>
#include <QPluginLoader>
#include <QString>
#include <QMessageBox>

#include "a_1_ypls_check.h"

namespace Ui {
class a_1_ypls;
}

class a_1_ypls : public QDialog
{
    Q_OBJECT

public:
    explicit a_1_ypls(QWidget *parent = nullptr);
    ~a_1_ypls();


private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_5_clicked();

    void on_bt_select_clicked();

    void on_bt_add_clicked();

    void on_bt_sum_clicked();

    void on_bt_push_clicked();

    void on_bt_back_clicked();

private:
    Ui::a_1_ypls *ui;
};

#endif // A_1_YPLS_H
