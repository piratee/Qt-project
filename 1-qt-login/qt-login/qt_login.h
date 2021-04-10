#ifndef QT_LOGIN_H
#define QT_LOGIN_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class qt_login; }
QT_END_NAMESPACE

class qt_login : public QMainWindow
{
    Q_OBJECT

public:
    qt_login(QWidget *parent = nullptr);
    ~qt_login();

private slots:
    void on_btn_cancle_clicked();

    void on_btn_login_clicked();

private:
    Ui::qt_login *ui;
};
#endif // QT_LOGIN_H
