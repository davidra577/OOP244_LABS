/* ---------------------
Name: Apurva Raval
Seneca email: araval4@myseneca.ca
Student ID: 115766198
Date: 25 September 2020
Section: NFF
Workshop: 1 part 2
   --------------------- */

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "School.h"

using namespace std;


// flushes the keyboard
void flushkeys()
{
    while (cin.get() != '\n');
}

// returns true if user enter y or Y
bool yes()
{
    char ch = cin.get();
    flushkeys();
    return ch == 'y' || ch == 'Y';
}

int main()
{
    bool done = false;
    char code[6];
    {
        using namespace sdds;
        loadSchools();
    }

    cout << "Seneca School Extension search." << endl << endl;
    while (!done)
    {
        cout << "Enter the School code: ";
        cin >> code;
        flushkeys();
        {
            using namespace sdds;
            displaySchoolWithCode(code);
        }

        cout << "Do another search? (Y)es: ";
        done = !yes();
        cout << endl;
    }
  
    cout << "Goodbye!" << endl;
    return 0;
}
