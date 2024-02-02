#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);


    MainWindow m;
    // m.setFixedSize(810,1000);
    // m.setWindowTitle("Danawa Car");
    // m.setWindowIcon(QIcon(":/resources/danawaImg.png"));
    m.show();
    return a.exec();
}
