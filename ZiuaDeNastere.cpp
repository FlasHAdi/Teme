#include "ZiuaDeNastere.h"

ZiuaDeNastere::ZiuaDeNastere(int an, int zi, Luna luna) : 
an(an),
zi(zi),
luna(luna)
{

}

ZiuaDeNastere::~ZiuaDeNastere()
{

}

int ZiuaDeNastere::getNumarZileInLuna(int zileinluna)
{
    if (zileinluna == 2) {
        return 28;
    } else if (zileinluna == 4 || zileinluna == 6 || zileinluna == 9 || zileinluna == 11) {
        return 30;
    } else {
        return 31;
    }
    return zileinluna;
}
