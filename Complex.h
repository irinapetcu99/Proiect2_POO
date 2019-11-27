#ifndef COMPLEX_H
#define COMPLEX_H
#include <vector>
#include <cstdlib>
using namespace std;

class Complex
{
    protected:
        ///partea reala
        float re;
        ///partea imaginara
        float im;
    public:
        ///constructor de initializare fara parametru
        Complex();
        ///constructor de initializare cu un parametru
        Complex(float re);
        ///constructor de initializare cu 2 parametri
        Complex(float re, float im);
        ///constructor de copiere
        Complex(const Complex &ob);
        ///metode-operator de atribuire =
        Complex& operator = ( const Complex &ob );
        Complex& operator + (const Complex& ob);
        Complex& operator * (const Complex& ob);
        Complex& operator - (const Complex& ob);
        Complex& operator / (const Complex& ob);
        ///metoda de afisare a unui numar complex
        friend ostream& operator << ( ostream&, Complex& );
        ///metoda de citire a unui numar complex
        friend istream& operator >> ( istream&, Complex& );
        ///destructor
        ~Complex();
        ///clase prieten cu clasa Complex(deoarece sunt matrice de numere complexe)
        friend class Matrice;
        ///functie de afisare
        void afisare();
        friend class Matrice_oarecare;
        friend class Matrice_patratica;
};

#endif // COMPLEX_H
