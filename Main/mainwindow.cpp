#include <QDesktopServices>
#include <QUrl>

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
    w=new WholeTab(this);
    m=new ModelTab(this);
    ui->connectstdWidget->addWidget(w);
    ui->connectstdWidget->addWidget(m);
    //초기 세팅
    ui->btnWhole->click();
    //임시 초기세팅
    ui->connectstdWidget->setCurrentWidget(w);

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
    connect(ui->BtnCar12,SIGNAL(clicked()),m,SLOT(setCarType12()));

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
    this->setFixedSize(811,1000);
    this->setGeometry(500,50,810,1000);
}


void MainWindow::btnStackBrandClicked()
{
    ui->menustack->setCurrentIndex(0);
    ui->brandstack->setCurrentIndex(0);

    ui->btnStackBrand->setStyleSheet("QPushButton {color:blue;border: 1px solid;border-color: blue;}");
    ui->btnStackCar->setStyleSheet("QPushButton {color: rgb(11, 11, 11);\nborder: 1px solid;border-color: rgb(143, 143, 143);}") ;
}


void MainWindow::btnStackCarClicked()
{
    ui->connectstdWidget->setCurrentWidget(m);
    ui->menustack->setCurrentIndex(1);
    ui->carstack->setCurrentIndex(0);

    ui->btnStackCar->setStyleSheet("QPushButton {color:blue;border: 1px solid;border-color: blue;}");
    ui->btnStackBrand->setStyleSheet("QPushButton {color: rgb(11, 11, 11);\nborder: 1px solid;border-color: rgb(143, 143, 143);}");
}


void MainWindow::ChangeBStackPage()
{
    ui->brandstack->setCurrentIndex((ui->brandstack->currentIndex()+1)%2);
}

void MainWindow::ChangeCStackPage()
{
    ui->carstack->setCurrentIndex((ui->carstack->currentIndex()+1)%2);
}



void MainWindow::on_pushButton_clicked()
{
    QDesktopServices::openUrl(QUrl("https://direct.samsungfire.com/ria/pc/product/car/?state=Front"));
}


void MainWindow::on_btnModel_clicked()
{
    ui->connectstdWidget->setCurrentWidget(m);
    ui->btnModel->setStyleSheet("QPushButton {color:blue;border: 1px solid;border-color: blue;}");
    ui->btnBrand->setStyleSheet("QPushButton {color: rgb(11, 11, 11);\nborder: 1px solid;border-color: rgb(143, 143, 143);}");
    ui->btnWhole->setStyleSheet("QPushButton {color: rgb(11, 11, 11);\nborder: 1px solid;border-color: rgb(143, 143, 143);}");
}


void MainWindow::on_btnWhole_clicked()
{
    ui->connectstdWidget->setCurrentWidget(w);
    ui->btnWhole->setStyleSheet("QPushButton {color:blue;border: 1px solid;border-color: blue;}");
    ui->btnBrand->setStyleSheet("QPushButton {color: rgb(11, 11, 11);\nborder: 1px solid;border-color: rgb(143, 143, 143);}");
    ui->btnModel->setStyleSheet("QPushButton {color: rgb(11, 11, 11);\nborder: 1px solid;border-color: rgb(143, 143, 143);}");
}


void MainWindow::on_btnBrand_clicked()
{
    ui->btnBrand->setStyleSheet("QPushButton {color:blue;border: 1px solid;border-color: blue;}");
    ui->btnModel->setStyleSheet("QPushButton {color: rgb(11, 11, 11);\nborder: 1px solid;border-color: rgb(143, 143, 143);}");
    ui->btnWhole->setStyleSheet("QPushButton {color: rgb(11, 11, 11);\nborder: 1px solid;border-color: rgb(143, 143, 143);}");
}


