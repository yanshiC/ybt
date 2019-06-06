#ifndef YBTMAIN_H
#define YBTMAIN_H

#include <QMainWindow>
#include <QApplication>
#include <QDebug>
#include <QtSql/QSqlResult>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>
#include <QtSql>
#include <QtSql/QtSql>
#include <QPluginLoader>
#include <QMessageBox>

#include "a_1_ypls.h"
#include "a_2_lsqd.h"
#include "a_3_ypxstj.h"
#include "a_4_tkcl.h"
#include "b_1_qssq.h"
#include "b_2_qscx.h"
#include "c_1_xgybkmm.h"

namespace Ui {
class ybtMain;
}

class ybtMain : public QMainWindow
{
    Q_OBJECT

public:
    explicit ybtMain(QWidget *parent = nullptr);
    ~ybtMain();

private slots:

    void on_action_triggered();

    void on_action_2_triggered();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_action_3_triggered();

    void on_action_4_triggered();

    void on_action_7_triggered();

    void on_action_8_triggered();

    void on_pushButton_3_clicked();

    void on_action_5_triggered();

    void on_action_9_triggered();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::ybtMain *ui;
};

#endif // YBTMAIN_H
