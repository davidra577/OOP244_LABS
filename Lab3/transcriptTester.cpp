// Workshop 3:
// Version: 0.9
// Date: 10/02/2020
// Author: Fardad Soleimanloo
// Description:
// This file tests the lab section of your workshop
/////////////////////////////////////////////
// Name: David Ra
// Email: dra@myseneca.ca
// Student ID: 101977205
// Lab 3 (PART 1)
// Date: OCT 7th 2020
// SECTION: OOP244 NEE
//I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.
#include "Transcript.h"
using namespace sdds;
int main() {
	Transcript T;
	T.init("Fred Soley", 5);
	T.add("EAC150", 65);
	T.add("DBS211", 85);
	T.add("DCF255", 75);
	T.add("OOP244", 95);
	//Premature call to display will result an error
	T.display();
	T.add("WEB222", 100);
	T.display();
	T.deallocate();
	return 0;
}