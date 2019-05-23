#ifndef C_1_XGYBKMM_H
#define C_1_XGYBKMM_H

#include <QDialog>

namespace Ui {
class c_1_xgybkmm;
}

class c_1_xgybkmm : public QDialog
{
    Q_OBJECT

public:
    explicit c_1_xgybkmm(QWidget *parent = nullptr);
    ~c_1_xgybkmm();

private slots:
    void on_pushButton_clicked();

private:
    Ui::c_1_xgybkmm *ui;
};

#endif // C_1_XGYBKMM_H
