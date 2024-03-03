#include "CABRIO.h"
#include<iostream>
#include<vector>
#include<utility>
using namespace std;

CABRIO::CABRIO():masina()
{}
CABRIO::CABRIO(string nume_masina):masina(nume_masina)
{}
CABRIO::~CABRIO(){}
void CABRIO::citire()
{
    string nume;
    int pret;
    cin>>nume;
    setnume(nume);
    cin>>pret;
    setpret(pret);
}
void CABRIO::afisare()
{
    cout<<getnume()<<" "<<getpret()<<endl;
}
istream& operator>>(istream& in,CABRIO &ob)
{
    in >> dynamic_cast<masina&>(ob);
    return in;
}
ostream& operator<<(ostream& out,CABRIO &ob)
{
    out << dynamic_cast<masina&>(ob);
    return out;
}

