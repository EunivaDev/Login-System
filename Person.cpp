// Person.cpp
// This is where the Person class will be stored

#ifndef PERSON_CPP
#define PERSON_CPP

#include <iostream>
#include <string>

#include "tools.h"

using namespace std;
using namespace kttools;


class Person
{
private:
    string name;
    int age;
    string ID;                 // must be in 123-456-7890 format
    string birthDate;       // must be in MM/DD/YYYY format
    string occupation;
    
public:

    Person();
    Person(string newName);

    string getName() const;
    void setName(string newName);

    int getAge() const;
    void setAge(int newAge);

    string getID() const;
    void setID(string newId);

    string getBirthDate() const;
    void setBirthDate(string newBD);

    string getOccupation() const;
    void setOccupation(string newOccupation);


};

Person::Person()
{
    name = "NA";
    age = -1;
    ID = "NA";
    birthDate = "NA";
    occupation = "NA";
}

Person::Person(string newName)
{
    this->name = newName;
    age = -1;
    ID = "NA";
    birthDate = "NA";
    occupation = "NA";
}

string Person::getName() const
{
    return name;
}

void Person::setName(string newName)
{
    this->name = newName;
}

int Person::getAge() const
{
    return age;
}

void Person::setAge(int newAge)
{
    this->age = newAge;
}

string Person::getID() const
{
    return ID;
}

void Person::setID(string newID)
{
    if (newID.length() == 12)
        if (newID.at(3) == '-' && newID.at(7) == '-')
            this->ID = newID;
        else
            cout << "ERROR: Invalid ID format... ( 123-456-7890 )" << endl;
    else
        cout << "ERROR: Invalid ID format... ( 123-456-7890 )" << endl;
}

string Person::getBirthDate() const
{
    return birthDate;
}

void Person::setBirthDate(string newBD)
{
    if (newBD.at(2) == '/' && newBD.at(5) == '/' && newBD.length() == 10)
        this->birthDate = newBD;
    else
        cout << "ERROR: Invalid Birth Date format... ( MM/DD/YYYY )" << endl;
}

string Person::getOccupation() const
{
    return occupation;
}

void Person::setOccupation(string newOccupation)
{
    this->occupation = newOccupation;
}








#endif