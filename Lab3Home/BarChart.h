// Name: David Ra
// Email: dra@myseneca.ca
// Student ID: 101977205
// Lab 3 (PART 2)
// Date: OCT 11th 2020
// SECTION: OOP244 NEE
//I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.
#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include "Bar.h"

namespace sdds {
	
	class BarChart {
		char* m_chartTitle;
		Bar* m_Bars;
		char ch;
		int m_size;
		int m_added;
	public:
		bool isValid();
		void init(const char* title, int noOfSampels, char fill);
		void add(const char* bar_title, int value);
		void draw()const;
		void deallocate();
		void setEmpty();
	};
	
}