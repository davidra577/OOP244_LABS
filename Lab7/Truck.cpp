// Name: David Ra
// Email: dra@myseneca.ca
// Student ID: 101977205
// Lab 7
// Date: Nov 13th 2020
// SECTION: OOP244 NEE
//I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.
#define _CRT_SECURE_NO_WARNINGS
#include <cstring>
#include <iostream>
#include "Truck.h"
using namespace std;

namespace sdds
{
	Truck::Truck()
	{
		m_capacity = 0;
		m_load = 0;
	}
	Truck::Truck(const char* license, int year, double capacity, const char* address)
	{
		new (this) Vehicle(license, year);
		m_capacity = capacity;
		m_load = 0;
		Vehicle::moveTo(address);
	}

	Truck::~Truck()
	{

	}
	bool Truck::addCargo(double cargo)
	{
		bool ok = false;
		if (m_load < m_capacity)
		{
			if ((cargo + m_load) > m_capacity)
			{
				m_load = m_capacity;
			}
			else
			{
				m_load = m_load + cargo;
			}
			ok = true;
		}
		return ok;
	}
	bool Truck::unloadCargo()
	{
		bool ok = true;
		if (m_load == 0) {
			ok = false;
		}
		m_load = 0;
		return ok;
	}
	ostream& Truck::write(ostream& os) const
	{
		Vehicle::write(os) << " | " << m_load << "/" << m_capacity;
		return os;
	}
	istream& Truck::read(istream& in)
	{
		Vehicle::read(in);
		cout << "Capacity: ";
		in >> m_capacity;
		cout << "Cargo: ";
		in >> m_load;
		return in;
	}

	ostream& operator<<(ostream& os, const Truck& N)
	{
		return N.write(os);
	}
	istream& operator>>(istream& istr, Truck& N)
	{
		return N.read(istr);
	}

}