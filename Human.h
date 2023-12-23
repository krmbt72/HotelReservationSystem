#ifndef HUMAN_H
#define HUMAN_H
#include <QString>
class Human
{
public:
    Human(QString,QString,short,QString);
    Human(QString,QString);
    Human(const Human&);
    QString getName();
    QString getSurname();
    QString getFullname();
    short getAge();
    QString getGender();
    virtual QString print();
    bool operator == (const Human&);

private:
    QString firstName;
    QString lastName;
    short age;
    QString gender;
public:

};

#endif // HUMAN_H
