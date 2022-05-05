/********************************************************************************
** Form generated from reading UI file 'picture.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PICTURE_H
#define UI_PICTURE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_picture
{
public:
    QGraphicsView *graphicsView;

    void setupUi(QWidget *picture)
    {
        if (picture->objectName().isEmpty())
            picture->setObjectName(QString::fromUtf8("picture"));
        picture->resize(851, 559);
        graphicsView = new QGraphicsView(picture);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(20, 50, 811, 481));

        retranslateUi(picture);

        QMetaObject::connectSlotsByName(picture);
    } // setupUi

    void retranslateUi(QWidget *picture)
    {
        picture->setWindowTitle(QCoreApplication::translate("picture", "\345\233\276\347\211\207\351\242\204\350\247\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class picture: public Ui_picture {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PICTURE_H
