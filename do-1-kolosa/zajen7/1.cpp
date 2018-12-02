#include <iostream>

using namespace std;

int main ()
{

    int ileLiczb;
    int G;
    cout << "ile liczb bede ? ->"; cin >> ileLiczb;
    cout << "podaj G";cin >> G;
    int tab[ileLiczb];
    for( int i = 0; i < ileLiczb; i ++)
    {
        cout << "podaj liczbu "; cin >> tab[i];
    }

    for (int i = 0; i < ileLiczb; i++)
    {
        for (int j = i; j < ileLiczb; j++)
        {
            int sum = tab[i]+tab[j];
            if(sum > G)
            {
                cout << tab[i]<<" + " << tab[j]<<" wieksze od "<<G<<endl;
            }
        }
    }

    return 0;
}
