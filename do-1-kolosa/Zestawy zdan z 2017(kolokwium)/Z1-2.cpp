#include<iostream>

using namespace std;

int main ()
{
    int n;
    int m;

    cout<<"Wpisz dlugosz tablicy -> ";
    cin>>n;
    cout<<"Wpisz przedzial -> ";
    cin>>m;
    int tab[n];

    int i = 0;
    while(i < n)
    {
        cout << "wpisz kolejnu liczbu -> ";
        cin>>tab[i];
        i++;
    }

    int q = 0;
    int sum = 0;
    int last = 0;
    while(q <= n)
    {
        if(tab[q] % 2 == 0)
        {
            sum ++;
        }
        else
        {
            if(sum > m)
            {
                for (int i = last; i <= q - 1; i++)
                {
                    cout<<tab[i]<<" ";
                }
                cout<<" , ";
            }
            last = q+1;
            sum = 0;
        }
        q++;
    }

    return 0;
}
