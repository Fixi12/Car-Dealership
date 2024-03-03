#ifndef HOT_HATCH_H
#define HOT_HATCH_H
#include "masina.h"
#include<iostream>
#include<vector>
#include<utility>
using namespace std;

class HOT_HATCH : public masina
{
public:
    HOT_HATCH();
    HOT_HATCH(string nume_masina);
    ~HOT_HATCH();
    void citire();
    void afisare();
friend istream& operator>>(istream& in,HOT_HATCH &ob);
friend ostream& operator<<(ostream& out,HOT_HATCH &ob);
};

#endif // HOT-HATCH_H
