#include "testdialog3.h"
#include "ui_testdialog3.h"


TestDialog3::TestDialog3(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TestDialog3)
{
    ui->setupUi(this);
}

TestDialog3::~TestDialog3()
{
    delete ui;
}

void TestDialog3::on_pushButton_2_clicked()
{
    ui->lineEdit->setText("Pressed another pushbutton");
    ui->lineEdit->setStyleSheet("color: red");
}

void TestDialog3::on_pushButton_clicked()
{
    ui->lineEdit->setText("Pressed pushbutton#");
    ui->lineEdit->setStyleSheet("color: purple");

}
