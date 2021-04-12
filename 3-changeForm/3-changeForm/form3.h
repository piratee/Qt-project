#ifndef FORM3_H
#define FORM3_H

#include <QWidget>

namespace Ui {
class Form3;
}

class Form3 : public QWidget
{
    Q_OBJECT

public:
    explicit Form3(QWidget *parent = nullptr);
    ~Form3();

private slots:
    void processBackToForm2(bool);
    void processFinish(bool);

signals:
    void signalBackToForm2(QString);

private:
    Ui::Form3 *ui;
    int backToForm2Count;
    void Init();
};

#endif // FORM3_H
