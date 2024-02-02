#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    l=new LoginPage(this);
    ui->mainstack->addWidget(l);
    ui->mainstack->setCurrentWidget(l);
    this->setFixedSize(810,650);
    this->setWindowTitle("Danawa Car");
    this->setWindowIcon(QIcon(":/resources/danawaImg.png"));

    m=new ModelTab(this);
    ui->connectstdWidget->addWidget(m);
    ui->connectstdWidget->setCurrentWidget(m);

    connect(ui->btnModel,SIGNAL(clicked()),m,SLOT(ShowDefault()));
}

MainWindow::~MainWindow()
{
    delete ui;
}
//로그인화면->판매실적화면
void MainWindow::ShowSales(void)
{
    ui->mainstack->setCurrentIndex(0);
    this->setFixedSize(810,1000);
    this->setGeometry(500,50,810,1000);
}

