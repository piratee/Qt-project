/********************************************************************************
** Form generated from reading UI file 'form2.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM2_H
#define UI_FORM2_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form2
{
public:
    QPushButton *btn_back;
    QPushButton *btn_next;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QWidget *Form2)
    {
        if (Form2->objectName().isEmpty())
            Form2->setObjectName(QStringLiteral("Form2"));
        Form2->resize(576, 356);
        btn_back = new QPushButton(Form2);
        btn_back->setObjectName(QStringLiteral("btn_back"));
        btn_back->setGeometry(QRect(90, 270, 91, 31));
        btn_next = new QPushButton(Form2);
        btn_next->setObjectName(QStringLiteral("btn_next"));
        btn_next->setGeometry(QRect(350, 270, 81, 31));
        label = new QLabel(Form2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(200, 40, 61, 16));
        label_2 = new QLabel(Form2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(130, 70, 331, 161));

        retranslateUi(Form2);

        QMetaObject::connectSlotsByName(Form2);
    } // setupUi

    void retranslateUi(QWidget *Form2)
    {
        Form2->setWindowTitle(QApplication::translate("Form2", "Form", Q_NULLPTR));
        btn_back->setText(QApplication::translate("Form2", "BackToFirst", Q_NULLPTR));
        btn_next->setText(QApplication::translate("Form2", "ToNext", Q_NULLPTR));
        label->setText(QApplication::translate("Form2", "Form2", Q_NULLPTR));
        label_2->setText(QApplication::translate("Form2", "TextLabel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Form2: public Ui_Form2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM2_H
