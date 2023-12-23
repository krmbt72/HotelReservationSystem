#include "registration.h"
#include "ui_registration.h"

Registration::Registration(QDialog *parent) :
    QDialog(parent),
    ui(new Ui::Registration)
{
    ui->setupUi(this);
    this->setFixedSize(380,380);
}

Registration::~Registration()
{
    delete ui;
}

void Registration::on_pushButton_Cancel_clicked()
{
    this->hide();    
}


void Registration::on_pushButton_Submit_clicked()
{

}

