#include<iostream>
#include<time.h>
#include<stdlib.h>
#include<cstring>


using namespace std;

int main ()
{

    char napis[30];

    cout<<"wpisz nie wieksze 30 dowolnych liter"<<endl;
    cin>>napis;

    for (int i = 0; i < strlen(napis); i++)
    {
        if(int(napis[i]) >= 97 && int(napis[i]) <= 122)
        {
            napis[i] = char(int(napis[i]) - 32);
        }
    }
    for (int i = 0; i < strlen(napis); i++)
    {
        cout<<napis[i];
    }




    return 0;
}
