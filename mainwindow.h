#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:


    void on_pushButton_v1_clicked();

    void on_pushButton_v2_clicked();

    void on_pushButton_v3_clicked();

    void on_pushButton_v4_clicked();

    void on_pushButton_v5_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
