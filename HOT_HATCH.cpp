#include "HOT_HATCH.h"
#include<iostream>
#include<vector>
#include<utility>
using namespace std;

HOT_HATCH::HOT_HATCH():masina()
{}
HOT_HATCH::HOT_HATCH(string nume_masina):masina(nume_masina)
{}
HOT_HATCH::~HOT_HATCH(){}
void HOT_HATCH::citire()
{
    string nume;
    int pret;
    cin>>nume;
    setnume(nume);
    cin>>pret;
    setpret(pret);
}
void HOT_HATCH::afisare()
{
    cout<<getnume()<<" "<<getpret()<<endl;
}
istream& operator>>(istream& in,HOT_HATCH &ob)
{
    in >> dynamic_cast<masina&>(ob);
    return in;
}
ostream& operator<<(ostream& out,HOT_HATCH &ob)
{
    out << dynamic_cast<masina&>(ob);
    return out;
}
