#ifndef PROJECT4_H
#define PROJECT4_H

#include <QWidget>
#include <QMovie>
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui { class Project4; }
QT_END_NAMESPACE

class Project4 : public QWidget
{
    Q_OBJECT

public:
    Project4(QWidget *parent = nullptr);
    ~Project4();

private slots:
    void processTimeout();

private:
    Ui::Project4 *ui;
    QTimer *myTimer = new QTimer();
    QMovie *myMovie;
    QMovie *myMovie1[5];
    int count;
    int index;
    void Init();
};
#endif // PROJECT4_H
