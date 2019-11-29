#include <iostream>
#include "Complex.h"
#include "Matrice.h"
#include "Matrice_oarecare.h"
#include "Matrice_patratica.h"
#include "Citire_si_Afisare.h"
#include <vector>
#include <cstdlib>
#include <cmath>
using namespace std;

Matrice_patratica :: Matrice_patratica() : Matrice()
{
    cout << "Constructor de initializare(Matrice_patratica)"<<endl;
}

Matrice_patratica :: Matrice_patratica(int n) : Matrice(n, n)
{
    cout << "Constructor de initializare cu parametru(Matrice_patratica)" << endl;
}

Matrice_patratica :: Matrice_patratica(const Matrice_patratica &ob) : Matrice(ob)
{
    cout << "Constructor de copiere(Matrice_patratica)" << endl;
}

Matrice_patratica& Matrice_patratica :: operator = (const Matrice_patratica &ob)
{
    if( &ob != this )
        this -> Matrice :: operator = (ob);
    return *this;
}

Complex Matrice_patratica :: determinant()
{
///nu merg supraincarcarile de operatori din clasa complex mereu si nu stiu de ce
Complex p(1,0);
  if (n==1)
   return v[0][0];
  int x=0;
  int i,j;
  while(n-x>2){
    for(i=x+1;i<n;i++)
      for(j=x+1;j<n;j++)
        v[i][j]=v[i][j]-((v[x][j]*v[i][x])/v[x][x]);
    p=p*v[x][x];
    x++;

  }

  p=p*((v[x][x]*v[x+1][x+1])-(v[x][x+1]*v[x+1][x]));

 cout<< p;

}

ostream& operator << ( ostream& out, Matrice_patratica& ob)
{
    out << (Matrice&) ob;
    //out << "determinantul partea reala este: " << ob.determinant();
    return out;

}

istream& operator >> ( istream& inn, Matrice_patratica& ob )
{
    cout << "dati dimensiunea matricei:" << endl;
    inn >> ob.n;
    ob.m = ob.n;
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

bool Matrice_patratica :: diagonala()
{
    int ok = 1;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
        {
            if(i < j && v[i][j].re != 0)ok = 0;
            if(i > j && v[i][j].re != 0)ok = 0;
            if(i < j && v[i][j].im != 0)ok = 0;
            if(i > j && v[i][j].im != 0)ok = 0;
        }
    return ok;
}

float Matrice_patratica :: urmaMatriceReal()
{
    float s;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            if( i == j)s = s + v[i][j].re;
    return s;
}

float Matrice_patratica :: urmaMatriceImaginar()
{
    float s;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            if( i == j)s = s + v[i][j].im;
    return s;
}

void Matrice_patratica::afisare()
{
    cout << "dimensiunea este:" << endl;
    cout<< n << endl;
    cout << "elementele:" << endl;
    for( int i = 0; i < n; i++ )
        for(int j = 0; j < m; j++)
            cout << v[i][j] << " ";
    //cout << "determinantul partea reala este: " << this->determinant() << endl;
}

Matrice_patratica :: ~Matrice_patratica()
{
}







