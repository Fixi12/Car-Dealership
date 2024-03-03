#include "masina.h"
#include<iostream>
#include<vector>
#include<utility>
using namespace std;

masina::masina()
{
    nume="None";
    pret=0;
}
masina::masina(string nume)
{
    this->nume=nume;
}
masina::masina(string nume,float pret)
{
    this->nume=nume;
    this->pret=pret;
}
masina::masina(const masina &ob)
{
    nume=ob.nume;
}
masina::~masina(){}
void masina::setnume(string n_mas)
{
    nume=n_mas;
}
void masina::setpret(float val)
{
    pret=val;
}
string masina::getnume()
{
    return nume;
}
float masina::getpret()
{
    return pret;
}
void masina::citire()
{
    cin>>nume>>pret;
}
void masina::afisare()
{
    cout<<nume<<" "<<pret<<endl;
}
istream& operator>>(istream& in, masina &ob)
{
    ob.citire();
    return in;
}
ostream& operator<<(ostream& out, masina &ob)
{
    ob.afisare();
    return out;
}
masina masina::operator=(const masina &ob)
{
    nume=ob.nume;
    pret=ob.pret;
    return *this;
}
