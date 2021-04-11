#ifndef FORM2_H
#define FORM2_H

#include <QWidget>

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

signals:
    void SingalShowForm1(QString);

private:
    Ui::Form2 *ui;
    int count;
    void Init();
};

#endif // FORM2_H
