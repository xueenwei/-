/********************************************************************************
** Form generated from reading UI file 'user.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USER_H
#define UI_USER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_user
{
public:
    QLabel *user_name_label;
    QLabel *user_name;
    QPushButton *closeButton;
    QTextEdit *Infotext;
    QTextEdit *Sendtext;
    QPushButton *textSend;
    QLabel *label;
    QComboBox *ID_box;
    QPushButton *viewbutton;
    QPushButton *fileButton;
    QPushButton *sendButton;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QListView *listView;

    void setupUi(QWidget *user)
    {
        if (user->objectName().isEmpty())
            user->setObjectName(QString::fromUtf8("user"));
        user->resize(964, 528);
        user_name_label = new QLabel(user);
        user_name_label->setObjectName(QString::fromUtf8("user_name_label"));
        user_name_label->setGeometry(QRect(10, 10, 53, 16));
        user_name = new QLabel(user);
        user_name->setObjectName(QString::fromUtf8("user_name"));
        user_name->setGeometry(QRect(60, 10, 53, 16));
        closeButton = new QPushButton(user);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));
        closeButton->setGeometry(QRect(800, 80, 75, 24));
        Infotext = new QTextEdit(user);
        Infotext->setObjectName(QString::fromUtf8("Infotext"));
        Infotext->setGeometry(QRect(20, 50, 451, 261));
        Infotext->setReadOnly(true);
        Sendtext = new QTextEdit(user);
        Sendtext->setObjectName(QString::fromUtf8("Sendtext"));
        Sendtext->setGeometry(QRect(20, 350, 451, 121));
        textSend = new QPushButton(user);
        textSend->setObjectName(QString::fromUtf8("textSend"));
        textSend->setGeometry(QRect(390, 490, 75, 24));
        label = new QLabel(user);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(510, 50, 53, 16));
        ID_box = new QComboBox(user);
        ID_box->setObjectName(QString::fromUtf8("ID_box"));
        ID_box->setGeometry(QRect(510, 80, 131, 22));
        viewbutton = new QPushButton(user);
        viewbutton->setObjectName(QString::fromUtf8("viewbutton"));
        viewbutton->setGeometry(QRect(510, 110, 101, 24));
        fileButton = new QPushButton(user);
        fileButton->setObjectName(QString::fromUtf8("fileButton"));
        fileButton->setGeometry(QRect(570, 210, 101, 24));
        sendButton = new QPushButton(user);
        sendButton->setObjectName(QString::fromUtf8("sendButton"));
        sendButton->setGeometry(QRect(750, 210, 101, 24));
        lineEdit = new QLineEdit(user);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(510, 180, 431, 21));
        label_2 = new QLabel(user);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(510, 160, 53, 16));
        pushButton = new QPushButton(user);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(510, 280, 111, 24));
        pushButton_2 = new QPushButton(user);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(510, 400, 111, 24));
        pushButton_3 = new QPushButton(user);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(510, 320, 111, 24));
        pushButton_4 = new QPushButton(user);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(510, 360, 111, 24));
        listView = new QListView(user);
        listView->setObjectName(QString::fromUtf8("listView"));
        listView->setGeometry(QRect(660, 270, 131, 192));

        retranslateUi(user);

        QMetaObject::connectSlotsByName(user);
    } // setupUi

    void retranslateUi(QWidget *user)
    {
        user->setWindowTitle(QCoreApplication::translate("user", "\347\224\250\346\210\267\347\225\214\351\235\242", nullptr));
        user_name_label->setText(QCoreApplication::translate("user", "\347\224\250\346\210\267\345\220\215", nullptr));
        user_name->setText(QString());
        closeButton->setText(QCoreApplication::translate("user", "\351\200\200\345\207\272", nullptr));
        textSend->setText(QCoreApplication::translate("user", "\345\217\221\351\200\201\344\277\241\346\201\257", nullptr));
        label->setText(QCoreApplication::translate("user", "\345\257\271\346\226\271ID", nullptr));
        viewbutton->setText(QCoreApplication::translate("user", "\346\265\217\350\247\210\345\234\250\347\272\277\347\224\250\346\210\267", nullptr));
        fileButton->setText(QCoreApplication::translate("user", "\351\200\211\346\213\251\346\226\207\344\273\266", nullptr));
        sendButton->setText(QCoreApplication::translate("user", "\345\217\221\351\200\201\346\226\207\344\273\266", nullptr));
        label_2->setText(QCoreApplication::translate("user", "\346\226\207\344\273\266\345\220\215", nullptr));
        pushButton->setText(QCoreApplication::translate("user", "\346\267\273\345\212\240\350\207\263\347\276\244\345\217\221\345\210\227\350\241\250", nullptr));
        pushButton_2->setText(QCoreApplication::translate("user", "\347\276\244\345\217\221\346\226\207\344\273\266", nullptr));
        pushButton_3->setText(QCoreApplication::translate("user", "\344\273\216\347\276\244\345\217\221\345\210\227\350\241\250\344\270\255\347\247\273\351\231\244", nullptr));
        pushButton_4->setText(QCoreApplication::translate("user", "\346\270\205\347\251\272\347\276\244\345\217\221\345\210\227\350\241\250", nullptr));
    } // retranslateUi

};

namespace Ui {
    class user: public Ui_user {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_H
