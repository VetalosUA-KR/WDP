#include<iostream>
#include<cstring>

using namespace std;

int main ()
{

    char napis [30];
    char napis2[30];
    bool flag = true;

    cin.get(napis,30);
    int g = 0;
    for (int i = 0, y = strlen(napis); i < strlen(napis); i++, y--)
    {
        if(napis[i]>='a' && napis[i]<='z')
        {
            napis2[g] = napis[i];
            g++;
        }

    }
    napis2[g] = '\0';

    for (int i = 0, y = strlen(napis2)-1; i < strlen(napis2)-1; i++, y--)
    {
        if(napis2[i] != napis2[y])
        {
            flag = false;
        }
    }
    if(flag)
    {
        cout << "napis jest polindrom";
    }
    else
    {
        cout << "napis nie jest polindrom";
    }

    return 0;
}
