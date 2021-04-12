#include "form2.h"
#include "ui_form2.h"
#include <QMovie>
#include <QDebug>

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
    p_gform3 = new Form3();
    count = 0;
    connect(ui->btn_back,SIGNAL(clicked(bool)),
            this, SLOT(processBack(bool)));
    connect(ui->btn_next, SIGNAL(clicked(bool)),
            this, SLOT(processNext(bool)));
    connect(p_gform3,SIGNAL(signalBackToForm2(QString)),
            this, SLOT(processShowForm2(QString)));
}

void Form2::processBack(bool){
    count++;
    //发送信号给form1，让它显示
    SingalShowForm1(QString::number(count));
    this->hide();
}

void Form2::processNext(bool){
    p_gform3->show();
    this->hide();
}

void Form2::processShowForm2(QString str){
    qDebug() << "back to form2 " << str << endl;
    this->show();
}

