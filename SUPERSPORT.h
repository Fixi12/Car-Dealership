#ifndef SUPERSPORT_H
#define SUPERSPORT_H
#include "masina.h"
#include<iostream>
#include<vector>
#include<utility>
using namespace std;

class SUPERSPORT : public masina
{
public:
    SUPERSPORT();
    SUPERSPORT(string nume_masina);
    ~SUPERSPORT();
    void citire();
    void afisare();
friend istream& operator>>(istream& in,SUPERSPORT &ob);
friend ostream& operator<<(ostream& out,SUPERSPORT &ob);
};

#endif // SUPERSPORT_H
