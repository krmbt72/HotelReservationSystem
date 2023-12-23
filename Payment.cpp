#include "Payment.h"
/*
unsigned int Payment::billNumber = 0;

Payment::Payment(Customer customer, Reservation reservation, std::vector<Service> services)
{
    this->customers.push_back(customer);
    while(!services.empty())
    {
        amount += services.back().getAmount();
    }
    amount += (reservation.getRooms().pop_back());
    billDate.currentDate();
    billNumber++;
}



float Payment::getAmount()
{
    return amount;
}

QString Payment::getMethod()
{
    return method;
}


QString Payment::getBillDate()
{
    return billDates.pop_back();
}

int Payment::getBillNumber()
{
    return billNumber;
}

Customer Payment::getCustomer()
{
    return customers.pop_back();
}

Reservation Payment::getReservation()
{
    return reservations.pop_back();
}

float Payment::calculate()
{
    float sum = amount;
    while(!services.empty())
    {
        sum += services.pop_back().getAmount();
    }
    sum += reservations.pop_back().getRoom().getPrice();
    return sum;
}

QString Payment::print()
{
    std::string text;
    text = getBillNumber()+("\t")+
           getCustomer().print()+"\t"
           +getReservation().print();
    return QString::fromStdString(text);
}
*/
