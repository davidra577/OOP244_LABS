// Name: David Ra
// Email: dra@myseneca.ca
// Student ID: 101977205
// Lab 3 (PART 1)
// Date: OCT 7th 2020
// SECTION: OOP244 NEE
//I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.

#pragma once
#include "Subject.h"

namespace sdds {
	class Transcript {
		char* m_studentName; // pointer to hold the student name dynamically 
		Subject* m_subjects; // pointer to hold the subjects in the Transcript dynamically
		int m_noOfSubjects;  // Number of subjects or number of elements in the array of m_subjects.
		int m_subjectsAdded; // Number of subjects in the m_subjects array that are set to thier values properly (they are not empty)
	private:
		void setEmpty();
		bool isValid()const;
		void Title()const;
		float gpa()const;
		void footer()const;
	public:
		Transcript();
		~Transcript();
		void init(const char* studentName, int noOfSubjects);
		void add(const char* subject_code, int mark);
		void display()const;
		void deallocate();
	};
}
