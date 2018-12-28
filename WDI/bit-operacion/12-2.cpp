#include<iostream>
#include <ctime>
#include <cstdlib>
#include <cstring>

using namespace std;

int sowpadenieSynbolow(char arrSymbol[], char symbol[]);

int main ()
{
    char napis[100];
    cin.get(napis,100);

    char symbol[1];
    cin>>symbol[0];
    //cin.get(symbol,1);


    cout<<sowpadenieSynbolow(napis, symbol);


    return 0;
}



int sowpadenieSynbolow(char arrSymbol[], char symbol[])
{
    int iloscSymbolow = 0;
    for(int i = 0; i < strlen(arrSymbol); i++)
    {
        if(arrSymbol[i] == symbol[0])
        {
            iloscSymbolow++;
        }
    }
    return iloscSymbolow;
}










