#include "information.h"
#include "ui_information.h"

information::information(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::information)
{
    ui->setupUi(this);
}

information::~information()
{
    delete ui;
}
