/* ---------------------
Name: Apurva Raval
Seneca email: araval4@myseneca.ca
Student ID: 115766198
Date: 25 September 2020
Section: NFF
Workshop: 1 part 2
   --------------------- */

#include <iostream>
#ifndef SDDS_SCHOOL_H // replace with relevant names
#define SDDS_SCHOOL_H

namespace sdds
{ 
    // Your header file content goes here
    struct School
    {
        char sc_code[6];
        int sc_ext;
    };

    bool loadSchools();
    bool hasCode(const School* scp, const char code[]);
    void displayExtension(const School* scp);
    void displaySchoolWithCode(const char code[]);
}


#endif
