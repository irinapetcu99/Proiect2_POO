#ifndef MATRICE_PATRATICA_H
#define MATRICE_PATRATICA_H
#include <cstdlib>
#include <vector>
///clasa derivata
using namespace std;
class Matrice_patratica : public Matrice ///mosteneste public clasa Matrice
{
    public:
        ///constructor de initializare fara parametri
        Matrice_patratica();
        ///constructor de initializare cu parametru
        Matrice_patratica(int n);
        ///constructor de copiere
        Matrice_patratica(const Matrice_patratica &ob);
        ///metoda-operator de atribuire =
        Matrice_patratica& operator = (const Matrice_patratica &ob);
        ///destructor
        ~Matrice_patratica();
        ///metoda de afisare a unei matrice patratica
        friend ostream& operator << ( ostream&, Matrice_patratica& );
        ///metoda de citire a unei matrice patratica
        friend istream& operator >> ( istream&, Matrice_patratica& );
        ///functie pentru a determina daca o matrice triunghiulara este diagonala
        bool diagonala();
        ///functie pentru calculul urmei unei matrice
        float urmaMatriceReal();
        float urmaMatriceImaginar();
        ///functie de afisare
        void afisare();
        Complex& determinant();
};

#endif // MATRICE_PATRATICA_H
