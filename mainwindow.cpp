#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QScroller>
#include <QDebug>
#include <QString>
#include <testdialog3.h>

extern QString buttonStyle;

extern QString buttonStyleHorizontal;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // -----------Möjliggör swipe-funktionalitet-----------

    //FUNKAR INTE.
    //ui->scrollArea->grabGesture(Qt::GestureType::SwipeGesture);
    //ui->scrollArea_2->grabGesture(Qt::GestureType::SwipeGesture);


    //FUNKAR. ALLTSÅ SÅ HÄR KAN MAN GÖRA.
    QScroller::ScrollerGestureType qs = QScroller::TouchGesture;
    QScroller::grabGesture(ui->scrollArea, qs);
    QScroller::grabGesture(ui->scrollArea_2, qs);

    // ----------------------------------------------------


    //QString styleHeight = "height: 110px";

    //ui->pushButton_v1->setStyleSheet(styleHeight);


    ui->pushButton_v1->setStyleSheet(buttonStyle);
    ui->pushButton_v2->setStyleSheet(buttonStyle);
    ui->pushButton_v3->setStyleSheet(buttonStyle);
    ui->pushButton_v4->setStyleSheet(buttonStyle);
    ui->pushButton_v5->setStyleSheet(buttonStyle);
    ui->pushButton_v6->setStyleSheet(buttonStyle);
    ui->pushButton_v7->setStyleSheet(buttonStyle);
    ui->pushButton_v8->setStyleSheet(buttonStyle);
    ui->pushButton_v9->setStyleSheet(buttonStyle);
    ui->pushButton_v10->setStyleSheet(buttonStyle);
    ui->pushButton_v11->setStyleSheet(buttonStyle);
    ui->pushButton_v12->setStyleSheet(buttonStyle);


    qDebug()<<"before style set. ui->pushButton_h1->styleSheet(); "<<ui->pushButton_h1->styleSheet();
    ui->pushButton_h1->setStyleSheet(buttonStyleHorizontal);
    ui->pushButton_h2->setStyleSheet(buttonStyleHorizontal);
    ui->pushButton_h3->setStyleSheet(buttonStyleHorizontal);
    ui->pushButton_h4->setStyleSheet(buttonStyleHorizontal);
    ui->pushButton_h5->setStyleSheet(buttonStyleHorizontal);
    ui->pushButton_h6->setStyleSheet(buttonStyleHorizontal);
    ui->pushButton_h7->setStyleSheet(buttonStyleHorizontal);
    ui->pushButton_h8->setStyleSheet(buttonStyleHorizontal);
    ui->pushButton_h9->setStyleSheet(buttonStyleHorizontal);
    ui->pushButton_h10->setStyleSheet(buttonStyleHorizontal);
    qDebug()<<"after style set. ui->pushButton_h1->styleSheet(); "<<ui->pushButton_h1->styleSheet();


    //  place image in the ui
    QLabel *imageLabel = new QLabel;
    QImage image("://images/XbalancerOnlycirclesBIG.jpg");
    qDebug()<<"Size: "<<image.size();
    imageLabel->setPixmap(QPixmap::fromImage(image));
    ui->scrollArea_3->setBackgroundRole(QPalette::Dark);
    ui->scrollArea_3->setWidget(imageLabel);

    //Make image more touch-able
    QScroller::grabGesture(ui->scrollArea_3, qs);
    ui->scrollArea_3->grabGesture(Qt::GestureType::PinchGesture);

    qDebug()<<"This is classname: "<<ui->centralWidget->metaObject()->className();


    qDebug()<<"Pushcbutton_v1 size    : "<<ui->pushButton_v1->size();
    qDebug()<<"Pushcbutton_v1sizeHint : "<<ui->pushButton_v1->sizeHint();
    qDebug()<<"ui->scrollAreaWidgetContents->size()   : "<<ui->scrollAreaWidgetContents->size();
    qDebug()<<"ui->scrollAreaWidgetContents->sizeHint : "<<ui->scrollAreaWidgetContents->sizeHint();
    qDebug()<<"ui->scrollArea->size()   : "<<ui->scrollArea->size();
    qDebug()<<"ui->scrollArea->sizeHint : "<<ui->scrollArea->sizeHint();


    TestDialog3 *td3 = new TestDialog3;
    ui->stackedWidget->insertWidget(4, td3);



}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_v1_clicked()
{
    qDebug()<<"This button should swap from window X to window Y";

    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_pushButton_v2_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_pushButton_v3_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_pushButton_v4_clicked()
{
     ui->stackedWidget->setCurrentIndex(3);
}

void MainWindow::on_pushButton_v5_clicked()
{

    ui->stackedWidget->setCurrentIndex(4);
}
