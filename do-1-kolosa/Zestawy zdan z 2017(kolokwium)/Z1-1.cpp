#include<iostream>

using namespace std;

int main ()
{

    int K = 0;
    cout<<"Wpisz liczbu K";cin >> K;
    int tab[100];
    int i = 0;
    while (true)
    {
        int n;
        cout<<"Podaj dowolnu liczbu ";
        cin>>n;
        if (n == 0)
        {
            for (int j = 0; j < i-3; j++)
            {
                int ile = 0;
                for(int k = j; k < j+4; k++)
                {
                    if(tab[k] % K)
                    {
                        ile++;
                    }
                }
                if(ile >= 2)
                {
                    for(int k = j; k < j+4; k++)
                    {
                        cout<<tab[k];
                    }
                    cout<<endl;
                }
            }

            break;
        }
        else
        {
            tab[i] = n;
        }
        i++;
    }





    return 0;
}
