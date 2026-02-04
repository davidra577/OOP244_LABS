// Name: David Ra
// Email: dra@myseneca.ca
// Student ID: 101977205
// Lab 2 (PART 2)
// Date: OCT 3rd 2020
// SECTION: OOP244 NEE
//I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.
#include "Account.h"
#include "File.h"
#include <iostream>
#include <cstring>

using namespace std;
namespace sdds {
    int noOfAccounts;
    Account* accs;

    void sort() {
        int i, j;
        Account temp;
        for (i = noOfAccounts - 1; i > 0; i--) {
            for (j = 0; j < i; j++) {
                if (accs[j].m_accBalance > accs[j + 1].m_accBalance) {
                    temp = accs[j];
                    accs[j] = accs[j + 1];
                    accs[j + 1] = temp;
                }
            }
        }
    }

    bool load(Account& acc) {
        bool ok = false;
        int number;
        if (read(number)) {
            acc.m_accNumber = number;
            ok = read(acc.m_accBalance); 
            
        }
        return ok;
    }

    bool load(const char datafile[]) {
        bool ok = false;
        int i = 0;
        if (openFile(datafile)) {
            noOfAccounts = noOfRecords();
            accs = new Account[noOfAccounts];
            for (int j = 0; j < noOfAccounts; j++) {
                ok = load(accs[j]);
                if (ok == true) {
                    i++;
                }
            }
            if (noOfAccounts != i) {
                cout << "Error: incorrect number of records read; the data is possibly corrupted!" << endl;
            }
            else {
                ok = true;
            }
            closeFile();
        }

        else {
            cout << "Could not open data file: " << datafile << endl;
        }
        return ok;
    }
    
    void display(const Account& acc) {
        cout << acc.m_accNumber << ":  " << acc.m_accBalance << endl;
    }

    void display() {
        sort();
        cout << "Account#: Balance" << endl;
        for (int i = 0; i < noOfAccounts; i++) {
            cout << i + 1 << ": ";
            display(accs[i]);
        }
    }

    void deallocateMemory() {
        delete[] accs;
        accs = nullptr;
    }
}

