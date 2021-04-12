#include "form3.h"
#include "ui_form3.h"
#include <QMovie>

Form3::Form3(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form3)
{
    ui->setupUi(this);
    Init();
}

Form3::~Form3()
{
    delete ui;
}

void Form3::Init(){

    QMovie *myMovie = new QMovie("E:/shared_room/git-reposity/Qt-reposity/Qt-project/3-changeForm/3-changeForm/3.jpg");
    myMovie->start();
    ui->label_2->setMovie(myMovie);
    ui->label_2->setScaledContents(true);

    backToForm2Count = 0;
    connect(ui->btn_fin,SIGNAL(clicked(bool)),
            this,SLOT(processFinish(bool)));
    connect(ui->btn_toForm2,SIGNAL(clicked(bool)),
            this,SLOT(processBackToForm2(bool)));
}

void Form3::processFinish(bool){
    this->close();
}

void Form3::processBackToForm2(bool){
    backToForm2Count++;
    signalBackToForm2(QString::number(backToForm2Count));
    this->hide();
}
