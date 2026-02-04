// Name: David Ra
// Email: dra@myseneca.ca
// Student ID: 101977205
// Lab 5 (PART 1)
// Date: OCT 24th 2020
// SECTION: OOP244 NEE
//I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.

#ifndef SDDS_ACCOUNT_H_
#define SDDS_ACCOUNT_H_
#include <iostream>

namespace sdds {
   class Account {
      int m_number;
      double m_balance; 
      void setEmpty();
   public:
      Account();
      Account(int number, double balance);
      std::ostream& display()const;
      operator bool() const;
      operator int() const;
      operator double() const;
      bool operator~()const;
      Account& operator=(int w);
      Account& operator=(Account& a);
      Account& operator+=(double w);
      Account& operator-=(double w);
      friend double operator+(const Account& a,const Account& b);
      friend double operator+=(double& a, const Account& b);
   };

}
#endif // SDDS_ACCOUNT_H_