// Name: David Ra
// Email: dra@myseneca.ca
// Student ID: 101977205
// Lab 7
// Date: Nov 13th 2020
// SECTION: OOP244 NEE
//I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.
#pragma once
using namespace std;
namespace sdds
{
	class Vehicle 
	{
		char m_plate[9];
		char m_address[64];
		int m_year;
		void setEmpty();
	
	public:
		Vehicle(const char* plate, int year);
		Vehicle();
		~Vehicle();
		void moveTo(const char* address);
		ostream& write(ostream& os) const;
		istream& read(istream& in);
	};
	ostream& operator<<(ostream& os, const Vehicle& N);
	istream& operator>>(istream& istr, Vehicle& N);
}