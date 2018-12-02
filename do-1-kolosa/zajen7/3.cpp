#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main ()
{

    int ileLiczb = 5;
    int G;
    int flagSort = 1;
    cout << "ile liczb bede ? ->"; cin >> ileLiczb;
    cout << "wpish: 1 - sortowac rosnaco 2 - sortowac malojaco"<<endl;
    cin >> flagSort;
    int tab[ileLiczb];

    int bufer;

    srand(time(NULL));
    int il = 0;

    for( int i = 0; i < ileLiczb; i ++)
    {
        //cout << "podaj liczbu "; cin >> tab[i];
        tab[i] = (rand() % ileLiczb+ileLiczb) + 0;
        cout << tab[i]<<" ";
    }
    cout<<endl << "===================="<<endl;

    for (int i = 0; i < ileLiczb; i++)
    {
        for (int j = i; j < ileLiczb; j++)
        {
           if(flagSort == 2)
           {
                if(tab[i] > tab[j])
                {
                    bufer = tab[j];
                    tab[j] = tab[i];
                    tab[i] = bufer;
                }
           }
           else if(flagSort == 1)
           {
                if(tab[i] < tab[j])
                {
                    bufer = tab[j];
                    tab[j] = tab[i];
                    tab[i] = bufer;
                }
           }

        }
    }

    for( int i = 0; i < ileLiczb; i ++)
    {
        //cout << "podaj liczbu "; cin >> tab[i];
        //tab[i] = (rand() % 10) + 0;
        cout << tab[i]<<" ";

    }

    return 0;
}
