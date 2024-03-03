#ifndef COUPE_H
#define COUPE_H
#include "masina.h"
#include<iostream>
#include<vector>
#include<utility>
using namespace std;

class COUPE : public masina
{
public:
    COUPE();
    COUPE(string nume_masina);
    ~COUPE();
    void citire();
    void afisare();
    friend istream& operator>>(istream& in,COUPE &ob);
    friend ostream& operator<<(ostream& out,COUPE &ob);
};

#endif // COUPE_H
