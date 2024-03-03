#ifndef MASINA_H
#define MASINA_H
#include<iostream>
#include<vector>
#include<utility>
using namespace std;

class masina
{
    string nume;
    float pret;

public:
    masina();
    masina(string nume);
    masina(string nume,float pret);
    masina(const masina &ob);
    void setnume(string n_mas);
    void setpret(float val);
    string getnume();
    float getpret();
    virtual ~masina();
    virtual void citire();
    virtual void afisare();
    friend istream& operator>>(istream& in, masina& ob);
    friend ostream& operator<<(ostream& out, masina& ob);
    masina operator=(const masina &ob);
};

#endif // MASINA_H
