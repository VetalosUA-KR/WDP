#include<iostream>

using namespace std;

int main ()
{
    int tab[100];

    int i = 0;
    int l = 0;
    while(true)
    {
        cout<<"Podaj dowolnu liczbu ";cin>>l;
        if(l != 0)
        {
            tab[i] = l;
        }
        else
        {
            for(int j = 0; j < i-2; j++)
            {
                int sum = 0;
                int _min = tab[j];
                for(int k = j; k < j+3; k++)
                {
                    if(tab[k] < _min)
                    {
                        _min = tab[k];
                    }
                }
                cout<<" ";
            }
            break;
        }

        i++;
    }

    return 0;
}
