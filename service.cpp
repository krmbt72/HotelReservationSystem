#include "service.h"

Service::Service(float cost, QString service)
{
    amount.push_back(cost);
    services.push_back(service);
}
std::vector<float> Service::getAmount()
{
    return amount;
}
std::vector<QString> Service::getService()
{
    return services;
}
QString Service::getDate()
{
    return date.toString();
}
void Service::setAmount(float cost)
{
    amount.pop_back();
    amount.push_back(cost);
}

void Service::setServices(QString service)
{
    services.pop_back();
    services.push_back(service);
}
float Service::transaction()
{
    float sum=0.0;
    sum += amount.back();
    return sum;
}

Service::~Service(){}
