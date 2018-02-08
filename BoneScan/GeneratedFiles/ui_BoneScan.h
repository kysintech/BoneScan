/********************************************************************************
** Form generated from reading UI file 'BoneScan.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BONESCAN_H
#define UI_BONESCAN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BoneScanClass
{
public:
    QPushButton *scan;

    void setupUi(QWidget *BoneScanClass)
    {
        if (BoneScanClass->objectName().isEmpty())
            BoneScanClass->setObjectName(QStringLiteral("BoneScanClass"));
        BoneScanClass->resize(1088, 740);
        scan = new QPushButton(BoneScanClass);
        scan->setObjectName(QStringLiteral("scan"));
        scan->setGeometry(QRect(810, 110, 181, 71));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\226\271\346\255\243\345\247\232\344\275\223"));
        font.setPointSize(26);
        scan->setFont(font);

        retranslateUi(BoneScanClass);
        QObject::connect(scan, SIGNAL(clicked()), scan, SLOT(click()));

        QMetaObject::connectSlotsByName(BoneScanClass);
    } // setupUi

    void retranslateUi(QWidget *BoneScanClass)
    {
        BoneScanClass->setWindowTitle(QApplication::translate("BoneScanClass", "BoneScan", 0));
        scan->setText(QApplication::translate("BoneScanClass", "\346\211\253\346\217\217", 0));
    } // retranslateUi

};

namespace Ui {
    class BoneScanClass: public Ui_BoneScanClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BONESCAN_H
