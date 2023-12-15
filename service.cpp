#include "service.h"

Service::Service(float cost, QString service)
{
    amount = cost;
    type = service;
}
float Service::getAmount()
{
    return amount;
}
QString Service::getType()
{
    return type;
}
QString Service::getDate()
{
    return date.toString();
}
void Service::setAmount(float cost)
{
    amount = cost;
}

void Service::setType(QString service)
{
    type = service;
}
float Service::transaction(const Service &serv)
{
    float sum = amount;
    sum += serv.amount;
    return sum;
}

