#include <iostream>
#include "Complex.h"
#include "Matrice.h"
#include "Matrice_oarecare.h"
#include "Matrice_patratica.h"
#include "Citire_si_Afisare.h"
#include <vector>
#include <cstdlib>

using namespace std;

Complex :: Complex()
{
    this -> re = 0;
    this -> im = 0;
}


Complex :: Complex(float re)
{
    this -> re = re;
    this -> im = 0;
}

void Complex :: afisare()
{
    cout << "2";
}

Complex :: Complex(float re, float im)
{
    this -> re = re;
    this -> im = im;
}

Complex :: Complex(const Complex &ob)
{
    re = ob.re;
    im = ob.im;
}

Complex& Complex :: operator = ( const Complex &ob )
{
    if(&ob == this)
        return *this;
    re = ob.re;
    im = ob.im;
    return *this;
}

Complex& Complex :: operator + (const Complex& ob){

 Complex *z = new Complex();
 z->re = re + ob.re;
 z->im = im + ob.im;

 return *z;
}

Complex& Complex :: operator * (const Complex& ob){

 Complex *z = new Complex();
 z->re = (re * ob.re) - (im * ob.im);
 z->im = (re * ob.im) + (im * ob.re);

 return *z;
}

Complex& Complex :: operator - (const Complex& ob){

 Complex *z = new Complex();
 z->re = re - ob.re;
 z->im = im - ob.im;

 return *z;
}

Complex& Complex :: operator / (const Complex &ob){

 Complex *z = new Complex();
 cout<<endl;
 z->re = ((re * ob.re) + (im * ob.im)) / ((ob.re * ob.re) + (ob.im * ob.im));
 z->im = ((ob.re * im) - (re * ob.im)) / ((ob.re * ob.re) + (ob.im * ob.im));

 return *z;
}


ostream& operator << ( ostream& out, Complex& ob )
{
    cout << "partea reala este:" << endl;
    out<< ob.re << endl;
    cout << "partea imaginara este:" << endl;
    out << ob.im << endl;
    return out;
}

istream& operator >> ( istream& in, Complex& ob )
{
    cout << "Dati partea reala:";
    in >> ob.re;
    cout << "Dati partea imaginara:";
    in >> ob.im;
    return in;
}

Complex :: ~Complex()
{
}
