#ifndef ROOM_H
#define ROOM_H
#include <QString>
#include "Customer.h"

class Room
{
public:
    Room(QString,QString,float);
    QString getTitle();
    QString getType();
    float getPrice();
    void setPrice(float);
    bool isClean();
    bool isEmpty();


private:
    QString title;
    QString type;
    float price;
    bool clean=0;
    bool empty=0;
};

#endif // ROOM_H
