#include "Human.h"

Human::Human(QString name,QString surname,short age,QString gender)
{
    firstName = name;
    lastName = surname;
    this->age = age;
    this->gender = gender;
}

Human::Human(QString name,QString surname)
{
    firstName = name;
    lastName = surname;
    age = 18;
    gender = "MALE";
}

Human::Human(const Human& human)
{
    firstName = human.firstName;
    lastName = human.lastName;
    age = human.age;
    gender = human.gender;
}

QString Human::getName()
{
    return firstName;
}

QString Human::getSurname()
{
    return lastName;
}

QString Human::getFullname()
{
    return firstName+lastName;
}

short Human::getAge()
{
    return age;
}

QString Human::getGender()
{
    return gender;
}

bool Human::operator==(const Human& human)
{
    if( this == &human)
        return 1;
    else
        return 0;
}

QString Human::print()
{
    return firstName+"\t"+lastName+"\t"+age+"\t"+ gender;
}
