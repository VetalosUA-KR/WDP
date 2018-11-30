#include<iostream>
#include<cstring>

using namespace std;

int main ()
{

    char napis[30];
    cin.get(napis,30);


    int lettCount = 1;
    int maxLC = 1;

    for (int i = 0; i < strlen(napis); i ++)
    {
        if(int(napis[i] > 65 && int(napis[i]) < 90)) /// chek range latter
        {
            lettCount++;
        }
        if(maxLC < lettCount)
        {
            maxLC = lettCount;
            lettCount = 1;
        }
    }

    cout<<maxLC<<endl<<endl;
    cout<<strlen(napis);


    return 0;
}
