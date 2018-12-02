#include<iostream>

using namespace std;

int main ()
{
    int n = 6;
    int tab[n];

    tab[0] = 2;
    tab[1] = 3;
    tab[2] = 7;
    tab[3] = 1;
    tab[4] = 9;
    tab[5] = 4;

    for (int i = 0; i < n; i ++)
    {
        cout << tab[i]<<" ";
    }
    cout<<endl << "========================"<<endl;


    for (int i = 0; i < n; i ++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(tab[i] > tab[j])
            {
                int temp = tab[i];
                tab[i] = tab[j];
                tab[j] = temp;
            }
        }
    }

    for (int i = 0; i < n; i ++)
    {
        cout << tab[i]<<" ";
    }

    return 0;
}
