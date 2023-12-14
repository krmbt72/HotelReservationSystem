#include "Payment.h"

Payment::Payment(float cost, QString type)
{
    amount.push_back(cost);
    method.push_back(type);
    date = QDate::currentDate();
}

std::vector<float> Payment::getAmount()
{
    return amount;
}
QString Payment::getDate()
{
    return date.toString();
}

float Payment::calculate()
{
    float total = 0.0;
    return total;
}

Payment::~Payment(){}
