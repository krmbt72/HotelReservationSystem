#include "homepage.h"
#include "ui_homepage.h"

HomePage::HomePage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::HomePage)
{
    ui->setupUi(this);
    this->setFixedSize(850,450);

    //Path to image file
    QPixmap roomImg(":/resource/image/room.png");
    ui->label_Image->setPixmap(roomImg);
    ui->label_Image->setScaledContents(true);
}

HomePage::~HomePage()
{
    delete ui;
    delete registeration;
}

void HomePage::on_pushButton_RegisterClient_clicked()
{
    registeration = new Registration(this);
    registeration->show();
}
