#include "form2.h"
#include "ui_form2.h"
#include <QMovie>

Form2::Form2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form2)
{
    ui->setupUi(this);
    Init();
}

Form2::~Form2()
{
    delete ui;
}

void Form2::Init(){
    QMovie *myMovie = new QMovie("E:/shared_room/git-reposity/Qt-reposity/Qt-project/3-changeForm/3-changeForm/2.jpg");
    myMovie->start();
    ui->label_2->setMovie(myMovie);
    ui->label_2->setScaledContents(true);
    count = 0;
    connect(ui->btn_back,SIGNAL(clicked(bool)),
            this, SLOT(processBack(bool)));
}

void Form2::processBack(bool){
    count++;
    //发送信号给form1，让它显示
    SingalShowForm1(QString::number(count));
    this->hide();
}
