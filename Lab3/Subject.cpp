// Name: David Ra
// Email: dra@myseneca.ca
// Student ID: 101977205
// Lab 3 (PART 1)
// Date: OCT 7th 2020
// SECTION: OOP244 NEE
//I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.
#define _CRT_SECURE_NO_WARNINGS
#include "Subject.h"
#include <iostream>
#include <cstring>
using namespace std;
namespace sdds {

	Subject::Subject() {
		m_code[0] = '\0';
		m_mark = -1;
	}

	Subject::~Subject() {
		setEmpty();

	}

	char Subject::grade()const {
		char grade = 'N';
		if (0 <= m_mark && m_mark < 50) {
			grade = 'F';
		}
		else if (50 <= m_mark && m_mark < 60) {
			grade = 'D';
		}
		else if (60 <= m_mark && m_mark < 70) {
			grade = 'C';
		}
		else if (70 <= m_mark && m_mark < 80) {
			grade = 'B';
		}
		else if (80 <= m_mark && m_mark <= 100) {
			grade = 'A';
		}

		return grade;
	}

	void Subject::setEmpty() {
		if (m_code[0] != '\0' || m_mark != -1) {
			m_mark = -1;
			m_code[0] = '\0';
		}
	}

	void Subject::set(const char* code, int mark) {
		if (mark < 0 || mark > 100) {
			setEmpty();
		}
		else {
			strcpy(m_code, code);
			m_mark = mark;
		}
	}

	float Subject::scale4()const {
		float gpa = 0;
		if (0 <= m_mark && m_mark < 50) {
			gpa = 0.0;
		}
		else if (50 <= m_mark && m_mark < 60) {
			gpa = 1.0;
		}
		else if (60 <= m_mark && m_mark < 70) {
			gpa = 2.0;
		}
		else if (70 <= m_mark && m_mark < 80) {
			gpa = 3.0;
		}
		else if (80 <= m_mark && m_mark <= 100) {
			gpa = 4.0;
		}
		return gpa;
	}

	bool Subject::isValid()const {
		bool ok = false;
		if (m_mark >= 0) {
			ok = true;
		}
		return ok;
	}

	void Subject::display()const {
		if (isValid()) {
			cout.width(15); cout << std::left << m_code; 
			cout.width(3); cout << std::right << m_mark; 
			cout.width(10); cout << std::right << grade() << endl;
		}
	}
}

