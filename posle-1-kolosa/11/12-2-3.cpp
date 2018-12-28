#include<iostream>
#include <ctime>
#include <cstdlib>
#include <cstring>

/// ПЕРЕВОД В ВЕРХНИЙ РЕГИСТР


using namespace std;

void toUpperSymbol(char arrSymbol[]);

int main ()
{
    char napis[100];
    cin.get(napis,100);
    toUpperSymbol(napis);

    for(int i = 0; i <= strlen(napis); i++)
    {
        cout<< napis[i];
    }

    return 0;
}



void toUpperSymbol(char arrSymbol[])
{

    for(int i = 0; i <= strlen(arrSymbol); i++)
    {
        if(int(arrSymbol[i]) >= 97 && int(arrSymbol[i]) <= 122)
        {
            arrSymbol[i] = char(int(arrSymbol[i]-32));
        }

    }
}










