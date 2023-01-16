#ifndef PERSOANA_H
#define PERSOANA_H

#pragma once
#include "ZiuaDeNastere.h"
#include<iostream>
#include<time.h>

class Persoana
{
public:
    Persoana(std::string n, std::string p, ZiuaDeNastere ziDeNastere);
    ~Persoana();

    int getVarsta();
    void timpTrecut();
    std::string getNume() {return nume;}
    std::string getPrenume() {return prenume;}
    
private:
    std::string nume;
    std::string prenume;
    ZiuaDeNastere ziDeNastere;
};

#endif