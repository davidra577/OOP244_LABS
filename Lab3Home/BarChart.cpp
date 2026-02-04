// Name: David Ra
// Email: dra@myseneca.ca
// Student ID: 101977205
// Lab 3 (PART 2)
// Date: OCT 11th 2020
// SECTION: OOP244 NEE
//I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.
#define _CRT_SECURE_NO_WARNINGS
#include "Bar.h"
#include "BarChart.h"
#include <iostream>
#include <cstring>
using namespace std;

namespace sdds {
	
	bool BarChart::isValid() {
		bool ok = true;
		if (m_added != m_size) {
			ok = false;
		}
		return ok;
	}

	void BarChart::draw()const {

		if (m_added == m_size) {
			cout << m_chartTitle << endl;

			for (int i = 0; i < 71; i++) {
				cout << '-';
			}
			cout << '\n';


			for (int i = 0; i < m_size; i++) {
				m_Bars[i].draw();
			}

			for (int i = 0; i < 71; i++) {
				cout << '-';
			}
			cout << '\n';
		}
		else {
			cout << "Invalid Chart!" << endl;
		}
	}



	void BarChart::init(const char* title, int noOfSampels, char fill) {
		if (title != NULL || noOfSampels > 0) {
			m_size = noOfSampels;
			m_added = 0;
			ch = fill;
			m_chartTitle = new char[strlen(title) + 1];
			strcpy(m_chartTitle, title);
			m_Bars = new Bar[m_size];
		}
		else {
			setEmpty();
		}
	}

	void BarChart::add(const char* bar_title, int value) {
		if (isValid() != true)  {
			m_Bars[m_added].set(bar_title, ch, value);
			m_added++;
		}
	}

	void BarChart::deallocate() {
		int i = 0;
		while (i < m_size) {
			delete[] m_Bars;
			m_Bars = nullptr;
			i++;
		}
		delete[] m_chartTitle;
		m_chartTitle = nullptr;
	}

	void BarChart::setEmpty() {
		m_chartTitle = nullptr;
		m_Bars = nullptr;
		m_added = -1;
		m_size = -1;
		ch = ' ';
	}
}