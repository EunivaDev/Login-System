// tools.cpp


#include <string>
#include <iostream>
#include <time.h>

using namespace std;

namespace kttools
{
    int getInt(string prompt)
    {
        while (true)
        {
            int input;
            cout << prompt;
            cin >> input;
            cin.ignore(999, '\n');
            if (!cin.fail())
                return input;
            cin.clear();
            cin.ignore(999, '\n');
            cout << "Invalid format. Please try again..." << endl;
        }
    }

    int getBoundedInt(string prompt, int low, int high)
    {
        while (true)
        {
            int input = getInt(prompt);
            if (low <= high && input <= high)
                return input;
            cout << "Value must be between (" << low << ".." << high << "). Please try again..." << endl;
        }
    }

    int getPositiveInt(string prompt)
    {
        return getBoundedInt(prompt, 1, INT_MAX);
    }

    int getNonnegativeInt(string prompt)
    {
        return getBoundedInt(prompt, 0, INT_MAX);
    }


    double getDouble(string prompt)
    {
        while (true)
        {
            double input;
            cout << prompt;
            cin >> input;
            cin.ignore(999, '\n');
            if (!cin.fail())
                return input;
            cin.clear();
            cin.ignore(999, '\n');
            cout << "Invalid format. Please try again..." << endl;
        }
    }

    double getBoundedDouble(string prompt, double low, double high)
    {
        while (true)
        {
            double input = getDouble(prompt);
            if (low <= high && input <= high)
                return input;
            cout << "Value must be between (" << low << ".." << high << "). Please try again..." << endl;
        }
    }


    char getChar(string prompt)
    {
        while (true)
        {
            char input;
            cout << prompt;
            cin >> input;
            cin.ignore(999, '\n');
            if (!cin.fail())
                return input;
            cin.clear();
            cin.ignore(999, '\n');
            cout << "Invalid input. Please try again..." << endl;
        }
    }

    char getChar(string prompt, string list)
    {
        while (true)
        {
            char input = getChar(prompt);
            for (int i = 0; i < list.length(); i++)
                if (input == list.at(i))
                    return input;
            cout << "Invalid input. Character must be from (" << list << "). Please try again..." << endl;
        }    
    }


    string getString(string prompt)
    {
        while (true)
        {
            string input;
            cout << prompt;
            cin >> input;
            cin.ignore(999, '\n');
            if (!cin.fail())
                return input;
            cin.clear();
            cin.ignore(999, '\n');
            cout << "Invalid format. Please try again..." << endl;
        }
    }

    string getLine(string prompt)
    {
        while (true)
        {
            string input;
            cout << prompt;
            getline(cin, input);
            if (!cin.fail())
                return input;
            cin.clear();
            cin.ignore(999, '\n');
            cout << "Invalid format. Please try again..." << endl;
        }
    }

    int randomInt(int low, int high)
    {
        static bool seeded = false;
        if (!seeded)
        {
            srand(unsigned(time(0)));
            seeded = true;
        }
        return low + rand() % (1 + high - low);
    }
}


