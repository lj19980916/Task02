/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *gb_NonAdjudicial;
    QGridLayout *gridLayout;
    QRadioButton *rbtn_steady;
    QRadioButton *rbtn_unsteady;
    QLabel *label;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QLineEdit *le_x;
    QLineEdit *le_y;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *le_z;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label_6;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_3;
    QLabel *label_7;
    QRadioButton *rbtn_no;
    QRadioButton *rbtn_yes;
    QLabel *label_8;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_4;
    QLabel *label_9;
    QComboBox *cb_TurbulenceModel;
    QLabel *label_10;
    QComboBox *cb_WallFunction;
    QLabel *label_11;
    QComboBox *cb_WallDistance;
    QGroupBox *gb_EnergyEquations;
    QGridLayout *gridLayout_5;
    QRadioButton *rbtn_open;
    QLabel *label_12;
    QRadioButton *rbtn_close;
    QGroupBox *gb_open;
    QGridLayout *gridLayout_6;
    QRadioButton *rbtn_AllClose;
    QRadioButton *rbtn_MultiComponent;
    QRadioButton *rbtn_MultiphaseFlow;
    QLabel *label_13;
    QPushButton *btn_save;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(555, 793);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gb_NonAdjudicial = new QGroupBox(centralwidget);
        gb_NonAdjudicial->setObjectName(QString::fromUtf8("gb_NonAdjudicial"));
        gb_NonAdjudicial->setGeometry(QRect(70, 10, 431, 36));
        gridLayout = new QGridLayout(gb_NonAdjudicial);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        rbtn_steady = new QRadioButton(gb_NonAdjudicial);
        rbtn_steady->setObjectName(QString::fromUtf8("rbtn_steady"));

        gridLayout->addWidget(rbtn_steady, 0, 2, 1, 1);

        rbtn_unsteady = new QRadioButton(gb_NonAdjudicial);
        rbtn_unsteady->setObjectName(QString::fromUtf8("rbtn_unsteady"));

        gridLayout->addWidget(rbtn_unsteady, 0, 1, 1, 1);

        label = new QLabel(gb_NonAdjudicial);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(70, 80, 431, 58));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        le_x = new QLineEdit(groupBox_2);
        le_x->setObjectName(QString::fromUtf8("le_x"));

        gridLayout_2->addWidget(le_x, 1, 0, 1, 1);

        le_y = new QLineEdit(groupBox_2);
        le_y->setObjectName(QString::fromUtf8("le_y"));

        gridLayout_2->addWidget(le_y, 1, 1, 1, 1);

        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_4, 0, 1, 1, 1);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_5, 0, 2, 1, 1);

        le_z = new QLineEdit(groupBox_2);
        le_z->setObjectName(QString::fromUtf8("le_z"));

        gridLayout_2->addWidget(le_z, 1, 2, 1, 1);

        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setLayoutDirection(Qt::LeftToRight);
        label_3->setTextFormat(Qt::PlainText);
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_3, 0, 0, 1, 1);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(70, 60, 54, 12));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(70, 150, 54, 20));
        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(70, 180, 431, 36));
        gridLayout_3 = new QGridLayout(groupBox_3);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_7 = new QLabel(groupBox_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_3->addWidget(label_7, 0, 0, 1, 1);

        rbtn_no = new QRadioButton(groupBox_3);
        rbtn_no->setObjectName(QString::fromUtf8("rbtn_no"));

        gridLayout_3->addWidget(rbtn_no, 0, 1, 1, 1);

        rbtn_yes = new QRadioButton(groupBox_3);
        rbtn_yes->setObjectName(QString::fromUtf8("rbtn_yes"));

        gridLayout_3->addWidget(rbtn_yes, 0, 2, 1, 1);

        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(70, 230, 54, 12));
        groupBox_4 = new QGroupBox(centralwidget);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(70, 260, 431, 92));
        gridLayout_4 = new QGridLayout(groupBox_4);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label_9 = new QLabel(groupBox_4);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_4->addWidget(label_9, 0, 0, 1, 1);

        cb_TurbulenceModel = new QComboBox(groupBox_4);
        cb_TurbulenceModel->addItem(QString());
        cb_TurbulenceModel->setObjectName(QString::fromUtf8("cb_TurbulenceModel"));

        gridLayout_4->addWidget(cb_TurbulenceModel, 0, 1, 1, 1);

        label_10 = new QLabel(groupBox_4);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_4->addWidget(label_10, 1, 0, 1, 1);

        cb_WallFunction = new QComboBox(groupBox_4);
        cb_WallFunction->addItem(QString());
        cb_WallFunction->setObjectName(QString::fromUtf8("cb_WallFunction"));

        gridLayout_4->addWidget(cb_WallFunction, 1, 1, 1, 1);

        label_11 = new QLabel(groupBox_4);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_4->addWidget(label_11, 2, 0, 1, 1);

        cb_WallDistance = new QComboBox(groupBox_4);
        cb_WallDistance->addItem(QString());
        cb_WallDistance->setObjectName(QString::fromUtf8("cb_WallDistance"));

        gridLayout_4->addWidget(cb_WallDistance, 2, 1, 1, 1);

        gb_EnergyEquations = new QGroupBox(centralwidget);
        gb_EnergyEquations->setObjectName(QString::fromUtf8("gb_EnergyEquations"));
        gb_EnergyEquations->setGeometry(QRect(70, 360, 431, 36));
        gridLayout_5 = new QGridLayout(gb_EnergyEquations);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        rbtn_open = new QRadioButton(gb_EnergyEquations);
        rbtn_open->setObjectName(QString::fromUtf8("rbtn_open"));

        gridLayout_5->addWidget(rbtn_open, 0, 2, 1, 1);

        label_12 = new QLabel(gb_EnergyEquations);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setMaximumSize(QSize(100, 20));

        gridLayout_5->addWidget(label_12, 0, 0, 1, 1);

        rbtn_close = new QRadioButton(gb_EnergyEquations);
        rbtn_close->setObjectName(QString::fromUtf8("rbtn_close"));

        gridLayout_5->addWidget(rbtn_close, 0, 1, 1, 1);

        gb_open = new QGroupBox(centralwidget);
        gb_open->setObjectName(QString::fromUtf8("gb_open"));
        gb_open->setGeometry(QRect(70, 410, 431, 36));
        gridLayout_6 = new QGridLayout(gb_open);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        rbtn_AllClose = new QRadioButton(gb_open);
        rbtn_AllClose->setObjectName(QString::fromUtf8("rbtn_AllClose"));

        gridLayout_6->addWidget(rbtn_AllClose, 0, 4, 1, 1);

        rbtn_MultiComponent = new QRadioButton(gb_open);
        rbtn_MultiComponent->setObjectName(QString::fromUtf8("rbtn_MultiComponent"));

        gridLayout_6->addWidget(rbtn_MultiComponent, 0, 3, 1, 1);

        rbtn_MultiphaseFlow = new QRadioButton(gb_open);
        rbtn_MultiphaseFlow->setObjectName(QString::fromUtf8("rbtn_MultiphaseFlow"));

        gridLayout_6->addWidget(rbtn_MultiphaseFlow, 0, 2, 1, 1);

        label_13 = new QLabel(gb_open);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setMaximumSize(QSize(100, 20));

        gridLayout_6->addWidget(label_13, 0, 1, 1, 1);

        btn_save = new QPushButton(centralwidget);
        btn_save->setObjectName(QString::fromUtf8("btn_save"));
        btn_save->setGeometry(QRect(240, 590, 75, 23));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 555, 23));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        gb_NonAdjudicial->setTitle(QString());
        rbtn_steady->setText(QCoreApplication::translate("MainWindow", "\347\250\263\346\200\201", nullptr));
        rbtn_unsteady->setText(QCoreApplication::translate("MainWindow", "\351\235\236\347\250\263\346\200\201", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\351\235\236\345\256\232\345\270\270", nullptr));
        groupBox_2->setTitle(QString());
        label_4->setText(QCoreApplication::translate("MainWindow", "Y\346\226\271\345\220\221", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Z\346\226\271\345\220\221", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "X\346\226\271\345\220\221", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\345\217\202\350\200\203\347\202\271", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\351\207\215\345\212\233", nullptr));
        groupBox_3->setTitle(QString());
        label_7->setText(QCoreApplication::translate("MainWindow", "\345\274\200\345\220\257", nullptr));
        rbtn_no->setText(QCoreApplication::translate("MainWindow", "\345\220\246", nullptr));
        rbtn_yes->setText(QCoreApplication::translate("MainWindow", "\346\230\257", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "\347\262\230\345\272\246", nullptr));
        groupBox_4->setTitle(QString());
        label_9->setText(QCoreApplication::translate("MainWindow", "\346\271\215\346\265\201\346\250\241\345\236\213", nullptr));
        cb_TurbulenceModel->setItemText(0, QCoreApplication::translate("MainWindow", "SST_K_OMEGA", nullptr));

        label_10->setText(QCoreApplication::translate("MainWindow", "\345\243\201\351\235\242\345\207\275\346\225\260", nullptr));
        cb_WallFunction->setItemText(0, QCoreApplication::translate("MainWindow", "AUTOMATIC", nullptr));

        label_11->setText(QCoreApplication::translate("MainWindow", "\345\243\201\351\235\242\350\267\235\347\246\273", nullptr));
        cb_WallDistance->setItemText(0, QCoreApplication::translate("MainWindow", "BOX_SPLITING", nullptr));

        gb_EnergyEquations->setTitle(QString());
        rbtn_open->setText(QCoreApplication::translate("MainWindow", "\345\274\200\345\220\257", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "\350\203\275\351\207\217\346\226\271\347\250\213", nullptr));
        rbtn_close->setText(QCoreApplication::translate("MainWindow", "\345\205\263\351\227\255", nullptr));
        gb_open->setTitle(QString());
        rbtn_AllClose->setText(QCoreApplication::translate("MainWindow", "\351\203\275\344\270\215\345\274\200\345\220\257", nullptr));
        rbtn_MultiComponent->setText(QCoreApplication::translate("MainWindow", "\345\244\232\347\273\204\345\210\206", nullptr));
        rbtn_MultiphaseFlow->setText(QCoreApplication::translate("MainWindow", "\345\244\232\347\233\270\346\265\201", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "\345\274\200\345\220\257", nullptr));
        btn_save->setText(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
