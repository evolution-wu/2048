#include "dialog.h"
#include "ui_dialog.h"
#include "widget.h"
Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_2_released() //继续游戏
{

    emit this->jixu();
    this->hide();

}

void Dialog::on_pushButton_released() //退出游戏
{

    emit this->tuichu();
    this->hide();


}


