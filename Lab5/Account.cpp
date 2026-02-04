// Name: David Ra
// Email: dra@myseneca.ca
// Student ID: 101977205
// Lab 5 (PART 1)
// Date: OCT 24th 2020
// SECTION: OOP244 NEE
//I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Account.h"

using namespace std;
namespace sdds {
   void Account::setEmpty() {
      m_number = -1;
      m_balance = 0.0;
   }
   // New account
   Account::Account() {  
      m_number = 0;
      m_balance = 0.0;
   }
   Account::Account(int number, double balance) {
      setEmpty();
      if (number >= 10000 && number <= 99999
         && balance > 0) {
         m_number = number;
         m_balance = balance;
      }
   }
   std::ostream& Account::display() const{
      if (*this) {  
         cout << "Acc#: ";
         if (~(*this)) 
            cout << "Not Set";
         else
            cout << " " << m_number << " ";
         cout << ", Balance: ";
         cout.width(12);
         cout.precision(2);
         cout.setf(ios::right);
         cout.setf(ios::fixed);
         cout << m_balance;
         cout.unsetf(ios::right);
         // I (Fardad) removed the "return cout", this was a mistake
         // (copied and pasted by mistake)
         // and had no effect to the execution of the program.
         // As mentioned before we should have only
         // one return statement in a function.
      }
      else {
         cout << "Invalid Account";
      }
      return cout;
    }
   
   Account::operator bool() const
   {
       bool ok = false;
       if ((m_number >= 10000 && m_number <= 99999) || m_number == 0) {
           ok = true;
       }
       return ok;
   }

   Account::operator int() const
   {
       return m_number;
   }

   Account::operator double() const
   {
       return m_balance;
   }

   bool Account::operator~() const
   {
       bool ok = false;
       if (m_number == 0) {
           ok = true;
       }
       return ok;
   }

   Account& Account::operator=(int w)
   {
       if (this->m_number != -1) {
           if (w >= 10000 && w <= 99999) {
               m_number = w;
           }
           else {
               setEmpty();
           }
       }
       return *this;
   }

   Account& Account::operator=(Account& a)
   {
       if (this->m_number != -1 && a.m_number != -1) {
           this->m_balance = a.m_balance;
           a.m_balance = 0;
       }
       return *this;
   }

   Account& Account::operator+=(double w)
   {
       if (this->m_number != -1 && w > 0) {
           this->m_balance = this->m_balance + w;
       }
       return *this;
   }

   Account& Account::operator-=(double w)
   {
       if ((this->m_number != -1) && (w > 0) && (this->m_balance >= w)) {
           this->m_balance = this->m_balance - w;
       }
       return *this;
   }

   double operator+(const Account& a,const Account& b)
   {
       double sum = 0;
       if (a.m_number != -1 && b.m_number != -1) {
           sum = a.m_balance + b.m_balance;
       }
       return sum;
   }

   double operator+=(double& a, const Account& b)
   {
  
       a = a + b.m_balance;
       return a;
   }

}