#ifndef PAYMENT_H
#define PAYMENT_H
#include <QDate>

class Payment
{
private:
    float amount;
    QString method;
    QDate date;
public:
    Payment(float,QString);
    float getAmount();
    QString getMethod();
    QString getDate();
    float calculate(float);
};

#endif // PAYMENT_H

/*
    Cash,
    Credit_Card,
    Mobile_Payments,
    Electronic Funds Transfer
*/
