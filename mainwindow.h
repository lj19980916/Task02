#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

struct txtinfo
{
	QString NonAdjudicial;
	QString ReferencePoint_X;
	QString ReferencePoint_Y;
	QString ReferencePoint_Z;
	QString Gravity;
	QString Viscosity_TurbulenceModel;
	QString Viscosity_WallFunction;
	QString Viscosity_WallDistance;
	QString EnergyEquations;
	QString Open;
};
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

	

private slots:
    void on_btn_save_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
