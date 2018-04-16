#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QScroller>
#include <QDebug>
#include <QString>

extern QString butt_style;

extern QString butt_style_horizontal;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{


    ui->setupUi(this);


    // -----------Möjliggör swipe-funktionalitet-----------


    //FUNKAR INTE.

    //ui->scrollArea->grabGesture(Qt::GestureType::SwipeGesture);
    //ui->scrollArea_2->grabGesture(Qt::GestureType::SwipeGesture);

    QScroller::ScrollerGestureType qs = QScroller::LeftMouseButtonGesture;

    QScroller::grabGesture(ui->scrollArea, qs);
    QScroller::grabGesture(ui->scrollArea_2, qs);

    // ----------------------------------------------------





    //QString styleHeight = "height: 110px";

    //ui->pushButton_v1->setStyleSheet(styleHeight);


    ui->pushButton_v1->setStyleSheet(butt_style);
    ui->pushButton_v2->setStyleSheet(butt_style);
    ui->pushButton_v3->setStyleSheet(butt_style);
    ui->pushButton_v4->setStyleSheet(butt_style);
    ui->pushButton_v5->setStyleSheet(butt_style);
    ui->pushButton_v6->setStyleSheet(butt_style);
    ui->pushButton_v7->setStyleSheet(butt_style);
    ui->pushButton_v8->setStyleSheet(butt_style);
    ui->pushButton_v9->setStyleSheet(butt_style);
    ui->pushButton_v10->setStyleSheet(butt_style);
    ui->pushButton_v11->setStyleSheet(butt_style);
    ui->pushButton_v12->setStyleSheet(butt_style);


    ui->pushButton_h1->setStyleSheet(butt_style_horizontal);
    ui->pushButton_h2->setStyleSheet(butt_style_horizontal);
    ui->pushButton_h3->setStyleSheet(butt_style_horizontal);
    ui->pushButton_h4->setStyleSheet(butt_style_horizontal);
    ui->pushButton_h5->setStyleSheet(butt_style_horizontal);
    ui->pushButton_h6->setStyleSheet(butt_style_horizontal);
    ui->pushButton_h7->setStyleSheet(butt_style_horizontal);
    ui->pushButton_h8->setStyleSheet(butt_style_horizontal);
    ui->pushButton_h9->setStyleSheet(butt_style_horizontal);
    ui->pushButton_h10->setStyleSheet(butt_style_horizontal);




}

MainWindow::~MainWindow()
{
    delete ui;
}
