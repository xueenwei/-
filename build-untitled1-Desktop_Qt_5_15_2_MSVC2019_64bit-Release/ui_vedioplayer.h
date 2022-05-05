/********************************************************************************
** Form generated from reading UI file 'vedioplayer.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VEDIOPLAYER_H
#define UI_VEDIOPLAYER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_vedioplayer
{
public:
    QPushButton *startButton;
    QPushButton *stopButton;
    QPushButton *closeButton;
    QSlider *SoundVolumn;
    QLabel *label;

    void setupUi(QWidget *vedioplayer)
    {
        if (vedioplayer->objectName().isEmpty())
            vedioplayer->setObjectName(QString::fromUtf8("vedioplayer"));
        vedioplayer->resize(1300, 80);
        startButton = new QPushButton(vedioplayer);
        startButton->setObjectName(QString::fromUtf8("startButton"));
        startButton->setGeometry(QRect(70, 20, 75, 24));
        stopButton = new QPushButton(vedioplayer);
        stopButton->setObjectName(QString::fromUtf8("stopButton"));
        stopButton->setGeometry(QRect(190, 20, 75, 24));
        closeButton = new QPushButton(vedioplayer);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));
        closeButton->setGeometry(QRect(310, 20, 75, 24));
        SoundVolumn = new QSlider(vedioplayer);
        SoundVolumn->setObjectName(QString::fromUtf8("SoundVolumn"));
        SoundVolumn->setGeometry(QRect(560, 40, 181, 22));
        SoundVolumn->setOrientation(Qt::Horizontal);
        label = new QLabel(vedioplayer);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(560, 10, 53, 16));

        retranslateUi(vedioplayer);

        QMetaObject::connectSlotsByName(vedioplayer);
    } // setupUi

    void retranslateUi(QWidget *vedioplayer)
    {
        vedioplayer->setWindowTitle(QCoreApplication::translate("vedioplayer", "Form", nullptr));
        startButton->setText(QCoreApplication::translate("vedioplayer", "\346\222\255\346\224\276", nullptr));
        stopButton->setText(QCoreApplication::translate("vedioplayer", "\346\232\202\345\201\234", nullptr));
        closeButton->setText(QCoreApplication::translate("vedioplayer", "\345\205\263\351\227\255", nullptr));
        label->setText(QCoreApplication::translate("vedioplayer", "\351\237\263\351\207\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class vedioplayer: public Ui_vedioplayer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VEDIOPLAYER_H
