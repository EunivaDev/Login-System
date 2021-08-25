// Developer: Kevin Tran
// Date: 8/24/2021
/* Description:
This is a basic login system where users would be able to create their username and password. Whilst doing so,
they are required to put in their personal information. The user is also able to log in, and if the login was successful,
the system will return their personal information.
*/

#include <iostream>
#include <string>

#include "tools.cpp"

using namespace std;
using namespace kttools;

void mainRegister();
void mainLogin();

int main()
{
    system("cls");
    int option;
    do
    {
        cout << endl;
        cout << "\t Login System by Kevin Tran (8/24/2021)" << endl;
        cout << "\t" << string(75, char(205)) << endl;
        cout << "\t 1. Register" << endl;
        cout << "\t 2. Login" << endl;
        cout << "\t" << string(75, char(196)) << endl;
        cout << "\t 0. Exit" << endl;
        cout << "\t" << string(75, char(196)) << endl;
        option = getBoundedInt("\t\t Option: ", 0, 2);

        switch (option)
        {
        case 0: break;
        case 1: system("cls"); mainRegister(); break;
        case 2: system("cls"); mainLogin(); break;
        }

        cout << endl;
        system("pause");

    } while (option != 0);

    cout << endl;
    cout << "The program will now end..." << endl;


    return 0;
}

void mainRegister()
{
    
}

void mainLogin()
{
    cout << "TESTING LOGIN" << endl;
}
