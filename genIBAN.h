#ifndef GENIBAN_H
#define GENIBAN_H

#define IBAN_STRING_INT_VOID
#ifdef IBAN_STRING_INT_VOID
    //#define IBAN_STRING // random iban string
    #define IBAN_INT // random iban int
    //#define IBAN_VOID // random iban void
#endif

#pragma once
#include <iostream>
#include <string>
#include <time.h>
class genIBAN
{
public:
    genIBAN();
    ~genIBAN();

#if defined(IBAN_STRING)
    std::string generateRandIBAN();
#elif defined(IBAN_INT)
    int generateRandIBAN();
#elif defined(IBAN_VOID)
    void generateRandIBAN();
#endif
#ifdef IBAN_STRING_INT_VOID
    std::string getIBAN() {return IBAN;}
#endif
private:
    std::string cod_tara = "RO";
    std::string cod_banca = "ITSCHOOL";
    std::string numar_cont;
    std::string IBAN;
};

#endif