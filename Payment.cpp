#include "Payment.h"

Payment::Payment(float debt, QString method)
{
    this->debt = debt;
    this->method = method;
    date = QDate::currentDate();
}

float Payment::getDebt()
{
    return debt;
}

QString Payment::getMethod()
{
    return method;
}

QString Payment::getDate()
{
    return date.toString();
}

