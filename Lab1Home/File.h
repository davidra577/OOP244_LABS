// Name: David Ra
// Email: dra@myseneca.ca
// Student ID: 101977205
// Lab 1 (PART 2 HOME)
// Date: Sept 27th 2020
//I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.
#pragma once

#ifndef sch_File_h // replace with relevant names
#define sch_File_h
namespace sch {
	bool openFile(const char filename[]);
	void closeFile();
	bool readCode(char code[]);
	bool readextNum(int* extNum);
}
#endif