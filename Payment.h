#ifndef PAYMENT_H
#define PAYMENT_H
#include <QDate>

class Payment
{
private:
    std::vector<float> amount;
    std::vector<QString> method;
    QDate date;
public:
    Payment(float,QString);
    ~Payment();
    std::vector<float> getAmount();
    QString getDate();
    float calculate();
};

#endif // PAYMENT_H

/*
{ Cash,
    Check,
    Credit_Card,
    Mobile_Payments,
    Electronic_Transfers,
    Wire_Transfers
*/
