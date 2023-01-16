#include "genIBAN.h"

genIBAN::genIBAN()
{
    
}

genIBAN::~genIBAN()
{

}

#ifdef IBAN_STRING_INT_VOID
#if defined(IBAN_STRING)
std::string genIBAN::generateRandIBAN()
#elif defined(IBAN_INT)
int genIBAN::generateRandIBAN()
#elif defined(IBAN_VOID)
void genIBAN::generateRandIBAN()
#endif
{
    srand(time(0)); //seed intializeaza timpul pentru rand()
    for (int i = 0; i < 16; i++) //loop pentru a genera 15 numere/indexuri
    { 
        char convert = '0';
        numar_cont += (rand() % 10 + convert); // 
        if ((i + 1) % 4 == 0 && i != 15) //check daca i este divizat la 4
        {
            numar_cont += " ";
        }
        IBAN = cod_tara + cod_banca + numar_cont; //concatenare
    }
#if defined(IBAN_STRING)
    return IBAN;
#elif defined(IBAN_INT)
    return 0;
#endif
}


#endif