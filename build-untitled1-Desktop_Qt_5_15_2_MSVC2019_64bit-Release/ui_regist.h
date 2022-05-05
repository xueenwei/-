/********************************************************************************
** Form generated from reading UI file 'regist.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGIST_H
#define UI_REGIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_regist
{
public:
    QPushButton *re_button;
    QPushButton *ex_button;
    QLineEdit *new_ID_input;
    QLineEdit *pass_word;
    QLineEdit *pass_word_sure;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QWidget *regist)
    {
        if (regist->objectName().isEmpty())
            regist->setObjectName(QString::fromUtf8("regist"));
        regist->resize(400, 300);
        re_button = new QPushButton(regist);
        re_button->setObjectName(QString::fromUtf8("re_button"));
        re_button->setGeometry(QRect(80, 250, 75, 24));
        ex_button = new QPushButton(regist);
        ex_button->setObjectName(QString::fromUtf8("ex_button"));
        ex_button->setGeometry(QRect(230, 250, 75, 24));
        new_ID_input = new QLineEdit(regist);
        new_ID_input->setObjectName(QString::fromUtf8("new_ID_input"));
        new_ID_input->setGeometry(QRect(140, 70, 113, 21));
        pass_word = new QLineEdit(regist);
        pass_word->setObjectName(QString::fromUtf8("pass_word"));
        pass_word->setGeometry(QRect(140, 120, 113, 21));
        pass_word->setEchoMode(QLineEdit::Password);
        pass_word_sure = new QLineEdit(regist);
        pass_word_sure->setObjectName(QString::fromUtf8("pass_word_sure"));
        pass_word_sure->setGeometry(QRect(140, 170, 113, 21));
        pass_word_sure->setEchoMode(QLineEdit::Password);
        label = new QLabel(regist);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(22, 70, 101, 20));
        label_2 = new QLabel(regist);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(22, 120, 111, 20));
        label_3 = new QLabel(regist);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(70, 170, 53, 16));

        retranslateUi(regist);

        QMetaObject::connectSlotsByName(regist);
    } // setupUi

    void retranslateUi(QWidget *regist)
    {
        regist->setWindowTitle(QCoreApplication::translate("regist", "\346\263\250\345\206\214", nullptr));
        re_button->setText(QCoreApplication::translate("regist", "\346\263\250\345\206\214", nullptr));
        ex_button->setText(QCoreApplication::translate("regist", "\351\200\200\345\207\272\346\263\250\345\206\214", nullptr));
        label->setText(QCoreApplication::translate("regist", "\347\224\250\346\210\267ID(\346\234\200\345\244\23220\344\275\215)", nullptr));
        label_2->setText(QCoreApplication::translate("regist", "\345\257\206\347\240\201\357\274\210\346\234\200\345\244\23220\344\275\215\357\274\211", nullptr));
        label_3->setText(QCoreApplication::translate("regist", "\345\257\206\347\240\201\347\241\256\350\256\244", nullptr));
    } // retranslateUi

};

namespace Ui {
    class regist: public Ui_regist {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGIST_H
