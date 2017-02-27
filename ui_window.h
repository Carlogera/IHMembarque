/********************************************************************************
** Form generated from reading UI file 'window.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW_H
#define UI_WINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_Window
{
public:
    QDialogButtonBox *buttonBox;
    QGroupBox *colorAxe;
    QRadioButton *axeBlue;
    QRadioButton *axeRed;
    QRadioButton *axeWhite;
    QGroupBox *colorCurve;
    QRadioButton *curveGreen;
    QRadioButton *curveYellow;
    QRadioButton *curveBlue;

    void setupUi(QDialog *Window)
    {
        if (Window->objectName().isEmpty())
            Window->setObjectName(QString::fromUtf8("Window"));
        Window->resize(400, 217);
        buttonBox = new QDialogButtonBox(Window);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 180, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        colorAxe = new QGroupBox(Window);
        colorAxe->setObjectName(QString::fromUtf8("colorAxe"));
        colorAxe->setGeometry(QRect(20, 20, 341, 71));
        axeBlue = new QRadioButton(colorAxe);
        axeBlue->setObjectName(QString::fromUtf8("axeBlue"));
        axeBlue->setGeometry(QRect(0, 30, 61, 20));
        axeBlue->setChecked(true);
        axeRed = new QRadioButton(colorAxe);
        axeRed->setObjectName(QString::fromUtf8("axeRed"));
        axeRed->setGeometry(QRect(110, 30, 71, 20));
        axeWhite = new QRadioButton(colorAxe);
        axeWhite->setObjectName(QString::fromUtf8("axeWhite"));
        axeWhite->setGeometry(QRect(230, 30, 71, 20));
        colorCurve = new QGroupBox(Window);
        colorCurve->setObjectName(QString::fromUtf8("colorCurve"));
        colorCurve->setGeometry(QRect(20, 100, 341, 71));
        curveGreen = new QRadioButton(colorCurve);
        curveGreen->setObjectName(QString::fromUtf8("curveGreen"));
        curveGreen->setGeometry(QRect(0, 30, 61, 20));
        curveGreen->setChecked(false);
        curveYellow = new QRadioButton(colorCurve);
        curveYellow->setObjectName(QString::fromUtf8("curveYellow"));
        curveYellow->setGeometry(QRect(110, 30, 71, 20));
        curveYellow->setChecked(true);
        curveBlue = new QRadioButton(colorCurve);
        curveBlue->setObjectName(QString::fromUtf8("curveBlue"));
        curveBlue->setGeometry(QRect(230, 30, 71, 20));

        retranslateUi(Window);
        QObject::connect(buttonBox, SIGNAL(accepted()), Window, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Window, SLOT(reject()));

        QMetaObject::connectSlotsByName(Window);
    } // setupUi

    void retranslateUi(QDialog *Window)
    {
        Window->setWindowTitle(QApplication::translate("Window", "Dialog", 0, QApplication::UnicodeUTF8));
        colorAxe->setTitle(QApplication::translate("Window", "Couleur des Axes :", 0, QApplication::UnicodeUTF8));
        axeBlue->setText(QApplication::translate("Window", "Bleu", 0, QApplication::UnicodeUTF8));
        axeRed->setText(QApplication::translate("Window", "Rouge", 0, QApplication::UnicodeUTF8));
        axeWhite->setText(QApplication::translate("Window", "Blanc", 0, QApplication::UnicodeUTF8));
        colorCurve->setTitle(QApplication::translate("Window", "Couleur du Signal :", 0, QApplication::UnicodeUTF8));
        curveGreen->setText(QApplication::translate("Window", "Vert", 0, QApplication::UnicodeUTF8));
        curveYellow->setText(QApplication::translate("Window", "Jaune", 0, QApplication::UnicodeUTF8));
        curveBlue->setText(QApplication::translate("Window", "Bleu", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Window: public Ui_Window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_H
