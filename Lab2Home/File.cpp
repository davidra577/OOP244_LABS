// Name: David Ra
// Email: dra@myseneca.ca
// Student ID: 101977205
// Lab 2 (PART 2)
// Date: OCT 3rd 2020
// SECTION: OOP244 NEE
//I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.
#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include "File.h"

namespace sdds {
   FILE* fptr;
   bool openFile(const char filename[]) {
      fptr = fopen(filename, "r");
      return fptr != NULL;
   }
   int noOfRecords() {
      int noOfRecs = 0;
      char ch;
      while (fscanf(fptr, "%c", &ch) == 1) {
         noOfRecs += (ch == '\n');
      }
      rewind(fptr);
      return noOfRecs;
   }
   void closeFile() {
      if (fptr) fclose(fptr);
   }

   bool read(int& accNum) {
       return fscanf(fptr, "%d,", &accNum) == 1;
   }
   bool read(float& bal) {
       return fscanf(fptr, "%f\n", &bal) == 1;
   }

}