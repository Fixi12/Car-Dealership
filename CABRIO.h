#ifndef CABRIO_H
#define CABRIO_H
#include "masina.h"
#include<iostream>
#include<vector>
#include<utility>
using namespace std;

class CABRIO : public masina
{
public:
    CABRIO();
    CABRIO(string nume_masina);
    ~CABRIO();
    void citire();
    void afisare();
friend istream& operator>>(istream& in,CABRIO &ob);
friend ostream& operator<<(ostream& out,CABRIO &ob);
};

#endif // CABRIO_H
