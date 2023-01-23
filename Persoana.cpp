#include "Persoana.h"
#include "ZiuaDeNastere.h"

Persoana::Persoana(std::string n, std::string p, ZiuaDeNastere ziDeNastere) : 
nume(n),
prenume(p),
ziDeNastere(ziDeNastere)
{

}

Persoana::~Persoana()
{

}

int Persoana::getVarsta()
{
    time_t t = time(0);
    struct tm* now = localtime(&t);
    int anulCurent = now->tm_year + 1900;
    int lunaCurenta = now->tm_mon + 1;
    int ziuaCurenta = now->tm_mday;
    int oraCurenta = now->tm_hour;
    int minuteCurente = now->tm_min;
    int secundeCurente = now->tm_sec;
    int varsta = anulCurent - ziDeNastere.getAn();

    if (lunaCurenta < ziDeNastere.getLuna() || (lunaCurenta == ziDeNastere.getLuna() && ziuaCurenta < ziDeNastere.getZi()))
    {
        varsta--;
    }
 
    int zile = varsta *365;

    if (lunaCurenta < ziDeNastere.getLuna() || (lunaCurenta == ziDeNastere.getLuna() && ziuaCurenta < ziDeNastere.getZi())) {
        zile = zile - (lunaCurenta - ziDeNastere.getLuna()) - (ziuaCurenta - ziDeNastere.getZi());
    }else{
        zile = zile + (lunaCurenta - ziDeNastere.getLuna()) + (ziuaCurenta - ziDeNastere.getZi());
    }
    int ore = oraCurenta;
    int minute = minuteCurente;
    std::cout << getNume() << " " << getPrenume() << " are " << varsta << " ani, " << zile << " zile, " << ore << " ore si " << minute << " minute "<< std::endl;
    //return varsta;
}
