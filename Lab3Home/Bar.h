// Name: David Ra
// Email: dra@myseneca.ca
// Student ID: 101977205
// Lab 3 (PART 2)
// Date: OCT 11th 2020
// SECTION: OOP244 NEE
//I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.
#pragma once

namespace sdds {
	class Bar {
		char title[20 + 1];
		char a;
		int barValue;
		bool validStatus;
	public:
		void setEmpty();
		void set(const char* name, char ch, int value);
		bool getValid(int value);
		void draw()const;
	};
}