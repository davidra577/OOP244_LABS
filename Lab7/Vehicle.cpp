#define _CRT_SECURE_NO_WARNINGS
#include <cstring>
// Name: David Ra
// Email: dra@myseneca.ca
// Student ID: 101977205
// Lab 7
// Date: Nov 13th 2020
// SECTION: OOP244 NEE
//I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.
#include <iostream>
#include <iomanip>
#include "Vehicle.h"
using namespace std;

namespace sdds
{
	Vehicle::Vehicle()
	{
		setEmpty();
	}
	Vehicle::Vehicle(const char* plate, int year)
	{
		setEmpty();
		if (plate != nullptr && year > 0)
		{
			strcpy(m_address, "Factory");
			m_year = year;
			strcpy(m_plate, plate);
		}

	}

	void Vehicle::setEmpty()
	{
		m_plate[0] = '\0';
		m_address[0] = '\0';
		m_year = 0;
	}

	Vehicle::~Vehicle()
	{

	}
	void Vehicle::moveTo(const char* address)
	{
		if (strcmp(m_address,address) != 0)
		{
			cout << "|" << setw(8) << right << m_plate;
			cout << "| |" << setw(20) << right << m_address;
			cout << " ---> ";
			cout << setw(20) << left << address << "|" << endl;
			strcpy(m_address, address);
		}
	}

	ostream& Vehicle::write(ostream& os) const
	{
		os << "| " << this->m_year << " | " << this->m_plate << " | " << this->m_address;
		return os;
	}

	istream& Vehicle::read(istream& in) 
	{
		cout << "Built year: ";
		in >> m_year;
		cout << "License plate: ";
		in >> m_plate;
		cout << "Current location: ";
		in >> m_address;
		return in;
	}
	ostream& operator<<(ostream& os, const Vehicle& N)
	{
		return N.write(os);
	}

	istream& operator>>(istream& istr, Vehicle& N)
	{
		return N.read(istr);
	}

}