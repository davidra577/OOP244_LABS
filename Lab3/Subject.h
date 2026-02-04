// Name: David Ra
// Email: dra@myseneca.ca
// Student ID: 101977205
// Lab 3 (PART 1)
// Date: OCT 7th 2020
// SECTION: OOP244 NEE
//I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.
#pragma once

namespace sdds {
	class Subject {
		char m_code[7]; // holds the subject code (exactly 6 characters)
		int m_mark;     // the mark out of 100
		char grade()const;
	public:
		Subject(); // default const
		~Subject(); // destructor
		void setEmpty();
		void set(const char* code, int mark);;
		float scale4()const;
		bool isValid()const;
		void display()const;
	};
}
