// register.cpp

#include <iostream>
#include <string>

#include "tools.h"
#include "register.h"
#include "Person.cpp"

using namespace std;
using namespace kttools;


namespace ktregister
{
    void setUsername(string &username)
    {
        username = getString("\tEnter a username: ");
        /*
        do
        {
            username = getString("\tEnter a username: ");
            if (!filesystem::exists(username + ".txt"))
                return;
            cout << "ERROR: Username is already taken..." << endl;
        } while (true);
        */
    }

    void setPassword(string &password)
    {
        bool upper, lower, digit;
        do
        {
            upper = false;
            lower = false;
            digit = false;

            password = getString("\tEnter a password: ");

            for (int i = 0; i < password.length(); i++)
            {
                if (isUppercase(password.at(i)))
                    upper = true;
                if (isLowercase(password.at(i)))
                    lower = true;
                if (isDigit(password.at(i)))
                    digit = true;
            }
            
            if (password.length() < 8)
                cout << "Password must be at least 8 characters long..." << endl;
            if (!upper)
                cout << "Password must have at least one uppercase letter..." << endl;
            if (!lower)
                cout << "Password must have at least one lowercase letter..." << endl;
            if (!digit)
                cout << "Password must have at least one number..." << endl;
            
            if (password.length() > 8 && upper && lower && digit)
                return;
        } while (true);
        
    }

    void setUserInformation(string username, string password)
    {
        Person P;
        P.setName(getString("\tPlease enter your name: "));
        P.setAge(getPositiveInt("\tPlease enter your age: "));
        P.setID(getString("\tPlease enter your ID (123-456-7890): "));
        P.setBirthDate(getString("\tPlease enter your birthdate (MM/DD/YYYY): "));
        P.setOccupation(getString("\tPlease enter your occupation: "));

    }
}