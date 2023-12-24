#ifndef RESERVATION_H
#define RESERVATION_H

#include <string>
#include <vector>

#include "Room.h"
#include "Service.h"

class Reservation
{
public:
    Reservation(const std::string& title, const std::string& type, const Date& date, const Room& room, const std::vector<Service>& services);

    const std::string& getTitle() const;
    const std::string& getType() const;
    const Date& getDate() const;
    const Room& getRoom() const;
    const std::vector<Service>& getServices() const;

    void setTitle(const std::string& title);
    void setType(const std::string& type);
    void setDate(const Date& date);
    void setRoom(const Room& room);
    void addService(const Service& service);
    void removeService(const Service& service);

private:
    std::string _title;
    std::string _type;
    Date _date;
    Room _room;
    std::vector<Service> _services;
};

#endif // RESERVATION_H
