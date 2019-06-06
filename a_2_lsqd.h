#ifndef A_2_LSQD_H
#define A_2_LSQD_H

#include <QDialog>

namespace Ui {
class a_2_lsqd;
}

class a_2_lsqd : public QDialog
{
    Q_OBJECT

public:
    explicit a_2_lsqd(QWidget *parent = nullptr);
    ~a_2_lsqd();

private slots:
    void on_pushButton_clicked();

private:
    Ui::a_2_lsqd *ui;
};

#endif // A_2_LSQD_H
