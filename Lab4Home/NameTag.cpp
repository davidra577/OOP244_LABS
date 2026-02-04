// Name: David Ra
// Email: dra@myseneca.ca
// Student ID: 101977205
// Lab 4 (PART 2)
// Date: OCT 18th 2020
// SECTION: OOP244 NEE
//I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <iomanip>
#include "NameTag.h"
using namespace std;
namespace sdds {
	NameTag::NameTag()
	{
		m_name = nullptr;
		m_extNum = 0;
	}

	NameTag::~NameTag() 
	{
		delete[] m_name;
		m_name = nullptr;
	}
	NameTag::NameTag(const char* name)
	{
		m_name = nullptr;
		m_extNum = 0;
		if (name != NULL) {
			int length = 0;
			length = strlen(name);
			setName(length, name);
		}
	}

	
	NameTag::NameTag(const char* name, int num) 
	{
		m_name = nullptr;
		m_extNum = 0;
		if (name != NULL && num >= 10000 && num <= 99999) {
			int length = 0;
			length = strlen(name);
			setName(length, name);
			m_extNum = num;
		}
		else {
			setEmpty();
		}
	}

	void NameTag::setEmpty() 
	{
		m_name = nullptr;
	}
	void NameTag::print() 
	{
		if (!valid()) {
			cout << "EMPTY NAMETAG!" << endl;
		}

		else {
			int length = 0;
			length = strlen(m_name);
			int firstValue, secValue, thirdValue;
			int defaultValue = 0;
			if (length > 20) {
				defaultValue = 44;
			}
			else {
				defaultValue = 24;
			}
			firstValue = defaultValue - 1;
			secValue = defaultValue - 3;
			thirdValue = defaultValue - 14;

			cout << setfill('*') << setw(defaultValue) << '*' << endl;
			cout << '*' << setfill(' ') << setw(firstValue) << right << '*' << endl;

			cout << "* ";
			cout << setw(secValue) << left << m_name << right << '*' << endl;

			cout << '*' << setfill(' ') << setw(firstValue) << right << '*' << endl;

			cout << "* Extension: ";
			if (m_extNum == 0) {
				cout << setw(thirdValue) << left << "N/A" << right << '*' << endl;
			}
			else {
				cout << setw(thirdValue) << left << m_extNum << right << '*' << endl;
			}

			cout << '*' << setfill(' ') << setw(firstValue) << right << '*' << endl;

			cout << setfill('*') << setw(defaultValue) << '*' << endl;
		}
	}

	NameTag& NameTag::read() 
	{

		if (valid()) {
			deallocate();
		}
		m_name = new char[40 + 1];
		bool done = false;
		char* temp = new char[40 + 1];
		int tempNum = 0;
		bool ok = false;
		cout << "Please enter the name: ";
		cin.get(temp, 40);
		flushkeys();
		cout << "Would you like to enter an extension? (Y)es/(N)o: ";

		done = yes();

		if (done) {
			cout << "Please enter a 5 digit phone extension: ";
			while (!ok) 
			{
				cin >> tempNum;
				flushkeys();
				if (tempNum < 10000 || tempNum > 99999) {
					cout << "Invalid value [10000<=value<=99999]: ";
				}
				else
				{
					ok = true;
				}
			}
		}
		else {
			tempNum = 0;
		}


		strcpy(m_name, temp);
		m_extNum = tempNum;
		return *this;
	}


	void NameTag::flushkeys() 
	{
		while (cin.get() != '\n');
	}

	bool NameTag::yes()
	{
		char ch = cin.get();
		flushkeys();
		return ch == 'y' || ch == 'Y';
	}

	void NameTag::deallocate() 
	{
		delete[] m_name;
		m_name = nullptr;
	}

	void NameTag::setName(int length, const char* name)
	{
		if (length > 40) {
			m_name = new char[length + 1];
			strcpy(m_name, name);
			m_name[40] = '\0';
		}
		else if (length < 21) {
			m_name = new char[20 + 1];
			strcpy(m_name, name);
		}
		else {
			m_name = new char[length + 1];
			strcpy(m_name, name);
		}
	}

	bool NameTag::valid() 
	{
		bool ok = false;
		if (m_name != nullptr) {
			ok = true;
		}
		return ok;
	}
}