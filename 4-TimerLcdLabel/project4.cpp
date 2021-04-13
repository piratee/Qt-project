#include "project4.h"
#include "ui_project4.h"
#include <QDebug>

Project4::Project4(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Project4)
{
    ui->setupUi(this);
    Init();
}

Project4::~Project4()
{
    delete ui;
}

void Project4::Init(){
    count = 5;
    index = 0;
    //开启timer
    myTimer = new QTimer(this);
    connect(myTimer, SIGNAL(timeout()),
            this, SLOT(processTimeout()));
    myTimer->start(1000);
    //播放动画
//    myMovie = new QMovie(this);
//    myMovie->setFileName("E:/shared_room/git-reposity/Qt-reposity/Qt-project/4-TimerLcdLabel/fish.gif");
//    ui->label->setMovie(myMovie);
//    ui->label->setScaledContents(true);
    for(int i = 0; i < 5; i++){
        myMovie1[i] = new QMovie(this);
    }

    ui->lcd_s->display(count);
    ui->label->hide();
}

void Project4::processTimeout(){
    QString str = "E:/shared_room/git-reposity/Qt-reposity/Qt-project/4-TimerLcdLabel/gif/";
    QString str1;
    QString str2 = ".gif";

    count--;
    if(count == 0){
        qDebug() << "count = 0, index = " << index;
        if(index == 0){
            ui->label->show();
            ui->lcd_s->hide();
            qDebug() << "index = 0";
        }
        index++;
        if(index == 6){
            myTimer->stop();
            ui->lcd_s->close();
            ui->label->close();
            this->close();
            return;
        }
        else{
           count = 5;
        }
        str1 = str + QString::number(index) + str2;
        qDebug() << str1 << endl;
        myMovie1[index-1]->setFileName(str1);
        ui->label->setMovie(myMovie1[index-1]);
        ui->label->setScaledContents(true);

        myMovie1[index-2 >= 0? index-2:0]->stop();
        myMovie1[index-1 < 5? index - 1: 4]->start();
    }
    ui->lcd_s->display(count);
}
