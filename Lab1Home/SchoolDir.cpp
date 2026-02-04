// Name: David Ra// Name: David Ra
// Email: dra@myseneca.ca
// Student ID: 101977205
// Lab 1 (PART 2 HOME)
// Date: Sept 27th 2020
//I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "School.h"
using namespace std;
using namespace sch;


// flushes the keyboard
void flushkeys() {
    while (cin.get() != '\n');
}

// returns true if user enter y or Y
bool yes() {
    char ch = cin.get();
    flushkeys();
    return ch == 'y' || ch == 'Y';
}

int main() {
    bool done = false;
    char schoolCode[50];
    loadSchool();
    cout << "Seneca School Extension search." << endl << endl;
    while (!done) {
        cout << "Enter the School code: ";
        cin >> schoolCode;
        flushkeys();
        displayMatchingSchool(schoolCode);
        cout << "Do another search? (Y)es: ";
        done = !yes();
        cout << endl;
    }
    cout << "Goodbye!" << endl;
    return 0;
}
