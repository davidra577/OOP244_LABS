// Name: David Ra
// Email: dra@myseneca.ca
// Student ID: 101977205
// Lab 1 (PART 1)
// Date: Sept 17th 2020
//I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.
#pragma once

#ifndef sdds_File_h // replace with relevant names
#define sdds_File_h
namespace sdds {
	bool openFile(const char filename[]);
	void closeFile();
	bool readTitle(char title[]);
	bool readYear(int* year);
	bool readMovieRating(char rating[]);
	bool readDuration(int* duration);
	bool readGenres(char genre[][11]);
	bool readConsumerRating(float* rating);
}
#endif