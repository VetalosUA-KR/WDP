#include<iostream>

using namespace std;

int main ()
{

    int ile = 0;
    cout << "wpish ile liczb bede w tablice -> "; cin >> ile;
    int tab[ile];
    int i = 0;
    int ma = 0;
    bool chek = false;

    while (i < ile)
    {
        cout << "wpish "<<i+1<<" liczbu do tablicy -> ";cin >> tab[i];
        i++;
    }

    for (int i = 0; i < ile; i++)
    {
        if (tab[i] > 0)
        {
            if (tab[i] > ma) ma = tab[i];
            chek = true;
        }

    }
    if (chek)
    {
        cout << "w podanej tablice istee liczba wieksza od 0 = " << ma;
    }

    return 0;
}


