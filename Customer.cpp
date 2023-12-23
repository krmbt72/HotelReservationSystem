#include "Customer.h"

Customer::Customer(const Human& human,QString phoneNo,QString email):Human(human)
{
    phoneNumber = phoneNo;
    eMail = email;
}

Customer::Customer(const Human& human):Human(human)
{
    phoneNumber = "No phone number";
    eMail = "No email";
}

Customer::Customer(const Customer& client):Human(client)
{
    phoneNumber = client.phoneNumber;
    eMail = client.eMail;
}

QString Customer::getPhoneNumber()
{
    return phoneNumber;
}

QString Customer::getEMail()
{
    return eMail;
}

void Customer::setPhoneNumber(QString phoneNo)
{
    phoneNumber = phoneNo;
}

void Customer::setEMail(QString email)
{
    eMail = email;
}

QString Customer::print()
{
    return Human::print()+"\t"+phoneNumber+"\t"+eMail;
}
