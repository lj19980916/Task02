#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QFileDialog>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
	ui->gb_NonAdjudicial->setStyleSheet("QGroupBox{border:none}");
	ui->gb_EnergyEquations->setStyleSheet("QGroupBox{border:none}");
	ui->gb_open->setStyleSheet("QGroupBox{border:none}");
	ui->groupBox->setStyleSheet("QGroupBox{border:none}");
	ui->groupBox_3->setStyleSheet("QGroupBox{border:none}");
	ui->groupBox_5->setStyleSheet("QGroupBox{border:none}");
	ui->groupBox_7->setStyleSheet("QGroupBox{border:none}");
	ui->rbtn_steady->setChecked(true);
	ui->rbtn_no->setChecked(true);
	ui->rbtn_close->setChecked(true);
	ui->rbtn_AllClose->setChecked(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btn_save_clicked()
{
	txtinfo info;
	if (ui->rbtn_unsteady->isChecked())
	{
		info.NonAdjudicial = "NonAdjudicial=unsteady";
	}
	else if(ui->rbtn_steady->isChecked())
	{
		info.NonAdjudicial = "NonAdjudicial=steady";
	}
	info.ReferencePoint_X = "ReferencePoint_X=" + ui->le_x->text();
	info.ReferencePoint_Y = "ReferencePoint_Y=" + ui->le_y->text();
	info.ReferencePoint_Z = "ReferencePoint_Z=" + ui->le_z->text();
	if (ui->rbtn_no->isChecked())
	{
		info.Gravity = "Gravity Open=No";
	}
	else if(ui->rbtn_yes->isChecked())
	{
		info.Gravity = "Gravity Open=Yes";
	}
	info.Viscosity_TurbulenceModel = "Viscosity_TurbulenceModel=" + ui->cb_TurbulenceModel->currentText();
	info.Viscosity_WallFunction = "Viscosity_WallFunction=" + ui->cb_WallFunction->currentText();
	info.Viscosity_WallDistance = "Viscosity_WallDistance=" + ui->cb_WallDistance->currentText();
	if (ui->rbtn_close->isChecked())
	{
		info.EnergyEquations = "EnergyEquations=close";
	}
	else if (ui->rbtn_open->isChecked())
	{
		info.EnergyEquations = "EnergyEquations=open";
	}
	if (ui->rbtn_MultiComponent->isChecked())
	{
		info.Open = "Open=Multi-Component";
	}
	else if (ui->rbtn_MultiphaseFlow->isChecked())
	{
		info.Open = "Open=Multiphase Flow";
	}
	else if(ui->rbtn_AllClose)
	{
		info.Open = "Open=None are turned on";
	}
	QFile file;
	file.setFileName(QFileDialog::getSaveFileName(this, QString("±£´æÂ·¾¶"), QString("/"), QString("TEXT(*.txt)")));
	file.open(QIODevice::WriteOnly | QIODevice::Text);
	file.write(info.NonAdjudicial.toUtf8()+"\n");
	file.write(info.ReferencePoint_X.toUtf8() + "\n");
	file.write(info.ReferencePoint_Y.toUtf8() + "\n");
	file.write(info.ReferencePoint_Z.toUtf8() + "\n");
	file.write(info.Gravity.toUtf8() + "\n");
	file.write(info.Viscosity_TurbulenceModel.toUtf8() + "\n");
	file.write(info.Viscosity_WallFunction.toUtf8() + "\n");
	file.write(info.Viscosity_WallDistance.toUtf8() + "\n");
	file.write(info.EnergyEquations.toUtf8() + "\n");
	file.write(info.Open.toUtf8() + "\n");
	file.close();
	
}

