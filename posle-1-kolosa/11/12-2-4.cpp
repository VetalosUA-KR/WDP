#include<iostream>
#include <ctime>
#include <cstdlib>
#include <cstring>

/// УДАЛЯЕТ ВСЕ ПОВТОРЯЮЩИЕСЯ СИМВОЛЫ
using namespace std;

void zwraca(char arrSymbol[], int ileRaz);

int main ()
{
    char napis[100];
    cin.get(napis,100);
    zwraca(napis, 2);
    return 0;
}
void zwraca(char arrSymbol[], int ileRaz)
{
    char newCiag[100];
    for(int i = 0; i < strlen(arrSymbol); i++)
    {
        int countSymbols = 0;
        for(int j = i+1; strlen(arrSymbol);  j++)
        {
            if(arrSymbol[i] == arrSymbol[j])
            {
                if(countSymbols <= ileRaz)
                {
                    countSymbols++;
                }
            }
        }
    }
}










