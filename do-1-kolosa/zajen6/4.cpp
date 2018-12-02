#include<iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main ()
{

    srand(time(0));
    int ileL = 4;
    int buffetTab;

    cout << "wpisz ile liczb bede w tablice -> "; cin >> ileL;

    int tab[ileL];

    /// Ќаполн€ем массив случайными данными
    for (int i = 0; i < ileL; i ++)
    {
        tab[i] = rand()%ileL+ileL;
        cout << tab[i]<< " ";
    }
    cout << endl;
    buffetTab = tab[ileL-1];
    for (int i = ileL-1; i > 0; i --)
    {
        tab[i] = tab[i-1];
    }
    tab[0] = buffetTab;
    for (int i = 0; i < ileL; i ++)
    {
        cout << tab[i]<< " ";
    }


    return 0;
}


