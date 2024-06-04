#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_leftButton_clicked()
{
    this->ui->widget->translate(-0.02f, 0.0f);
}




void MainWindow::on_rightButton_clicked()
{
    this->ui->widget->translate(0.02f, 0.0f);
}


void MainWindow::on_downButton_clicked()
{
    this->ui->widget->translate(0.0f, -0.02f);

}


void MainWindow::on_upButton_clicked()
{
    this->ui->widget->translate(0.0f, 0.02f);

}


void MainWindow::on_clockwiseButton_clicked()
{
    this->ui->widget->rotate(20);
}


void MainWindow::on_anticlockButton_clicked()
{
    this->ui->widget->rotate(-20);
}


void MainWindow::on_raiseHeightBtn_clicked()
{
    this->ui->widget->scale(0.0f, 0.04f);
}


void MainWindow::on_lowerHeightBtn_clicked()
{
    this->ui->widget->scale(0.0f, -0.04f);
}


void MainWindow::on_plusWidthBtn_clicked()
{
    this->ui->widget->scale(0.04f, 0.0f);
}


void MainWindow::on_minusWidthBtn_clicked()
{
    this->ui->widget->scale(-0.04f, 0.0f);
}


void MainWindow::on_resetButton_clicked()
{
    this->ui->widget->reset();
}


void MainWindow::on_rotate_plus_y_clicked()
{
    this->ui->widget->rotateY(20);
}


void MainWindow::on_rotate_minus_y_clicked()
{
    this->ui->widget->rotateY(-20);
}


void MainWindow::on_rotate_plus_x_clicked()
{
    this->ui->widget->rotateX(20);
}


void MainWindow::on_rotate_minus_x_clicked()
{
    this->ui->widget->rotateX(-20);
}

