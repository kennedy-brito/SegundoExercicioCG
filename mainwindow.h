#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_leftButton_clicked();

    void on_rightButton_clicked();

    void on_downButton_clicked();

    void on_upButton_clicked();

    void on_clockwiseButton_clicked();

    void on_anticlockButton_clicked();

    void on_raiseHeightBtn_clicked();

    void on_lowerHeightBtn_clicked();

    void on_plusWidthBtn_clicked();

    void on_minusWidthBtn_clicked();

    void on_resetButton_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
