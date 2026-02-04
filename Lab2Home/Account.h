// Name: David Ra
// Email: dra@myseneca.ca
// Student ID: 101977205
// Lab 2 (PART 2)
// Date: OCT 3rd 2020
// SECTION: OOP244 NEE
//I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.
#ifndef SDDS_ACCOUNT_H_
#define SDDS_ACCOUNT_H_
namespace sdds {

    struct Account {
        int m_accNumber;
        float m_accBalance;
    };
    void sort();
    bool load(Account& acc);
    bool load(const char datafile[]);
    void display(const Account& acc);
    void display();
    void deallocateMemory();

}
#endif // SDDS_ACCOUNT_H_