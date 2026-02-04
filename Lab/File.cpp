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
#include "File.h"

using namespace std;


FILE* fptr;

// opens the data file and returns true is successful
bool openFile(const char filename[])
{
    fptr = fopen(filename, "r");
    return fptr != NULL;
}

// closes the data file
void closeFile()
{
    if (fptr) fclose(fptr);
}

bool readCodes(char code[])
{
    return fscanf(fptr, "%s", code) == 1;
}

// reads the extension global fptr File pointer
// returns true if successful
bool readExtension(int* ext)
{
    return fscanf(fptr, "%d\n", ext) == 1;
}
