#ifndef A_1_YPLS_H
#define A_1_YPLS_H

#include <QDialog>

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

private:
    Ui::a_1_ypls *ui;
};

#endif // A_1_YPLS_H
