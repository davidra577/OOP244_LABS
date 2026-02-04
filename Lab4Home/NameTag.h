#pragma once
// Name: David Ra
// Email: dra@myseneca.ca
// Student ID: 101977205
// Lab 4 (PART 2)
// Date: OCT 18th 2020
// SECTION: OOP244 NEE
//I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.

namespace sdds {
	class NameTag {
		char* m_name;
		int m_extNum;
		void setEmpty();
		void setName(int length, const char* name);
		bool valid();
	public:
		NameTag();
		~NameTag();
		NameTag(const char* name);
		NameTag(const char* name, int num);
		void print();
		NameTag& read();
		void flushkeys();
		bool yes();
		void deallocate();
	};
}