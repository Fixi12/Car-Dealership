#include "COUPE.h"
#include<iostream>
#include<vector>
#include<utility>
using namespace std;

COUPE::COUPE():masina()
{}
COUPE::COUPE(string nume_masina):masina(nume_masina)
{}
COUPE::~COUPE(){}
void COUPE::citire()
{
    string nume;
    int pret;
    cin>>nume;
    setnume(nume);
    cin>>pret;
    setpret(pret);
}
void COUPE::afisare()
{
    cout<<getnume()<<" "<<getpret()<<endl;
}
istream& operator>>(istream& in,COUPE &ob)
{
    in >> dynamic_cast<masina&>(ob);
    return in;
}
ostream& operator<<(ostream& out,COUPE &ob)
{
    out << dynamic_cast<masina&>(ob);
    return out;
}
