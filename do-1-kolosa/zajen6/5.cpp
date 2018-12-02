#include<iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main ()
{
    int ile;
    int chekSortRos = 1;
    int chekSortMal = 1;
    int chekSymetr = 1;
    int chekId = 0;


    cout << "Wpisz ile liczb bede w tablice -> "; cin >> ile;

    int tab[ile];

    for (int i = 0; i < ile; i++)
    {
        cout << "Podaj dowolne liczbe - "<<i<<" -------> "; cin >> tab[i];
    }
    for (int i = 0; i < ile-1; i++)
    {
        if (tab[i] < tab[i+1])
        {
            chekSortRos++;
        }
        else if (tab[i] > tab[i+1])
        {
            chekSortMal++;
        }

        if(tab[i] == tab[(ile-1)-i])
        {
            chekSymetr ++;
        }
        for (int j = i+1; j < ile; j++)
        {
            if (tab[i] == tab[j])
            {
                chekId ++;
            }
        }
    }

    /// Проверка на сортировку
    if (chekSortRos == ile)
    {
        cout << "tablica sortowana  rosnaco"<<endl;
    }
    else if (chekSortMal == ile)
    {
        cout << "tablica sortowana  malejaco"<<endl;
    }
    else
    {
        cout << "liczby sa mieszane"<<endl;
    }

    /// Проверка на симметричность
    if (chekSymetr == ile)
    {
        cout << "tablica sa symetryczna"<<endl;
    }
    else
    {
        cout << "tablica nie jest symetryczna"<<endl;
    }

    /// Кол-во одинаковых пар в массиве
    cout << "istnee "<<chekId<<" pary identycznych liczb";

    return 0;
}


