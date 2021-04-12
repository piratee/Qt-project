#ifndef FORM2_H
#define FORM2_H

#include <QWidget>
#include "form3.h"

namespace Ui {
class Form2;
}

class Form2 : public QWidget
{
    Q_OBJECT

public:
    Form2 *p_form2;
    explicit Form2(QWidget *parent = nullptr);
    ~Form2();

private slots:
    void processBack(bool);
    void processNext(bool);
    void processShowForm2(QString);

signals:
    void SingalShowForm1(QString);

private:
    Ui::Form2 *ui;
    Form3 *p_gform3;
    int count;
    void Init();
};

#endif // FORM2_H
