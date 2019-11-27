#ifndef MATRICE_H
#define MATRICE_H
#include <cstdlib>
#include <vector>
///clasa de baza

using namespace std;
class Matrice
{
    protected:
        Complex **v;
        ///numarul de linii
        int n;
        ///numarul de coloane
        int m;
    public:
        ///constructor de initializare fara parametri
        Matrice();
        ///constructor de initializare cu un parametru
        Matrice(int n);
        ///constructor de initializare cu 2 parametri
        Matrice(int n, int m);
        ///constructor de copiere
        Matrice(const Matrice &ob);
        ///metoda-operator de atribuire =
        Matrice& operator = (const Matrice &ob);
        ///destructor
        virtual ~Matrice();
        ///metoda de afisare a unei matrice
        friend ostream& operator << (ostream&, Matrice&);
        ///metoda de citire a unei matrice
        friend istream& operator >> ( istream&, Matrice& );
        ///functie pentru calculul urmei unei matrice
        virtual float urmaMatriceReal() = 0;
        virtual float urmaMatriceImaginar() = 0;
        ///functie de afisare
        virtual void afisare();
};

#endif // MATRICE_H
