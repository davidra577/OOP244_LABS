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
#include <cstring>
#include <cstdio>
#include "School.h"
#include "File.h"

using namespace std;

namespace sdds
{
    School schools[50];

    // loads all the schools into the global array of structures.
    bool loadSchools()
    {
        School sc;
        int snum = 0; // number of schools read
        bool ok = true;
        if (openFile("school.dat"))
        {
            while (ok && snum < 50)
            {
                ok = readCodes(sc.sc_code) &&
                    readExtension(&sc.sc_ext);
                                                     
                if (ok) schools[snum++] = sc;
            }
            closeFile();
        }
        return snum == 50;
    }

    // returns true if 
    bool hasCode(const School* scp, const char code[])
    {
        
        bool found = false;
 
       
        if (strstr(scp->sc_code, code))
        {
            found = true;
        }
        cout << "first code : " << scp->sc_code << endl;
        cout << "2nd code : " << code << endl;
        
        return found;
    }

    // displays the school extension info
    void displayExtension(const School* scp)
    {
        cout << "416 491 5050 x " << scp->sc_ext << endl;
    }

    // displays all codes
    void displaySchoolWithCode(const char code[])
    {
        int i, j;
        for (i = 0, j = 1; i < 50; i++)
        {
            if (hasCode(&schools[i], code))
            {
                displayExtension(&schools[i]);
                j++;
            }
           
        }
        if (j == 1)
        {
            cout << code << " School code not found!" << endl;
        }
    }
}