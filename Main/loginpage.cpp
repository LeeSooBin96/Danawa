#include "loginpage.h"
#include "ui_loginpage.h"

LoginPage::LoginPage(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::LoginPage)
{
    ui->setupUi(this);
    QPixmap danawaLogo (":resources/danawaImg.jpg");

    ui->label->setPixmap(danawaLogo.scaled(780,450,Qt::IgnoreAspectRatio));
    ui->label_4->setPixmap(danawaLogo.scaled(230,280,Qt::IgnoreAspectRatio));
    ui->label_20->setPixmap(danawaLogo.scaled(380,400,Qt::IgnoreAspectRatio));
    ui->label_24->setPixmap(danawaLogo.scaled(380,400,Qt::IgnoreAspectRatio));
    ui->label_27->setPixmap(danawaLogo.scaled(380,400,Qt::IgnoreAspectRatio));

    ui->stackedWidget->setCurrentIndex(0);
    //판매실적화면으로 이동
    connect(ui->pushButton_6,SIGNAL(clicked()),this->parent(),SLOT(ShowSales()));
}

LoginPage::~LoginPage()
{
    delete ui;
}
//홈화면으로
void LoginPage::gotoHome()
{
    ui->stackedWidget->setCurrentIndex(0);
}
//로그인화면으로
void LoginPage::gotoLogin()
{
    ui->stackedWidget->setCurrentIndex(1);
}

//회원가입화면으로
void LoginPage::gotoJoin()
{
    ui->stackedWidget->setCurrentIndex(2);
}

//아이디찾기화면으로
void LoginPage::gotoSID()
{
    ui->stackedWidget->setCurrentIndex(3);
    ui->SIDstackedWidget->setCurrentIndex(0);
}

//비밀번호찾기화면으로
void LoginPage::gotoSPW()
{
    ui->stackedWidget->setCurrentIndex(4);
    ui->SPWstackedWidget->setCurrentIndex(0);
}

