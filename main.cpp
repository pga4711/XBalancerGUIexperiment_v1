#include "mainwindow.h"
#include <QApplication>
#include <QString>

QString buttonStyle
           = {"QPushButton {"
              "margin: 2px; "
              "border-color: "
              "#0c457e; "
              "border-style: "
              "outset; "
              "border-radius: 20px; "
              "border-width: 4px; "
              "color: white; "
              "height: 5em; "
              "width: 5em;"
              "background-color: qlineargradient("
                                    "x1: 0, "
                                    "y1: 0, "
                                    "x2: 0, "
                                    "y2: 1, "
                                    "stop: 0 #2198c0, "
                                    "stop: 1 #0d5ca6);}"
             "QPushButton:pressed {"
                    "background-color: qlineargradient("
              "x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #0d5ca6, stop: 1 #2198c0);}"};

QString buttonStyleHorizontal
           = {"QPushButton {margin: 2px; border-color: #009900; border-style: outset; border-radius: 20px; border-width: 4px; color: white; height: 4em; width: 4em;"
             "background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #99ff66, stop: 1 #009900);}"
             "QPushButton:pressed {background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #009900, stop: 1 #99ff66);}"};


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
