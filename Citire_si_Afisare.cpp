#include "Citire_si_Afisare.h"
#include <iostream>
#include "Complex.h"
#include "Matrice.h"
#include "Matrice_oarecare.h"
#include "Matrice_patratica.h"
#include <vector>
#include <cstdlib>

using namespace std;
Citire_si_Afisare :: Citire_si_Afisare()
{
      cout << "dati nr de obiecte de citit:" << endl;
      cin >> n;
}

istream & operator >>(istream& in, Citire_si_Afisare &citire)
{
    int op;
    cout << "Pentru a adauga un element de tip Matrice_oarecare, apasati 1" << endl;
    cout << "Pentru a adauga un element de tip Matrice_patratica, apasati 2" << endl;
    for(int i = 0; i < citire.n; i++)
        {
            cout << "optiunea: " << endl;
            cin >> op;
        try{
        if(op != 1 && op != 2)
            throw(op);
        }catch(int){
            cout << "S-a introdus o valoare gresita. Va rugam introduceti 1 sau 2!" << endl;
            in >> op;
        }
            if(op == 1){
                    Matrice_oarecare matOarecare;
                    in >> matOarecare;
                    citire.ob.push_back(new Matrice_oarecare(matOarecare));
                } else {
                    Matrice_patratica matPatratica;
                    in >> matPatratica;
                    citire.ob.push_back(new Matrice_patratica(matPatratica));
                }

        }
    return in;
}


ostream & operator <<(ostream & out, Citire_si_Afisare& af)
{
    out << endl;
    out << "numarul obiectelor din vector: ";
    out << af.n << endl;
    out << endl;
    for(int i = 0; i < af.n; i++)
    {
        if(dynamic_cast < Matrice_patratica* > (af.ob[i]) )
        out << "obiectul este o matrice patratica;" << endl;
        else
        out << "obiectul este o matrice oarecare;" << endl;
        af.ob[i] -> afisare();

    }
    return out;
}

Citire_si_Afisare :: ~Citire_si_Afisare()
{
    int i;
    for( i = 0; i < n; i++)
        delete ob[i];
    ob.clear();
}
