#ifndef A_3_YPXSTJ_H
#define A_3_YPXSTJ_H

#include <QDialog>

namespace Ui {
class a_3_ypxstj;
}

class a_3_ypxstj : public QDialog
{
    Q_OBJECT

public:
    explicit a_3_ypxstj(QWidget *parent = nullptr);
    ~a_3_ypxstj();

private slots:
    void on_pushButton_clicked();

private:
    Ui::a_3_ypxstj *ui;
};

#endif // A_3_YPXSTJ_H
