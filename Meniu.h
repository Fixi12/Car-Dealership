#ifndef MENIU_H
#define MENIU_H
#include "masina.h"
#include "COUPE.h"
#include "CABRIO.h"
#include "HOT_HATCH.h"
#include "SUPERSPORT.h"
#include "Expozitie.h"
#include<iostream>
#include<vector>
#include<utility>
using namespace std;

class Meniu
{
    int vandute=0;
    static const string ADD;
    static const string VANZARE;
    static const string NR_MASINI_EXPUSE;
    static const string MASINI_EXPUSE;
    static const string STOP_EXP;
    static const string STOP;
    void message();
public:
    void addcar();
    void runmenu();
    static vector<string> allcommands();
    void listamasini();
    void vanzare();
    void expuse();
    void masini_expuse();
    void masini_vandute();
};

#endif // MENIU_H
