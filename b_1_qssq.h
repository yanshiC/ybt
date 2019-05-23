#ifndef B_1_QSSQ_H
#define B_1_QSSQ_H

#include <QDialog>

namespace Ui {
class b_1_qssq;
}

class b_1_qssq : public QDialog
{
    Q_OBJECT

public:
    explicit b_1_qssq(QWidget *parent = nullptr);
    ~b_1_qssq();

private slots:
    void on_pushButton_clicked();

private:
    Ui::b_1_qssq *ui;
};

#endif // B_1_QSSQ_H
