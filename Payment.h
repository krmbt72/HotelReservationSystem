#ifndef PAYMENT_H
#define PAYMENT_H
#include <QDate>
#include <vector>
#include <string>
#include "reservation.h"
#include "service.h"

class Payment
{
private:
    static unsigned int billNumber;
    float amount;
    QString method;
    std::vector<QDate> billDates;
    std::vector<Customer> customers;
    std::vector<Reservation> reservations;
    std::vector<Service> services;

public:
    Payment(Reservation,Service);
    float getAmounts();
    QString getMethod();
    QString getBillDate();
    int getBillNumber();
    Customer getCustomer();
    Reservation getReservation();
    float calculate();
    QString print();
};

#endif // PAYMENT_H

