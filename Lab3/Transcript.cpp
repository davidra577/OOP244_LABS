// Name: David Ra
// Email: dra@myseneca.ca
// Student ID: 101977205
// Lab 3 (PART 1)
// Date: OCT 7th 2020
// SECTION: OOP244 NEE
//I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.
#define _CRT_SECURE_NO_WARNINGS
#include "Transcript.h"
#include "Subject.h"
#include <iostream>
#include <cstring>
using namespace std;
namespace sdds {
	
	Transcript::Transcript() {
		m_studentName = nullptr;
		m_subjects = nullptr;
		m_noOfSubjects = 0;
		m_subjectsAdded = 0;
	}

	Transcript::~Transcript() {
		delete[] m_studentName;
		m_studentName = nullptr;
		delete[] m_subjects;
		m_subjects = nullptr;

	}

	void Transcript::setEmpty() {
		m_studentName = nullptr;
		m_subjects = nullptr;
	}

	bool Transcript::isValid()const {
		bool ok = true;
		int i = 0;
		if (m_studentName != nullptr || m_subjects != nullptr) {
			while (i < m_noOfSubjects && ok) {
				if (m_subjects[i].isValid()) {
					i++;
				}
				else
				{
					ok = false;
				}
			}
		}
		else
		{
			ok = false;
		}
		return ok;
	}

	void Transcript::Title()const {
		cout << m_studentName << endl;
		cout << "-----------------------------" << endl;
	}

	float Transcript::gpa()const {
		float sum = 0;
		float total = 0;
		for (int i = 0; i < m_noOfSubjects; i++) {
			sum = sum + m_subjects[i].scale4();
		}
		total = sum / m_noOfSubjects;
		return total;
	}

	void Transcript::footer()const {
		cout << "-----------------------------" << endl;
		cout << "                     " << "GPA:";
		cout.width(4); cout.precision(1); cout << std::right << fixed << gpa() << endl;
	}

	void Transcript::init(const char* studentName, int noOfSubjects) {
		if (studentName != NULL || noOfSubjects > 0) {
			m_noOfSubjects = noOfSubjects;
			m_subjectsAdded = 0;
			m_studentName = new char[strlen(studentName) + 1];
			strcpy(m_studentName, studentName);
			m_subjects = new Subject[m_noOfSubjects];
		}
		else {
			setEmpty();
		}
	}

	void Transcript::add(const char* subject_code, int mark) {
		if (m_subjectsAdded < m_noOfSubjects + 1)
		{
			m_subjects[m_subjectsAdded].set(subject_code, mark);
			m_subjectsAdded = m_subjectsAdded + 1;
		}
	}

	void Transcript::display()const {
		if (isValid()) {
			Title();
			for (int i = 0; i < m_noOfSubjects; i++) {
				m_subjects[i].display();
			}
			footer();

		}
		else {
			cout << "Invalid Transcript!" << endl;
		}
	}
	void Transcript::deallocate() {
		int i = 0;
		while (i < m_noOfSubjects) {
			delete[] m_subjects;
			m_subjects = nullptr;
			i++;
		}
		delete[] m_studentName;
		m_studentName = nullptr;
	}

}
