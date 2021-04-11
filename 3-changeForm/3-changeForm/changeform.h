#ifndef CHANGEFORM_H
#define CHANGEFORM_H

#include <QWidget>
#include "form2.h"

QT_BEGIN_NAMESPACE
namespace Ui { class changeForm; }
QT_END_NAMESPACE

class changeForm : public QWidget
{
    Q_OBJECT

public:
    changeForm(QWidget *parent = nullptr);
    ~changeForm();

private slots:
    void processNextBtnClick(bool);
    void RecvShowSingal(QString);

private:
    Ui::changeForm *ui;
    //方式1：创建界面-->全局变量
//    Form2 form2;
    //方式2：创建界面-->全局指针
    Form2 *p_gform2;
    void Init();
};
#endif // CHANGEFORM_H
