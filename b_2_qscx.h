#ifndef B_2_QSCX_H
#define B_2_QSCX_H

#include <QDialog>

namespace Ui {
class b_2_qscx;
}

class b_2_qscx : public QDialog
{
    Q_OBJECT

public:
    explicit b_2_qscx(QWidget *parent = nullptr);
    ~b_2_qscx();

private slots:
    void on_pushButton_clicked();

private:
    Ui::b_2_qscx *ui;
};

#endif // B_2_QSCX_H
