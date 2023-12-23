#ifndef CUSTOMER_H
#define CUSTOMER_H
#include "Human.h"

class Customer:public Human
{
public:
    Customer(const Human&,QString,QString);
    Customer(const Human&);
    Customer(const Customer&);
    QString getPhoneNumber();
    QString getEMail();
    void setPhoneNumber(QString);
    void setEMail(QString);
    QString print();

private:
    QString phoneNumber;
    QString eMail;
};

#endif // CUSTOMER_H
