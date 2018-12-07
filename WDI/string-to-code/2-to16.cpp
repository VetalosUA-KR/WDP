#include<iostream>
#include <cmath>




using namespace std;

int main ()
{
    int n = 24;
    int tab[n]={1,0,1,1,    1,1,0,0,  0,1,0,1,   1,1,1,1,    0,0,1,1,    1,0,1,0};
    //char szesnastkowy[6];

    int counter = 0;
    int kolElem = n/4;

    int index_16 = 0;

    for(int j = 0; j < kolElem; j++)
    {
        int sum = 0;
        for(int i = 0; i < 4; i++)
        {
            sum += tab[i+counter]*pow(2,3-i);
        }
        counter += 4;
        if(j%2==0) cout<<"  ";
        if(sum < 10) cout<<sum;
        else if (sum  == 10)cout<<"A";
        else if (sum  == 11)cout<<"B";
        else if (sum  == 12)cout<<"C";
        else if (sum  == 13)cout<<"E";
        else if (sum  == 14)cout<<"D";
        else if (sum  == 15)cout<<"F";
    }

    return 0;
}






