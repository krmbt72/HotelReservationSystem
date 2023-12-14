#ifndef SERVICE_H
#define SERVICE_H
#include <QDate>

class Service
{
private:
    std::vector<float> amount;
    std::vector<QString> services;
    QDate date;
public:
    Service(float amount, QString services);
    ~Service();
    std::vector<float> getAmount();
    std::vector<QString> getService();
    QString getDate();
    void setAmount(float cost);
    void setServices(QString service);
    float transaction();

};
#endif // SERVICE_H

/*
serviceType {   Dinner,
        Wake_up,
        Breakfast_in_the_room
*/
