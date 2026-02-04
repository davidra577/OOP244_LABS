// Name: David Ra
// Email: dra@myseneca.ca
// Student ID: 101977205
// Lab 1 (PART 2 HOME)
// Date: Sept 27th 2020
//I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
#include "School.h"
#include "File.h"
using namespace std;

namespace sch {
    school schools[50];
    bool loadSchool() {
        school sls;
        int mnum = 0; 
        bool ok = true;
        if (openFile("schools.dat")) {
            while (ok && mnum < 50) {
                ok = readCode(sls.schoolCode) &&
                    readextNum(&sls.extNumber);
                if (ok) schools[mnum++] = sls;
            }
            closeFile();
        }
        return mnum == 50;
    }

    bool hasSchool(const school* schl, const char schlCode[]) {
        bool found = false;
        if (strstr(schl->schoolCode, schlCode)) {
           found = true;
        }
        cout << "first code : " << schl->schoolCode << endl;
        cout << "2nd code : " << schlCode << endl;
        return found;
    }

    // displays the movie info
    void displaySchool(const school* schl) {
        cout << "416 491 5050 x " << schl->extNumber << endl;
    }

    void displayMatchingSchool(const char schlCode[]) {
        int i, j;
        for (i = 0, j = 1; i < 50; i++) {
            if (hasSchool(&schools[i], schlCode)) {
                displaySchool(&schools[i]);
                j++;
      
            }
        }
        if (j == 1) {
            cout << schlCode << " School code not found!" << endl;
        }
    }


}