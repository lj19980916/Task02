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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_7;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label;
    QGroupBox *gb_NonAdjudicial;
    QHBoxLayout *horizontalLayout_7;
    QRadioButton *rbtn_steady;
    QRadioButton *rbtn_unsteady;
    QLabel *label_2;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QLabel *label_5;
    QLineEdit *le_x;
    QLineEdit *le_y;
    QLineEdit *le_z;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_6;
    QGroupBox *groupBox_6;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_7;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_5;
    QRadioButton *rbtn_yes;
    QRadioButton *rbtn_no;
    QLabel *label_8;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_4;
    QComboBox *cb_WallFunction;
    QLabel *label_9;
    QLabel *label_11;
    QComboBox *cb_WallDistance;
    QComboBox *cb_TurbulenceModel;
    QLabel *label_10;
    QGroupBox *groupBox_5;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_12;
    QGroupBox *gb_EnergyEquations;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *rbtn_close;
    QRadioButton *rbtn_open;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_13;
    QGroupBox *gb_open;
    QHBoxLayout *horizontalLayout;
    QRadioButton *rbtn_MultiphaseFlow;
    QRadioButton *rbtn_MultiComponent;
    QRadioButton *rbtn_AllClose;
    QSpacerItem *verticalSpacer;
    QPushButton *btn_save;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(511, 1006);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox_7 = new QGroupBox(centralwidget);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox_7->sizePolicy().hasHeightForWidth());
        groupBox_7->setSizePolicy(sizePolicy1);
        horizontalLayout_8 = new QHBoxLayout(groupBox_7);
        horizontalLayout_8->setSpacing(0);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(-1, 0, 0, 0);
        label = new QLabel(groupBox_7);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy2);
        label->setMaximumSize(QSize(200, 16777215));
        label->setFrameShadow(QFrame::Plain);
        label->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);

        horizontalLayout_8->addWidget(label);

        gb_NonAdjudicial = new QGroupBox(groupBox_7);
        gb_NonAdjudicial->setObjectName(QString::fromUtf8("gb_NonAdjudicial"));
        sizePolicy1.setHeightForWidth(gb_NonAdjudicial->sizePolicy().hasHeightForWidth());
        gb_NonAdjudicial->setSizePolicy(sizePolicy1);
        horizontalLayout_7 = new QHBoxLayout(gb_NonAdjudicial);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(-1, 0, -1, 0);
        rbtn_steady = new QRadioButton(gb_NonAdjudicial);
        rbtn_steady->setObjectName(QString::fromUtf8("rbtn_steady"));

        horizontalLayout_7->addWidget(rbtn_steady);

        rbtn_unsteady = new QRadioButton(gb_NonAdjudicial);
        rbtn_unsteady->setObjectName(QString::fromUtf8("rbtn_unsteady"));

        horizontalLayout_7->addWidget(rbtn_unsteady);


        horizontalLayout_8->addWidget(gb_NonAdjudicial);


        verticalLayout->addWidget(groupBox_7);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy3);

        verticalLayout->addWidget(label_2);

        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        sizePolicy.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy);
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_5, 0, 2, 1, 1);

        le_x = new QLineEdit(groupBox_2);
        le_x->setObjectName(QString::fromUtf8("le_x"));

        gridLayout_2->addWidget(le_x, 1, 0, 1, 1);

        le_y = new QLineEdit(groupBox_2);
        le_y->setObjectName(QString::fromUtf8("le_y"));

        gridLayout_2->addWidget(le_y, 1, 1, 1, 1);

        le_z = new QLineEdit(groupBox_2);
        le_z->setObjectName(QString::fromUtf8("le_z"));

        gridLayout_2->addWidget(le_z, 1, 2, 1, 1);

        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setLayoutDirection(Qt::LeftToRight);
        label_3->setTextFormat(Qt::PlainText);
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_3, 0, 0, 1, 1);

        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_4, 0, 1, 1, 1);


        verticalLayout->addWidget(groupBox_2);

        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        sizePolicy3.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy3);

        verticalLayout->addWidget(label_6);

        groupBox_6 = new QGroupBox(centralwidget);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        sizePolicy.setHeightForWidth(groupBox_6->sizePolicy().hasHeightForWidth());
        groupBox_6->setSizePolicy(sizePolicy);
        groupBox_6->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        horizontalLayout_6 = new QHBoxLayout(groupBox_6);
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(-1, 0, -1, -1);
        label_7 = new QLabel(groupBox_6);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        sizePolicy2.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy2);
        label_7->setMaximumSize(QSize(200, 16777215));
        label_7->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_6->addWidget(label_7);

        groupBox_3 = new QGroupBox(groupBox_6);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        sizePolicy.setHeightForWidth(groupBox_3->sizePolicy().hasHeightForWidth());
        groupBox_3->setSizePolicy(sizePolicy);
        horizontalLayout_5 = new QHBoxLayout(groupBox_3);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(-1, 9, 0, 9);
        rbtn_yes = new QRadioButton(groupBox_3);
        rbtn_yes->setObjectName(QString::fromUtf8("rbtn_yes"));

        horizontalLayout_5->addWidget(rbtn_yes);

        rbtn_no = new QRadioButton(groupBox_3);
        rbtn_no->setObjectName(QString::fromUtf8("rbtn_no"));

        horizontalLayout_5->addWidget(rbtn_no);


        horizontalLayout_6->addWidget(groupBox_3);


        verticalLayout->addWidget(groupBox_6);

        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        sizePolicy3.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy3);

        verticalLayout->addWidget(label_8);

        groupBox_4 = new QGroupBox(centralwidget);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        sizePolicy.setHeightForWidth(groupBox_4->sizePolicy().hasHeightForWidth());
        groupBox_4->setSizePolicy(sizePolicy);
        gridLayout_4 = new QGridLayout(groupBox_4);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(-1, 12, 9, -1);
        cb_WallFunction = new QComboBox(groupBox_4);
        cb_WallFunction->addItem(QString());
        cb_WallFunction->setObjectName(QString::fromUtf8("cb_WallFunction"));

        gridLayout_4->addWidget(cb_WallFunction, 1, 1, 1, 1);

        label_9 = new QLabel(groupBox_4);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setMaximumSize(QSize(200, 16777215));

        gridLayout_4->addWidget(label_9, 0, 0, 1, 1);

        label_11 = new QLabel(groupBox_4);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setMaximumSize(QSize(200, 16777215));

        gridLayout_4->addWidget(label_11, 2, 0, 1, 1);

        cb_WallDistance = new QComboBox(groupBox_4);
        cb_WallDistance->addItem(QString());
        cb_WallDistance->setObjectName(QString::fromUtf8("cb_WallDistance"));

        gridLayout_4->addWidget(cb_WallDistance, 2, 1, 1, 1);

        cb_TurbulenceModel = new QComboBox(groupBox_4);
        cb_TurbulenceModel->addItem(QString());
        cb_TurbulenceModel->setObjectName(QString::fromUtf8("cb_TurbulenceModel"));

        gridLayout_4->addWidget(cb_TurbulenceModel, 0, 1, 1, 1);

        label_10 = new QLabel(groupBox_4);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setMaximumSize(QSize(200, 16777215));

        gridLayout_4->addWidget(label_10, 1, 0, 1, 1);


        verticalLayout->addWidget(groupBox_4);

        groupBox_5 = new QGroupBox(centralwidget);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        sizePolicy.setHeightForWidth(groupBox_5->sizePolicy().hasHeightForWidth());
        groupBox_5->setSizePolicy(sizePolicy);
        horizontalLayout_4 = new QHBoxLayout(groupBox_5);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(9, 0, 0, 0);
        label_12 = new QLabel(groupBox_5);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setMaximumSize(QSize(200, 20));

        horizontalLayout_4->addWidget(label_12);

        gb_EnergyEquations = new QGroupBox(groupBox_5);
        gb_EnergyEquations->setObjectName(QString::fromUtf8("gb_EnergyEquations"));
        sizePolicy.setHeightForWidth(gb_EnergyEquations->sizePolicy().hasHeightForWidth());
        gb_EnergyEquations->setSizePolicy(sizePolicy);
        horizontalLayout_3 = new QHBoxLayout(gb_EnergyEquations);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(9, 0, 0, 0);
        rbtn_close = new QRadioButton(gb_EnergyEquations);
        rbtn_close->setObjectName(QString::fromUtf8("rbtn_close"));

        horizontalLayout_3->addWidget(rbtn_close);

        rbtn_open = new QRadioButton(gb_EnergyEquations);
        rbtn_open->setObjectName(QString::fromUtf8("rbtn_open"));

        horizontalLayout_3->addWidget(rbtn_open);


        horizontalLayout_4->addWidget(gb_EnergyEquations);


        verticalLayout->addWidget(groupBox_5);

        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        horizontalLayout_2 = new QHBoxLayout(groupBox);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(9, 0, 0, 0);
        label_13 = new QLabel(groupBox);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setMaximumSize(QSize(200, 20));

        horizontalLayout_2->addWidget(label_13);

        gb_open = new QGroupBox(groupBox);
        gb_open->setObjectName(QString::fromUtf8("gb_open"));
        sizePolicy.setHeightForWidth(gb_open->sizePolicy().hasHeightForWidth());
        gb_open->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(gb_open);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(9, 0, 0, 0);
        rbtn_MultiphaseFlow = new QRadioButton(gb_open);
        rbtn_MultiphaseFlow->setObjectName(QString::fromUtf8("rbtn_MultiphaseFlow"));

        horizontalLayout->addWidget(rbtn_MultiphaseFlow);

        rbtn_MultiComponent = new QRadioButton(gb_open);
        rbtn_MultiComponent->setObjectName(QString::fromUtf8("rbtn_MultiComponent"));

        horizontalLayout->addWidget(rbtn_MultiComponent);

        rbtn_AllClose = new QRadioButton(gb_open);
        rbtn_AllClose->setObjectName(QString::fromUtf8("rbtn_AllClose"));

        horizontalLayout->addWidget(rbtn_AllClose);


        horizontalLayout_2->addWidget(gb_open);


        verticalLayout->addWidget(groupBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        btn_save = new QPushButton(centralwidget);
        btn_save->setObjectName(QString::fromUtf8("btn_save"));
        sizePolicy3.setHeightForWidth(btn_save->sizePolicy().hasHeightForWidth());
        btn_save->setSizePolicy(sizePolicy3);
        btn_save->setLayoutDirection(Qt::LeftToRight);

        verticalLayout->addWidget(btn_save, 0, Qt::AlignHCenter);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 511, 23));
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
        groupBox_7->setTitle(QString());
        label->setText(QCoreApplication::translate("MainWindow", "\351\235\236\345\256\232\345\270\270", nullptr));
        gb_NonAdjudicial->setTitle(QString());
        rbtn_steady->setText(QCoreApplication::translate("MainWindow", "\347\250\263\346\200\201", nullptr));
        rbtn_unsteady->setText(QCoreApplication::translate("MainWindow", "\351\235\236\347\250\263\346\200\201", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\345\217\202\350\200\203\347\202\271", nullptr));
        groupBox_2->setTitle(QString());
        label_5->setText(QCoreApplication::translate("MainWindow", "Z\346\226\271\345\220\221", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "X\346\226\271\345\220\221", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Y\346\226\271\345\220\221", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\351\207\215\345\212\233", nullptr));
        groupBox_6->setTitle(QString());
        label_7->setText(QCoreApplication::translate("MainWindow", "\345\274\200\345\220\257", nullptr));
        groupBox_3->setTitle(QString());
        rbtn_yes->setText(QCoreApplication::translate("MainWindow", "\346\230\257", nullptr));
        rbtn_no->setText(QCoreApplication::translate("MainWindow", "\345\220\246", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "\347\262\230\345\272\246", nullptr));
        groupBox_4->setTitle(QString());
        cb_WallFunction->setItemText(0, QCoreApplication::translate("MainWindow", "AUTOMATIC", nullptr));

        label_9->setText(QCoreApplication::translate("MainWindow", "\346\271\215\346\265\201\346\250\241\345\236\213", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "\345\243\201\351\235\242\350\267\235\347\246\273", nullptr));
        cb_WallDistance->setItemText(0, QCoreApplication::translate("MainWindow", "BOX_SPLITING", nullptr));

        cb_TurbulenceModel->setItemText(0, QCoreApplication::translate("MainWindow", "SST_K_OMEGA", nullptr));

        label_10->setText(QCoreApplication::translate("MainWindow", "\345\243\201\351\235\242\345\207\275\346\225\260", nullptr));
        groupBox_5->setTitle(QString());
        label_12->setText(QCoreApplication::translate("MainWindow", "\350\203\275\351\207\217\346\226\271\347\250\213", nullptr));
        gb_EnergyEquations->setTitle(QString());
        rbtn_close->setText(QCoreApplication::translate("MainWindow", "\345\205\263\351\227\255", nullptr));
        rbtn_open->setText(QCoreApplication::translate("MainWindow", "\345\274\200\345\220\257", nullptr));
        groupBox->setTitle(QString());
        label_13->setText(QCoreApplication::translate("MainWindow", "\345\274\200\345\220\257", nullptr));
        gb_open->setTitle(QString());
        rbtn_MultiphaseFlow->setText(QCoreApplication::translate("MainWindow", "\345\244\232\347\233\270\346\265\201", nullptr));
        rbtn_MultiComponent->setText(QCoreApplication::translate("MainWindow", "\345\244\232\347\273\204\345\210\206", nullptr));
        rbtn_AllClose->setText(QCoreApplication::translate("MainWindow", "\351\203\275\344\270\215\345\274\200\345\220\257", nullptr));
        btn_save->setText(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
