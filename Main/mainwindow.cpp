#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //로그인 ui 연결
    l=new LoginPage(this);
    ui->mainstack->addWidget(l);
    ui->mainstack->setCurrentWidget(l);
    this->setFixedSize(810,650);
    this->setWindowTitle("Danawa Car");
    this->setWindowIcon(QIcon(":/resources/danawaImg.png"));
    //각 페이지 ui연결
    m=new ModelTab(this);
    ui->connectstdWidget->addWidget(m);
    //임시
    ui->connectstdWidget->setCurrentWidget(m);

    //브랜드 버튼 연결
    // connect(ui->BtnBrand1,SIGNAL(clicked()),,SLOT());
    // connect(ui->BtnBrand2,SIGNAL(clicked()),,SLOT());
    // connect(ui->BtnBrand3,SIGNAL(clicked()),,SLOT());
    // connect(ui->BtnBrand4,SIGNAL(clicked()),,SLOT());
    // connect(ui->BtnBrand5,SIGNAL(clicked()),,SLOT());
    // connect(ui->BtnBrand6,SIGNAL(clicked()),,SLOT());
    // connect(ui->BtnBrand7,SIGNAL(clicked()),,SLOT());
    // connect(ui->BtnBrand8,SIGNAL(clicked()),,SLOT());
    // connect(ui->BtnBrand9,SIGNAL(clicked()),,SLOT());
    // connect(ui->BtnBrand10,SIGNAL(clicked()),,SLOT());
    // connect(ui->BtnBrand11,SIGNAL(clicked()),,SLOT());

    //모델탭 버튼 연결
    connect(ui->btnModel,SIGNAL(clicked()),m,SLOT(delCarType()));
    connect(ui->btnModel,SIGNAL(clicked()),m,SLOT(ShowDefault()));

    //차종 버튼 연결 -- 함수원형을 써야해서 값전달이 안됨...
    connect(ui->BtnCar1,SIGNAL(clicked()),m,SLOT(setCarType1()));
    connect(ui->BtnCar2,SIGNAL(clicked()),m,SLOT(setCarType2()));
    connect(ui->BtnCar3,SIGNAL(clicked()),m,SLOT(setCarType3()));
    connect(ui->BtnCar4,SIGNAL(clicked()),m,SLOT(setCarType4()));
    connect(ui->BtnCar5,SIGNAL(clicked()),m,SLOT(setCarType5()));
    connect(ui->BtnCar6,SIGNAL(clicked()),m,SLOT(setCarType6()));
    connect(ui->BtnCar7,SIGNAL(clicked()),m,SLOT(setCarType7()));
    connect(ui->BtnCar8,SIGNAL(clicked()),m,SLOT(setCarType8()));
    connect(ui->BtnCar9,SIGNAL(clicked()),m,SLOT(setCarType9()));
    connect(ui->BtnCar10,SIGNAL(clicked()),m,SLOT(setCarType10()));
    connect(ui->BtnCar11,SIGNAL(clicked()),m,SLOT(setCarType11()));

}

MainWindow::~MainWindow()
{
    delete ui;
}
//로그인화면->판매실적화면
void MainWindow::ShowSales(void)
{
    ui->mainstack->setCurrentIndex(0);
    btnStackBrandClicked();
    this->setFixedSize(810,1000);
    this->setGeometry(500,50,810,1000);
}


void MainWindow::btnStackBrandClicked()
{
    ui->menustack->setCurrentIndex(0);
    ui->brandstack->setCurrentIndex(0);
}


void MainWindow::btnStackCarClicked()
{
    ui->menustack->setCurrentIndex(1);
    ui->carstack->setCurrentIndex(0);
}


void MainWindow::ChangeBStackPage()
{
    ui->brandstack->setCurrentIndex((ui->brandstack->currentIndex()+1)%2);
}

void MainWindow::ChangeCStackPage()
{
    ui->carstack->setCurrentIndex((ui->carstack->currentIndex()+1)%2);
}


