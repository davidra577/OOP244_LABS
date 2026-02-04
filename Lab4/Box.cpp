// Name: David Ra
// Email: dra@myseneca.ca
// Student ID: 101977205
// Lab 4 (PART 1)
// Date: OCT 15th 2020
// SECTION: OOP244 NEE
//I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include "Box.h"
using namespace std;

namespace sdds {
	Box::Box() 
	{
		m_width = 12;
		m_length = 12;
		m_height = 12;
		m_contentName = nullptr;
		m_contentVolume = 0;
	}

	Box::~Box() {
		delete[] m_contentName;
		//m_contentName = nullptr;
	}

	Box::Box(int sideLength, const char* contentName)
	{
		m_contentName = nullptr;
		if (sideLength > 4 && sideLength < 37) {
			m_width = sideLength;
			m_length = sideLength;
			m_height = sideLength;
			m_contentVolume = 0;
			setName(contentName);
		}
		else {
			setUnusable(); 
		}
	}
	Box::Box(int width, int height, int length, const char* contentName)
	{
		m_contentName = nullptr;
		if (width > 4 && width < 37 && height > 4 && height < 37 && length > 4 && length < 37) {
			m_width = width;
			m_height = height;
			m_length = length;
			m_contentVolume = 0;
			setName(contentName);
		}
		else {
			setUnusable();
		}
	}

	void Box::setName(const char* Cstr) 
	{
		int size;
		if (Cstr != NULL) {
			delete[] m_contentName;
			size = strlen(Cstr) + 1;
			m_contentName = new char[size];
			strcpy(m_contentName, Cstr);
		}
	}

	void Box::setUnusable() 
	{
		delete[] m_contentName;
		m_contentName = nullptr;
		m_width = -1;
		m_height = -1;
		m_length = -1;
		m_contentVolume = -1;
	}

	bool Box::isUnusable()const 
	{
		bool ok = false;
		if (m_width == -1 ) {
			ok = true;
		}
		return ok;
	}

	bool Box::hasContent()const 
	{
		bool ok = false;
		if (quantity() > 0) {
			ok = true;
		}

		return ok;
	}

	int Box::capacity()const 
	{
		int product = 0;
		product = m_width * m_height * m_length;
		return product;
	}

	int Box::quantity()const 
	{
		return m_contentVolume;
	}

	Box& Box::setContent(const char* contentName) 
	{
		if (hasContent() && m_contentName != nullptr) {
			setUnusable();
		}
		else {
			setName(contentName);
		}
		return *this;
	}
	std::ostream& Box::display()const 
	{
		if (!isUnusable()) {
			if (m_contentName == nullptr) {
				cout.fill('.');
				cout.width(30);
				cout << left << "Empty box";
			}
			else {
				cout.fill('.');
				cout.width(30);
				cout << left << m_contentName;
			}
			cout << "  ";
			cout.fill('0');
			cout.width(2);

			cout << right << m_width << 'x';

			cout.fill('0');
			cout.width(2);
			cout << right << m_height << 'x';

			cout.fill('0');			
			cout.width(2);
			cout << right << m_length << "  ";

			cout.fill(' ');
			cout.width(6);
			cout << right << quantity();	
			cout << "/";
			cout << capacity() << " C.I.";
			
		}
		else {
			cout << "Unusable box, discard the content, and recycle.";
		}
		return cout;
	}	
	Box& Box::add(int quantity)
	{
		int sum;
		sum = Box::quantity() + quantity;
		if (quantity > 0 && (sum < capacity())) {
			m_contentVolume = m_contentVolume + quantity;
		}
		else {
			setUnusable();
		}
		return *this;
	}

	Box& Box::add(Box& B) {
		if (m_contentName == nullptr || quantity() == 0) {
			setContent(B.m_contentName);
		}
		if (strcmp(m_contentName, B.m_contentName) == 0) {
			if (quantity() + B.quantity() <= capacity()) {
				add(B.quantity());
				B.m_contentVolume = 0;
			}
			else {
				B.m_contentVolume -= (capacity() - quantity());
				m_contentVolume = capacity();
			}
		}
		else {
			if (quantity() + B.quantity() <= capacity()) {
				B.m_contentVolume = 0;
			}
			else {
				B.m_contentVolume -= (capacity() - quantity());
			}
			setUnusable();
		}
		return *this;
	}

}