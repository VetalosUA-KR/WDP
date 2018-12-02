#include <iostream>

using namespace std;

int main ()
{

    int ileLiczb;
    int G;
    cout << "ile liczb bede ? ->"; cin >> ileLiczb;
    int tab[ileLiczb];
    for( int i = 0; i < ileLiczb; i ++)
    {
        cout << "podaj liczbu "; cin >> tab[i];
    }

    for (int i = 0; i < ileLiczb; i++)
    {
        for (int j = i+1; j < ileLiczb; j++)
        {
            if(tab[i] == tab[j])
            {
                cout << tab[i] << " = " << tab[j]<<endl;
            }

        }
    }

    return 0;
}
