#include <iostream>
#include "Complex.h"
#include "Matrice.h"
#include "Matrice_oarecare.h"
#include "Matrice_patratica.h"
#include "Citire_si_Afisare.h"
#include <vector>
#include <cstdlib>
using namespace std;

Matrice :: Matrice()
{
    cout << "Constructor de initializare(Matrice)"<<endl;
    this -> n = 0;
    this -> m = 0;
    v = new Complex*;
}

Matrice :: Matrice(int n)
{
    cout << "Constructor de initializare cu parametru(Matrice)" << endl;
    this -> n = n;
    this -> m = 0;
    v = new Complex*[n];
    for(int i = 0; i < n; i++)
        v[i] = new Complex;
}

Matrice :: Matrice(int n, int m)
{
    cout << "Constructor de initializare cu 2 parametri(Matrice)" << endl;
    this -> n = n;
    this -> m = m;
    v = new Complex*[n];
    for(int i = 0; i < n; i++)
        v[i] = new Complex [m];
}

Matrice :: Matrice(const Matrice &ob)
{
        cout << "Constructor de copiere(Matrice)" << endl;
        n = ob.n;
        m = ob.m;
        v = new Complex*[n];
        for( int i = 0; i < n; i++)
            v[i] = new Complex[m];
        for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            v[i][j] = ob.v[i][j];
}

Matrice& Matrice :: operator = (const Matrice &ob)
{
      if( &ob != this )
        {
            for( int i = 0; i < this -> n; i++)
                delete[] v[i];
            delete [] v;
            n = ob.n;
            m = ob.m;
            v = new Complex*[n];
            for( int i = 0; i < this -> n; i++)
                v[i] = new Complex[m];
            for(int i = 0; i < this -> n; i++)
            for(int j = 0; j < this -> m; j++)
                v[i][j] = ob.v[i][j];
        }
        return *this;
}

ostream& operator << ( ostream& out, Matrice &ob)
{
    cout << "numarul liniilor este:" << endl;
        out<< ob.n << endl;
    cout << "numarul coloanelor este:" << endl;
        out<< ob.m << endl;
    cout << "elementele:" << endl;
    for( int i = 0; i < ob.n; i++ )
    for(int j = 0; j < ob.m; j++)
        out << ob.v[i][j] << " ";
        out << endl;
    return out;
}

void Matrice :: afisare()
{
    cout << "3";
}

istream& operator >> ( istream& inn, Matrice& ob )
{
    cout << "dati numarul liniilor:" << endl;
    inn >> ob.n;
    cout << "dati numarul coloanelor:" << endl;
    inn >> ob.m;
    ob.v = new Complex*[ob.n];
    for(int i = 0; i < ob.n; i++)
        ob.v[i] = new Complex[ob.m];
    for ( int i = 0; i < ob.n; i++ )
    for (int j = 0; j < ob.m; j++)
    {
        cout << "introduceti obiectul de pe linia " << i << " si coloana " << j << " :" << endl;
        inn >> ob.v[i][j];
    }
    return inn;
}


Matrice :: ~Matrice()
{
    for( int i = 0; i < n; i++)
        delete[] v[i];
    delete [] v;
}
