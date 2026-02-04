/* ---------------------
Name: Apurva Raval
Seneca email: araval4@myseneca.ca
Student ID: 115766198
Date: 25 September 2020
Section: NFF
Workshop: 1 part 2
   --------------------- */

#include <iostream>
#ifndef SDDS_FILE_H // replace with relevant names
#define SDDS_FILE_H

// Your header file content goes here
bool openFile(const char filename[]);
void closeFile();
bool readCodes(char code[]);
bool readExtension(int* ext);

#endif