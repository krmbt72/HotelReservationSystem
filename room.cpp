#include "room.h"

Room::Room(QString _title,QString _type,float _price)
{
    title=_title;
    type=_type;
    price=_price;
    clean=1;
    empty=0;
}

QString Room::getTitle()
{
    return title;
}

QString Room::getType()
{
    return type;
}

float Room::getPrice()
{
    return price;
}

void Room::setPrice(float _price)
{
    price = _price;
}

bool Room::isClean()
{
    return clean;
}

bool Room::isEmpty()
{
    return empty;
}
