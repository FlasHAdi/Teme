#ifndef ZIUADENASTERE_H
#define ZIUADENASTERE_H

#pragma once
#include<iostream>
#include <string>

enum Luna {
    Ianuarie = 1,
    Februarie,
    Martie,
    Aprilie,
    Mai,
    Iunie,
    Iulie,
    August,
    Septembrie,
    Octombrie,
    Noiembrie,
    Decembrie
};

class ZiuaDeNastere
{
public:
    ZiuaDeNastere(int an, int zi, Luna luna);
    ~ZiuaDeNastere();

    int getAn() {return an;}
    int getZi() {return zi;}
    int getNumarZileInLuna(int zileinluna);
    Luna getLuna() {return luna;}

private:
    int an;
    int zi;
    Luna luna;
};

#endif