#ifndef HUMAN_H
#define HUMAN_H

#include <QString>

enum Gender {Male, Female, Other};

class Human
{

private:

    QString firstName;
    QString lastName;
    short age;
    Gender gender;

public:

    Human(QString firstName, QString lastName, short age, Gender gender);

    QString getName() const;
    QString getSurname() const;
    QString getFullName() const;
    short getAge() const;
    Gender getGender() const;
};

#endif // HUMAN_H
