#pragma once
// Name: David Ra
// Email: dra@myseneca.ca
// Student ID: 101977205
// Lab 1 (PART 2 HOME)
// Date: Sept 27th 2020
//I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.
#pragma once

#ifndef sch_Movie_h // replace with relevant names
#define sch_Movie_h
namespace sch {

    struct school {
        char schoolCode[5];
        int extNumber;
    };
    bool loadSchool();
    bool hasSchool(const school* schl, const char schlCode[]);
    void displaySchool(const school* schl);
    void displayMatchingSchool(const char schlCode[]);

}
#endif
