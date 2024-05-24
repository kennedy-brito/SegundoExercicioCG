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

