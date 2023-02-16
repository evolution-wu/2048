#include "mainwindow.h"
#include"widget.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //this->setStyleSheet("border-image:url(:/img/name.jpg)");

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_PB_clicked()   //开始游戏
{
    this->hide();
    Widget::p_widget->show();
}

void MainWindow::on_PB1_clicked() //退出游戏
{
    this->close();
}
