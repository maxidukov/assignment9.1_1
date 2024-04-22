#include "mainwindow.h"

#include <QApplication>
#include <QMessageBox>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //MainWindow w;
    //w.show();

    QMessageBox msg;
    int x = 55;
    msg.setText("Hello, world!");
    msg.setIcon(QMessageBox::Warning);
    msg.setStyleSheet("color: red");
    msg.setWindowTitle("Regarde-moi");
    msg.show();

    return a.exec();
}
