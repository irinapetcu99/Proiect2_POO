#ifndef CITIRE_SI_AFISARE_H
#define CITIRE_SI_AFISARE_H
#include "Citire_si_Afisare.h"
#include <iostream>
#include "Complex.h"
#include "Matrice.h"
#include "Matrice_oarecare.h"
#include "Matrice_patratica.h"
#include <vector>
#include <cstdlib>
#include <memory>
using namespace std;
class Citire_si_Afisare
{
    private:
        int n;
        vector <Matrice *> ob;///vectorul de obiecte
    public:
        Citire_si_Afisare();
        friend istream & operator >>(istream&, Citire_si_Afisare&);
        friend ostream & operator <<(ostream&, Citire_si_Afisare&);
        ~Citire_si_Afisare();
};

#endif // CITIRE_SI_AFISARE_H
