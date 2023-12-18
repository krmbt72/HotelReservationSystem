#ifndef SERVICE_H
#define SERVICE_H
#include <QDate>

class Service
{
private:
    float amount;
    QString type;
    QDate date;
public:
    Service(float, QString);
    float getAmount();
    QString getType();
    QString getDate();
    void setAmount(float);
    void setType(QString);
    float transaction(const Service&);

};
#endif // SERVICE_H

