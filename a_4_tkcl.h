#ifndef A_4_TKCL_H
#define A_4_TKCL_H

#include <QDialog>

namespace Ui {
class a_4_tkcl;
}

class a_4_tkcl : public QDialog
{
    Q_OBJECT

public:
    explicit a_4_tkcl(QWidget *parent = nullptr);
    ~a_4_tkcl();

private slots:
    void on_pushButton_clicked();

private:
    Ui::a_4_tkcl *ui;
};

#endif // A_4_TKCL_H
