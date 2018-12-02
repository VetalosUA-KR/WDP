#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main ()
{

    int ileLiczb;
    int L;
    int P;

    cout << "ile liczb bede ? ->";
    cin >> ileLiczb;
    cout << "podaj dwie liczby L i P. z elementy tablicy z L po P ktore beda odwracanie w kolejnosci"<<endl;
    cout<<"podaj L = ";
    cin>>L;
    cout<<"podaj P = ";
    cin>>P;
    int tab[ileLiczb];
    int ileParz = 0;
    int ileNieParz = 0;


    for( int i = 0; i < ileLiczb; i ++)
    {
        cout << "podaj liczbu ";
        cin >> tab[i];
    }
    cout<<endl << "===================="<<endl;


    int dodatnia = 0;
    int dodatMax = 0;

    for( int i = 0; i < ileLiczb; i ++)
    {
        /// Parzystnosc
        if(tab[i]%2 == 0)
        {
            ileParz++;
        }
        else if(tab[i]%2 != 0)
        {
            ileNieParz++;
        }

        /// Dlugosc nieujenmych liczb
        if(tab[i] > 0)
        {
            dodatnia++;
        }
        else if (tab[i] < 0)
        {
            if(dodatMax < dodatnia)
            {
                dodatMax = dodatnia;
                dodatnia = 0;
            }
        }
    }
    if(dodatMax < dodatnia)
    {
        dodatMax = dodatnia;
        dodatnia = 0;
    }
    cout << "w podanej tablice istnieje "<<ileParz<<" parzystych elementow"<<endl;
    cout << "w podanej tablice istnieje "<<ileNieParz<<" nie parzystych elementow"<<endl;

    cout << "maxymalna dlugosc kolejki dodatnich liczb = "<<dodatMax<<endl;

    cout << "poczatkowa pozycja elementow w tablicy  =            ";
    for (int i = 0; i < ileLiczb; i++)
    {
        cout<<tab[i]<<" ";
    }


    /// odwraca kolejnosc elementow
    cout<<endl << "pozycja elementow w tablicy po odwracie kolejnosci = ";
    int buffers;

    for (int j = 0; j < P; j++)
    {
        for (int i = L; i < P-j; i++)
        {
            buffers = tab[i+1];
            tab[i+1] = tab[i];
            tab[i] = buffers;
        }
    }
    for (int i = 0; i < ileLiczb; i++)
    {
        cout<<tab[i]<<" ";
    }

    return 0;
}
