// Name: David Ra
// Email: dra@myseneca.ca
// Student ID: 101977205
// Lab 3 (PART 2)
// Date: OCT 11th 2020
// SECTION: OOP244 NEE
//I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.
#define _CRT_SECURE_NO_WARNINGS
#include "Bar.h"
#include <iostream>
#include <cstring>
using namespace std;

namespace sdds {

	void Bar::set(const char* name, char ch, int value) {
		if (getValid(value)) {
			strcpy(title, name);
			barValue = value;
			a = ch;
		}
		else {
			setEmpty();
		}
	}

	bool Bar::getValid(int value) {
		bool ok = true;
		if (value > 100 || value < 0) {
			ok = false;
			validStatus = false;
		}
		else {
			validStatus = true;;
		}
		return ok;
	}

	void Bar::draw()const {
		int value = barValue / 2;
		if (validStatus) {
			cout.width(20); cout.fill('.'); cout << left << title;
			cout << "|";
			for (int i = 0; i < value; i++) {
				cout << a;
			}
			cout << '\n';
		}
	}

	void Bar::setEmpty() {
		title[0] = '\0';
		a = '\0';
		barValue = -1;
		validStatus = false;
	}
}