// Name: David Ra
// Email: dra@myseneca.ca
// Student ID: 101977205
// Lab 1 (PART 2 HOME)
// Date: Sept 27th 2020
//I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.
#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include "File.h"


namespace sch {
    FILE* fptr;

    // opens the data file and returns true is successful
    bool openFile(const char filename[]) {
        fptr = fopen(filename, "r");
        return fptr != NULL;
    }

    // closes the data file
    void closeFile() {
        if (fptr) fclose(fptr);
    }

    // reads the title of the movie from the global fptr File pointer
    // returns true if successful
    bool readCode(char code[]) {
        return fscanf(fptr, " %s ", code) == 1;
    }

    // reads the year of the movie from the global fptr File pointer
    // returns true if successful
    bool readextNum(int* extNum) {
        return fscanf(fptr, "%d\n", extNum) == 1;
    }

}