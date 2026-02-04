// Name: David Ra
// Email: dra@myseneca.ca
// Student ID: 101977205
// Lab 2 (PART 2)
// Date: OCT 3rd 2020
// SECTION: OOP244 NEE
//I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.

#ifndef SDDS_FILE_H_
#define SDDS_FILE_H_
namespace sdds {
   bool openFile(const char filename[]);
   void closeFile();
   int noOfRecords();
   bool read(int& accNum);
   bool read(float& bal);
}
#endif // !SDDS_FILE_H_
