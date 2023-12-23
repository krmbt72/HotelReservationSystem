#include "service.h"

Service::Service(float cost, QString type, int amount)
{
    this->cost = cost;
    this->type = type;
    this->amount = amount;
}
float Service::getCost()
{
    return cost;
}
QString Service::getType()
{
    return type;
}
int Service::getAmount()
{
    return amount;
}
void Service::setCost(float cost)
{
    this->cost = cost;
}

void Service::setType(QString type)
{
    this->type = type;
}

void Service::setAmount(int amount)
{
    this->amount = amount;
}
