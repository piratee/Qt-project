/********************************************************************************
** Form generated from reading UI file 'changeform.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGEFORM_H
#define UI_CHANGEFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_changeForm
{
public:
    QPushButton *btn_next;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QWidget *changeForm)
    {
        if (changeForm->objectName().isEmpty())
            changeForm->setObjectName(QStringLiteral("changeForm"));
        changeForm->resize(800, 600);
        btn_next = new QPushButton(changeForm);
        btn_next->setObjectName(QStringLiteral("btn_next"));
        btn_next->setGeometry(QRect(230, 260, 141, 51));
        label = new QLabel(changeForm);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(260, 20, 81, 31));
        label_2 = new QLabel(changeForm);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(140, 50, 371, 171));

        retranslateUi(changeForm);

        QMetaObject::connectSlotsByName(changeForm);
    } // setupUi

    void retranslateUi(QWidget *changeForm)
    {
        changeForm->setWindowTitle(QApplication::translate("changeForm", "changeForm", Q_NULLPTR));
        btn_next->setText(QApplication::translate("changeForm", "GotoSecond-form", Q_NULLPTR));
        label->setText(QApplication::translate("changeForm", "Form1", Q_NULLPTR));
        label_2->setText(QApplication::translate("changeForm", "TextLabel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class changeForm: public Ui_changeForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGEFORM_H
