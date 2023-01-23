#include "Car.h"
#include "genIBAN.h"
#include "TV.h"
#include "Persoana.h"

using namespace std;
int main()
{


#ifdef IBAN_STRING_INT_VOID
    genIBAN gen1;
    gen1.generateRandIBAN();
    std::cout << gen1.getIBAN() << std::endl;
#endif

    TV myTV(10, 20);
    myTV.printTvInfo();

    ZiuaDeNastere data(1993, 19, Octombrie);
    Persoana pers("FlasH", "Adi", data);
    pers.getVarsta();


    return 0;
}
