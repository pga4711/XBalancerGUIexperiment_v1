#ifndef TESTDIALOG3_H
#define TESTDIALOG3_H

#include <QWidget>

namespace Ui {
class TestDialog3;
}

class TestDialog3 : public QWidget
{
    Q_OBJECT

public:
    explicit TestDialog3(QWidget *parent = 0);
    ~TestDialog3();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::TestDialog3 *ui;
};

#endif // TESTDIALOG3_H
