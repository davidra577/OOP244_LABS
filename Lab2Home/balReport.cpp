// Workshop 2: 
// Version: 0.9
// Date: 09/25/2020
// Author: Fardad Soleimanloo
// Reviewed by: Michael Huang
// Description:
// This file tests the DIY section of your workshop
// Do not modify your code
/////////////////////////////////////////////
// Name: David Ra
// Email: dra@myseneca.ca
// Student ID: 101977205
// Lab 2 (PART 2)
// Date: OCT 3rd 2020
// SECTION: OOP244 NEE
//I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.

#include "Account.h"
using namespace sdds;
int main() {
   if (load("accounts.csv")) {
      display();
   }
   deallocateMemory();
   return 0;
}