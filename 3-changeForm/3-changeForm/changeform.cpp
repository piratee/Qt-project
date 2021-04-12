#include "changeform.h"
#include "ui_changeform.h"
#include <QMovie>
#include <QDebug>

changeForm::changeForm(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::changeForm)
{
    ui->setupUi(this);
    Init();
}

changeForm::~changeForm()
{
    delete ui;
}

///////////////////////functions////////////////////////
void changeForm::Init(){

    QMovie *myMovie = new QMovie("E:/shared_room/git-reposity/Qt-reposity/Qt-project/3-changeForm/3-changeForm/1.jpg");
    myMovie->start();
    ui->label_2->setMovie(myMovie);
    ui->label_2->setScaledContents(true);

    //方式3：创建界面-->全局指针
    p_gform2 = new Form2();
    //binding slots
    connect(ui->btn_next, SIGNAL(clicked(bool)),
            this, SLOT(processNextBtnClick(bool)));

    connect(p_gform2, SIGNAL(SingalShowForm1(QString)),
            this,SLOT(RecvShowSingal(QString)));
}
////////////////////////////////////////////////////////

//////////////////////slots/////////////////////////////
void changeForm::processNextBtnClick(bool){
    //创建界面3种方式
    //方式1：全局变量， 只出现1个界面
//    form2.show();
    //方式2： 每次创建一个界面，会出现多个界面
//    Form2 *p_form2 = new Form2(this);       //在界面1里显示界面2
//    Form2 *p_form2 = new Form2();           //单独显示显示界面2，每次都会重新创建
//    p_form2->show();
    //方式3： 全局指针
    p_gform2->show();

    this->hide();
}

void changeForm::RecvShowSingal(QString str){
    qDebug() << "back to form1 " << str ;
    this->show();
}
////////////////////////////////////////////////////////

