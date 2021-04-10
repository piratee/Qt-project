#include "qt_login.h"
#include "ui_qt_login.h"
#include <QDebug>
#include <QDate>

qt_login::qt_login(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::qt_login)
{
    ui->setupUi(this);
 //   ui->line_passwd->setEchoMode(QLineEdit::Password);
    qDebug() << "Date0:" << QDate::currentDate();
}

qt_login::~qt_login()
{
    delete ui;
}

//取消按钮
void qt_login::on_btn_cancle_clicked()
{
    this->close();
}

//登录按钮
void qt_login::on_btn_login_clicked()
{
     QString account_content = ui->line_account->text();
     QString psswd_ontent = ui->line_passwd->text();

     qDebug() << "account_content:" << account_content << "; psswd_ontent:" << psswd_ontent;

     if(account_content == psswd_ontent)
     {
         qDebug() << "Login success!!!";
     }
     else
     {
         qDebug() << "Login faild!!!";
     }
}
