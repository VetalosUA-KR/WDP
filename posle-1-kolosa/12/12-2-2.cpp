#include<iostream>
#include <ctime>
#include <cstdlib>
#include <cstring>


/// ВЫПИСЫВАЕТ БУКВУ КОТОРАЯ ВСТРЕЧАЕТСЧ БОЛЬШЕ ВСЕГО РАЗ

using namespace std;

int sowpadenieSynbolow(char arrSymbol[]);

int main ()
{
    char napis[100];
    cin.get(napis,100);
    sowpadenieSynbolow(napis);
    return 0;
}



int sowpadenieSynbolow(char arrSymbol[])
{
    int iloscSymbolow = 1;
    int maxIlosc = 0;
    int symbolID = 0;

    for(int i = 0; i <= strlen(arrSymbol); i++)
    {
        for(int j = i+1; j < strlen(arrSymbol); j++)
        {
            if(arrSymbol[i] == arrSymbol[j])
            {
                iloscSymbolow++;
            }
        }
        if(iloscSymbolow > maxIlosc)
        {
            maxIlosc = iloscSymbolow;
            iloscSymbolow = 1;
            symbolID = i;
        }
    }
    cout<<"symbol "<<arrSymbol[symbolID]<<" popadajetsa "<<maxIlosc<<" raz.";
    return maxIlosc;
}










