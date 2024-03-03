#ifndef EXPOZITIE_
#define EXPOZITIE_
#include "masina.h"
#include<iostream>
#include<vector>
#include<utility>
using namespace std;

template <typename T>
class Expozitie
{

    vector <pair<string,float>> perechi;
    vector <masina*> obiecte;
    int total_masini;
public:
Expozitie();
Expozitie(Expozitie &ob);
~Expozitie();
void setelemperechi(string nume, int val);
void setelemmasina(masina *ob);
void incrementare(int val);
int getnrcar();
string getperechi1(int poz);
float getperechi2(int poz);
void setpret(int poz,float val);
string getnume(int i);
float getpret(int i);
masina* getobmasina(int poz);
void sterg(int x);
Expozitie operator=(Expozitie &ob);
};
template <typename T>
Expozitie<T>::Expozitie()
{
  total_masini=0;
}

template <typename T>
Expozitie<T>::Expozitie(Expozitie &ob)
{
    for(int i=0;i<total_masini;i++)
    {
        perechi[i].first=ob.perechi[i].first;
        perechi[i].second=ob.perechi[i].second;
        obiecte[i]=ob.obiecte[i];
    }
}

template <typename T>
Expozitie<T>::~Expozitie()
{
    total_masini=0;
}

template <typename T>
void Expozitie<T>::setelemperechi(string nume, int val)
{
    perechi.push_back(make_pair(nume,val));
}

template <typename T>
void Expozitie<T>::setelemmasina(masina *ob)
{
    obiecte.push_back(ob);
}

template <typename T>
void Expozitie<T>::incrementare(int val)
{
    total_masini+=val;
}

template <typename T>
string Expozitie<T>::getperechi1(int poz)
{
    return perechi[poz].first;
}

template <typename T>
float Expozitie<T>::getperechi2(int poz)
{
    return perechi[poz].second;
}

template <typename T>
masina* Expozitie<T>::getobmasina(int poz)
{
    return obiecte[poz];
}

template <typename T>
void Expozitie<T>::setpret(int poz,float val)
{
    obiecte[poz]->setpret(val);
}

template <typename T>
void Expozitie<T>::sterg(int x)
{
    try{
      if(x<0 || x>sizeof(obiecte)) throw out_of_range("eroare");
    obiecte.erase(obiecte.begin()+x);
    }
    catch(const out_of_range)
    {

    }
}

template <typename T>
int Expozitie<T>::getnrcar()
{
    return total_masini;
}

template <typename T>
string Expozitie<T>::getnume(int i)
{
    return obiecte[i]->getnume();
}

template <typename T>
float Expozitie<T>::getpret(int i)
{
    return obiecte[i]->getpret();
}

template <typename T>
Expozitie<T> Expozitie<T>::operator=(Expozitie &ob)
{
    for(int i=0;i<total_masini;i++)
    {
        perechi[i].first=ob.perechi[i].first;
        perechi[i].second=ob.perechi[i].second;
        obiecte[i]=ob.obiecte[i];
    }
    return *this;
}


#endif // EXPOZITIE_
