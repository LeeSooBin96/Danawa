#ifndef LOGINPAGE_H
#define LOGINPAGE_H

#include <QWidget>
#include <QString>

QT_BEGIN_NAMESPACE
namespace Ui {
class LoginPage;
}
QT_END_NAMESPACE

class LoginPage : public QWidget
{
    Q_OBJECT

public:
    LoginPage(QWidget *parent = nullptr);
    ~LoginPage();

private slots:
    //홈화면으로
    void gotoHome();
    //로그인화면으로
    void gotoLogin();
    //회원가입화면으로
    void gotoJoin();
    //아이디찾기화면으로
    void gotoSID();
    //비밀번호찾기화면으로
    void gotoSPW();

\

private:
    Ui::LoginPage *ui;
};
#endif // LOGINPAGE_H
