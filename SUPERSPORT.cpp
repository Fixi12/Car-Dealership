#include "SUPERSPORT.h"
#include<iostream>
#include<vector>
#include<utility>
using namespace std;

SUPERSPORT::SUPERSPORT():masina()
{}
SUPERSPORT::SUPERSPORT(string nume_masina):masina(nume_masina)
{}
SUPERSPORT::~SUPERSPORT(){}
void SUPERSPORT::citire()
{
    string nume;
    int pret;
    cin>>nume;
    setnume(nume);
    cin>>pret;
    setpret(pret);
}
void SUPERSPORT::afisare()
{
    cout<<getnume()<<" "<<getpret()<<endl;
}
istream& operator>>(istream& in,SUPERSPORT &ob)
{
    in >> dynamic_cast<masina&>(ob);
    return in;
}
ostream& operator<<(ostream& out,SUPERSPORT &ob)
{
    out << dynamic_cast<masina&>(ob);
    return out;
}
