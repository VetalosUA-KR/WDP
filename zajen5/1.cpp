#include <iostream>

using namespace std;


int main()
{
    int n = 0;

    cout<<"wpish liczbu ";cin>>n;

    int tab[n][n];

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if(i == 0 || j == 0)
            {
                tab[i][j] = i+j;
            }
            else
            {
                tab[i][j] = i*j;
            }
            cout<<tab[i][j]<<" ";
        }
        cout << endl;
    }

    return 0;
}
