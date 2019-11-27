#include <iostream>
#include "Complex.h"
#include "Matrice.h"
#include "Matrice_oarecare.h"
#include "Matrice_patratica.h"
#include "Citire_si_Afisare.h"
#include <vector>
#include <cstdlib>
using namespace std;

Matrice_oarecare :: Matrice_oarecare() : Matrice()
{
    cout << "Constructor de initializare(Matrice_oarecare)"<<endl;
}

Matrice_oarecare :: Matrice_oarecare(int lin) : Matrice(lin)
{
    cout << "Constructor de initializare cu parametru(Matrice_oarecare)" << endl;
}

Matrice_oarecare :: Matrice_oarecare(int lin, int col) : Matrice(lin, col)
{
    cout << "Constructor de initializare cu 2 parametri(Matrice_oarecare)" << endl;
}

Matrice_oarecare :: Matrice_oarecare(const Matrice_oarecare &ob) : Matrice(ob)
{
    cout << "Constructor de copiere(Matrice_oarecare)" << endl;
}

Matrice_oarecare& Matrice_oarecare :: operator = (const Matrice_oarecare &ob)
{
      if( &ob != this )
      this -> Matrice :: operator = (ob);
        return *this;
}

ostream& operator << ( ostream& out, Matrice_oarecare& ob)
{
    out << (Matrice&) ob;
    return out;
}

void Matrice_oarecare:: afisare()
{
    cout << "numarul liniilor este:" << endl;
        cout<< n << endl;
    cout << "numarul coloanelor este:" << endl;
        cout<< m << endl;
    cout << "elementele:" << endl;
    for( int i = 0; i < n; i++ )
    for(int j = 0; j < m; j++)
        cout << v[i][j] << " ";
        cout << endl;
}

///functie pentru a determina daca o matrice triunghiulara este diagonala
///returneaza 1 in caz afirmativ si 0 in caz contrar
bool Matrice_oarecare :: diagonala()
{
    int ok = 1;
    if(m != n) {
            cout << "O matrice nepatratica nu este diagonala!" << endl;
            return 0;
    }
    else
    {
        for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
        {
            if(i < j && v[i][j].re != 0)ok = 0;
            if(i > j && v[i][j].re != 0)ok = 0;
            if(i < j && v[i][j].im != 0)ok = 0;
            if(i > j && v[i][j].im != 0)ok = 0;
        }

    }
    return ok;
}


istream& operator >> ( istream& in, Matrice_oarecare& ob )
{
    in >> (Matrice&) ob;
    return in;
}

float Matrice_oarecare :: urmaMatriceReal()
{
    float s;
    if( m == n)
    {
        for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
        if( i == j)s = s + v[i][j].re;
        return s;
    }
    else cout << "O matrice nepatratica nu are urma" << endl;
    return 0;
}

float Matrice_oarecare :: urmaMatriceImaginar()
{
    float s;
    if( m == n)
   {
        for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
        if( i == j)s = s + v[i][j].im;
        return s;
   }
   else cout << "O matrice nepatratica nu are urma" << endl;
   return 0;
}

Matrice_oarecare :: ~Matrice_oarecare()
{
}
