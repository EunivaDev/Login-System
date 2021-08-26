// tools.h

#ifndef TOOLS_H
#define TOOLS_H

using namespace std;

namespace kttools
{
    int getInt(string prompt);
    int getBoundedInt(string prompt, int low, int high);
    int getPositiveInt(string prompt);
    int getNonnegativeInt(string prompt);

    double getDouble(string prompt);
    double getBoundedDouble(string prompt, double low, double high);
    
    char getChar(string prompt);
    char getChar(string prompt, string list);

    string getString(string prompt);
    string getLine(string prompt);

    int randomInt(int low, int high);

    bool isUppercase(char c);
    bool isLowercase(char c);
    bool isDigit(char c);
    bool isLetter(char c);


}




#endif
