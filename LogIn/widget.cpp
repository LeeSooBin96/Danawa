#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    QPixmap danawaLogo (":Resources/danawaImg.jpg");

    ui->label->setPixmap(danawaLogo.scaled(780,450,Qt::IgnoreAspectRatio));
    ui->label_4->setPixmap(danawaLogo.scaled(230,280,Qt::IgnoreAspectRatio));
    ui->label_20->setPixmap(danawaLogo.scaled(380,400,Qt::IgnoreAspectRatio));
    ui->label_24->setPixmap(danawaLogo.scaled(380,400,Qt::IgnoreAspectRatio));
    ui->label_27->setPixmap(danawaLogo.scaled(380,400,Qt::IgnoreAspectRatio));

}

Widget::~Widget()
{
    delete ui;
}

