#ifndef RESERVATION_H
#define RESERVATION_H
#include "Customer.h"
#include "room.h"
#include <QDate>
#include <vector>

class Reservation
{
public:
    static unsigned int reservationNo;
    Reservation(Customer,Room,QDate);
    std::vector<Customer> getCustomers();
    std::vector<Room> getRooms();
    std::vector<QDate> getDates();
    void deleteCustomer(Customer);
    void addCustomer(Customer);
    void checkOut(Room);

private:
    std::vector<Customer> customers;
    std::vector<Room> rooms;
    std::vector<QDate> dates;
};

#endif // RESERVATION_H
