#include "Meniu.h"
#include<iostream>
#include<vector>
#include<utility>
using namespace std;

const string Meniu::ADD="ADD";
const string Meniu::VANZARE="VANZARE";
const string Meniu::NR_MASINI_EXPUSE="NR_EXPUSE";
const string Meniu::MASINI_EXPUSE="MASINI_EXPUSE";
const string Meniu::STOP_EXP="STOP_EXPOZITIE";
const string Meniu::STOP="STOP";

Expozitie<masina*> exp;

void Meniu::message()
{
    cout<<"ADD - adauga o masina"<<endl
        <<"VANZARE - vinde o masina cu banii jos"<<endl
        <<"NR_EXPUSE - vezi cate masini mai sunt expuse si pretul lor"<<endl
        <<"MASINI_EXPUSE - vezi masinile expuse si pretul lor"<<endl
        <<"MASINI_VANDUTE - vezi masinile vandute si pretul de vanzare"<<endl
        <<"STOP_EXPOZITIE - opreste expozitia"<<endl
        <<"STOP - opreste programul"<<endl;
}

void Meniu::runmenu()
{
    message();
    string command;
    cin>>command;
    while(command!="STOP")
    {
        if(command=="ADD")
        {
            addcar();
        }
        else if(command=="VANZARE")
        {
            vanzare();
        }
        else if(command=="NR_EXPUSE")
        {
            expuse();
        }
        else if(command=="MASINI_EXPUSE")
        {
            masini_expuse();
        }
        else if(command=="MASINI_VANDUTE")
        {
            masini_vandute();
        }
        if(command=="STOP_EXPOZITIE")
        {

            int x;
            cout<<"STOP(1) sau vezi masinile ramase nevandute(2)"<<endl;
            cin>>x;
            while(x==2)
            {
                for(int i=0; i<exp.getnrcar(); i++)
                {
                    exp.setpret(i,-1);
                }
                for(int i=0; i<exp.getnrcar(); i++)
                {
                    cout<<exp.getnume(i)<<" "<<exp.getpret(i)<<endl;
                }
                cin>>x;
            }
            command="STOP";
        }
        else
        {
            message();
            cin>>command;
        }
    }
}
void Meniu::addcar()
{
    masina *ob;
    int x;
    cout<<"Coupe(1), Cabrio(2), Hot-Hatch(3) sau supersport(4)"<<endl;

        cin>>x;

        if(x==1)
        {
            ob=new COUPE();
            exp.incrementare(1);
        }
        else if(x==2)
        {
            ob=new CABRIO();
            exp.incrementare(1);
        }
        else if(x==3)
        {
            ob=new HOT_HATCH();
            exp.incrementare(1);
        }
        else if(x==4)
        {
            ob=new SUPERSPORT();
            exp.incrementare(1);
        }
        ob->citire();
        exp.setelemmasina(ob);
}
void Meniu::expuse()
{
    cout<<exp.getnrcar()<<endl;
}
void Meniu::vanzare()
{
    vandute++;
    cout<<"Alegeti masina ce doriti sa o vindeti tastand elementul corespunzator din urmatoarea lista:"<<endl;
    for(int i=0; i<exp.getnrcar(); i++)
    {
        exp.getobmasina(i);
    }
    int poz;
    cin>>poz;
    exp.setelemperechi(exp.getnume(poz),exp.getpret(poz));
    exp.sterg(poz);
    exp.incrementare(-1);
}
void Meniu::masini_expuse()
{
    for(int i=0; i<exp.getnrcar(); i++)
    {
        cout<<exp.getnume(i)<<" "<<exp.getpret(i)<<endl;
    }
}
void Meniu::masini_vandute()
{
    for(int i=0; i<vandute; i++)
    {
        cout<<exp.getperechi1(i)<<" "<<exp.getperechi2(i)<<endl;
    }
}
vector<string> Meniu::allcommands()
{
    vector<string> commands;
    commands.push_back(ADD);
    commands.push_back(VANZARE);
    commands.push_back(NR_MASINI_EXPUSE);
    commands.push_back(MASINI_EXPUSE);
    commands.push_back(STOP_EXP);
    commands.push_back(STOP);
    return commands;
}
