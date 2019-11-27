#ifndef MATRICE_OARECARE_H
#define MATRICE_OARECARE_H
#include <vector>
#include <cstdlib>
///clasa derivata
using namespace std;
class Matrice_oarecare : public Matrice ///mosteneste public clasa Matrice
{
    public:
        ///constructor de initializare fara parametri
        Matrice_oarecare();
        ///constructor de initializare cu un parametru
        Matrice_oarecare(int lin);
        ///constructor de initiazliare cu 2 parametri
        Matrice_oarecare(int lin, int col);
        ///constructor de copiere
        Matrice_oarecare(const Matrice_oarecare &ob);
        ///metoda-operator de atribuire =
        Matrice_oarecare& operator = (const Matrice_oarecare &ob);
        ///destructor
        ~Matrice_oarecare();
        ///functie pt a determina daca o matrice triunghiulara este diagonala
        bool diagonala();
        ///metoda de afisare a unei matrice oarecare
        friend ostream& operator << ( ostream&, Matrice_oarecare& );
        ///metoda de citire a unei matrice oarecare
        friend istream& operator >> ( istream&, Matrice_oarecare& );
        ///functie pentru calculul urmei unei matrice
        float urmaMatriceReal();
        float urmaMatriceImaginar();
        ///functie de afisare
        void afisare();
};

#endif // MATRICE_OARECARE_H
