// Name: David Ra
// Email: dra@myseneca.ca
// Student ID: 101977205
// Lab 1 (PART 1)
// Date: Sept 17th 2020
//I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.
#pragma once

#ifndef sdds_Movie_h // replace with relevant names
#define sdds_Movie_h
namespace sdds {

    struct Movie {
        char m_title[128];
        int m_year;
        char m_rating[6];
        int m_duration;
        char m_genres[10][11];
        float m_consumerRating;
    };

    bool loadMovies();
    bool hasGenre(const Movie* mvp, const char genre[]);
    void displayMovie(const Movie* mvp);
    void displayMoviesWithGenre(const char genre[]);
}
#endif
