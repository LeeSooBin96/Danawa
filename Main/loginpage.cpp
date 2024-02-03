#include <QMessageBox>

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

//로그인 진행
void LoginPage::ProgressLogin()
{
    QString tmpID, tmpPW;
    tmpID=ui->Llogin->text();
    tmpPW=ui->Lpw->text();

    // db=QSqlDatabase::addDatabase("QSQLITE");
    // db.setDatabaseName("DB_Car.db");
    // if(!db.open())
    // {
    //     qDebug()<<db.lastError()<<"데이터베이스 파일 오픈 실패!";
    // }
    // else
    // {
    //     qDebug("데이터베이스 파일 오픈");
    // }
    //디비연결은 파일중 하나에서만 하면됨

    QSqlQuery qry;
    qry.prepare("SELECT UPW FROM USER_TB WHERE UID='"+tmpID+"';");
    qry.exec();
    if(qry.next()&&qry.value(0).toString()==tmpPW)//아이디가 일치하는 계정 존재 //아 이거 왜 자꾸 잊지 ㅋㅋㅋ큐ㅠㅠ
    {
        qDebug()<<"로그인 시켜줌";
        ui->pushButton_6->click(); //임시 ->판매실적화면으로 넘기기
        //로그인정보 저장해야..겠지? 아직은 필요 없다
    }
    else
    {
        //존재하지 않는 아이디
        qDebug()<<"계정 없음";
        QMessageBox::critical(this,"경고 메시지","존재하지 않는 아이디이거나 틀린 비밀번호입니다.",QMessageBox::Ok);
    }
}
//아이디 찾기
void LoginPage::SearchID()
{
    QSqlQuery qry;
    qry.prepare("SELECT UID FROM USER_TB WHERE UNAME='"+ui->SIname->text()+"' AND UPHONE='"+ui->SIphone->text()+"'");
    qry.exec();
    qDebug()<<qry.lastQuery();
    if(qry.next())
    {
        qDebug()<<qry.value(0).toString();
        ui->SIDstackedWidget->setCurrentIndex(1);
        ui->lblShowID->setText(qry.value(0).toString());
    }
    else
    {
        qDebug()<<"없음";
        ui->SIDstackedWidget->setCurrentIndex(2);
    }
}
