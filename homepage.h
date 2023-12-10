#ifndef HOMEPAGE_H
#define HOMEPAGE_H

#include <QDialog>
#include "registration.h"

namespace Ui {
    class HomePage;
}

class HomePage : public QDialog
{
    Q_OBJECT

public:
    explicit HomePage(QWidget *parent = nullptr);
    ~HomePage();

private slots:
    void on_pushButton_RegisterClient_clicked();

private:
    Ui::HomePage *ui;
    Registration *registeration;
};

#endif // HOMEPAGE_H
