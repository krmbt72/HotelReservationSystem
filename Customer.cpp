#include "Customer.h"

Customer::Customer(QString firstName, QString lastName, short age, Gender gender, QString phoneNumber, QString email)
    : Human(firstName, lastName, age, gender)
{
    this->phoneNumber = phoneNumber;
    this->email = email;
}

QString Customer::getPhoneNumber() const
{
    return phoneNumber;
}

QString Customer::getEmail() const
{
    return email;
}


void Customer::setPhoneNumber(QString phoneNumber)
{
    this->phoneNumber = phoneNumber;
}

void Customer::setEmail(QString email)
{
    this->email = email;
}
