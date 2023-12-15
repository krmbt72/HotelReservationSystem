#include "Payment.h"

Payment::Payment(float cost, QString type)
{
    amount = cost;
    method = type;
    date = QDate::currentDate();
}

float Payment::getAmount()
{
    return amount;
}
QString Payment::getDate()
{
    return date.toString();
}

float Payment::calculate(float cost)
{
    float sum = amount;
    sum += cost;
    return sum;
}
