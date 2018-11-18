#include <iostream>
#include <cmath>


using namespace std;

int main ()
{
    int n = n;
    cout << "wpisz liczbu -> "; cin >> n;

    int tab[n];

    for (int i = 2; i < n; i++)
    {
        tab[i] = i;
        if(n%tab[i] == 0)
        {
            cout << "liczba nie pierwsza ";
            break;
        }
        else
        {
            cout << "liczba pierwsza ";
            break;
        }
    }

    return 0;
}










