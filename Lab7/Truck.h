// Name: David Ra
// Email: dra@myseneca.ca
// Student ID: 101977205
// Lab 7
// Date: Nov 13th 2020
// SECTION: OOP244 NEE
//I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.
#pragma once
#include "Vehicle.h"
namespace sdds
{
	class Truck : public Vehicle { 
		double m_capacity;
		double m_load;
	public:
		Truck();
		Truck(const char* license, int year, double capacity, const char* address);
		~Truck();
		bool addCargo(double cargo);
		bool unloadCargo();
		ostream& write(ostream& os) const;
		istream& read(istream& in);
	};
	ostream& operator<<(ostream& os, const Truck& N);
	istream& operator>>(istream& istr, Truck& N);

}