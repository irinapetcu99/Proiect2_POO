#include <iostream>
#include "Complex.h"
#include "Matrice.h"
#include "Matrice_oarecare.h"
#include "Matrice_patratica.h"
#include <vector>
#include <cstdlib>
#include "Citire_si_Afisare.h"

using namespace std;
int main()
{
    int op = 1;
    while(op)
   {
    cout << "Alegeti optiunea:" << endl;
    cout << "1 - Verificare matrice_oarecare daca este diagonala(daca este posibil);" <<endl;
    cout << "2 - Urma matrice_oarecare real si imaginar(daca este posibil); " <<endl;
    cout << "3 - Determinantul unei matrice patratica;" <<endl;
    cout << "4 - Verificare matrice_patratica daca este diagonala;" << endl;
    cout << "5 - Urma matrice_patratica;" << endl;
    cout << "6 - Citirea a n obiecte;" << endl;
    cout << "0 - Sfarsitul programului;" << endl;
    cin >> op;
    switch(op)
    {
        case 1:
    {
        Matrice_oarecare m;
        cin >> m;
        if(m.diagonala() == 1)cout << "este diagoanala;" << endl;
        else cout << "Nu este diagonala;" << endl;
        cout << endl;
        break;
    }
        case 2:
    {
        Matrice_oarecare m ;
        cin >> m;
        cout << "urma matrice imaginar:" << m.urmaMatriceImaginar() << endl;
        cout << "urma matrice real:" << m.urmaMatriceReal() << endl;
        cout << endl;
        break;

    }
        case 3:
    {
        cout << "nu merg supraincarcarile de operatori din clasa complex mereu si nu stiu de ce" << endl;
        cout << "am incercat" << endl;
        break;
    }
        case 4:
    {
        Matrice_patratica m;
        cin >> m;
        cout << m.diagonala() << endl;
        if(m.diagonala() == 1) cout << "este diagonala;" << endl;
        else cout << "nu este diagonala;" <<endl;
        cout << endl;
        break;

    }
        case 5:
    {
        Matrice_patratica m;
        cin >> m;
        cout << "urma matrice imaginar:" << m.urmaMatriceImaginar() << endl;
        cout << "urma matrice real:" << m.urmaMatriceReal() << endl;
        cout << endl;
        break;

    }
        case 6:
    {
        Citire_si_Afisare a;
        cin >> a;
        cout << a;
        cout << endl;
        break;
    }
    }
    }


}
