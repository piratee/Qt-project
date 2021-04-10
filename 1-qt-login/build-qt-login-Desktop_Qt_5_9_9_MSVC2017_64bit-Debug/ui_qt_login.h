/********************************************************************************
** Form generated from reading UI file 'qt_login.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QT_LOGIN_H
#define UI_QT_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_qt_login
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_name;
    QLineEdit *line_account;
    QHBoxLayout *horizontalLayout;
    QLabel *label_password;
    QLineEdit *line_passwd;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *btn_login;
    QPushButton *btn_cancle;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *qt_login)
    {
        if (qt_login->objectName().isEmpty())
            qt_login->setObjectName(QStringLiteral("qt_login"));
        qt_login->resize(618, 331);
        centralwidget = new QWidget(qt_login);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(230, 110, 191, 83));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_name = new QLabel(widget);
        label_name->setObjectName(QStringLiteral("label_name"));

        horizontalLayout_2->addWidget(label_name);

        line_account = new QLineEdit(widget);
        line_account->setObjectName(QStringLiteral("line_account"));

        horizontalLayout_2->addWidget(line_account);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_password = new QLabel(widget);
        label_password->setObjectName(QStringLiteral("label_password"));

        horizontalLayout->addWidget(label_password);

        line_passwd = new QLineEdit(widget);
        line_passwd->setObjectName(QStringLiteral("line_passwd"));
        line_passwd->setEchoMode(QLineEdit::Normal);

        horizontalLayout->addWidget(line_passwd);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        btn_login = new QPushButton(widget);
        btn_login->setObjectName(QStringLiteral("btn_login"));

        horizontalLayout_3->addWidget(btn_login, 0, Qt::AlignHCenter);

        btn_cancle = new QPushButton(widget);
        btn_cancle->setObjectName(QStringLiteral("btn_cancle"));

        horizontalLayout_3->addWidget(btn_cancle, 0, Qt::AlignHCenter);


        verticalLayout->addLayout(horizontalLayout_3);

        qt_login->setCentralWidget(centralwidget);
        menubar = new QMenuBar(qt_login);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 618, 22));
        qt_login->setMenuBar(menubar);
        statusbar = new QStatusBar(qt_login);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        qt_login->setStatusBar(statusbar);
        QWidget::setTabOrder(btn_login, btn_cancle);

        retranslateUi(qt_login);

        QMetaObject::connectSlotsByName(qt_login);
    } // setupUi

    void retranslateUi(QMainWindow *qt_login)
    {
        qt_login->setWindowTitle(QApplication::translate("qt_login", "qt_login", Q_NULLPTR));
        label_name->setText(QApplication::translate("qt_login", "account", Q_NULLPTR));
        label_password->setText(QApplication::translate("qt_login", "password", Q_NULLPTR));
        btn_login->setText(QApplication::translate("qt_login", "Login", Q_NULLPTR));
        btn_cancle->setText(QApplication::translate("qt_login", "Cancle", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class qt_login: public Ui_qt_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QT_LOGIN_H
