#include<iostream>
#include<cstring>

using namespace std;

int main ()
{

    char napis[30];
    char napisSZ[0];
    cin.get(napis,30);

    for (int i = 0; i < strlen(napis); i ++)
    {
        /// chek range latter
        if(int(napis[i] > 96 && int(napis[i]) < 123))
        {
            /// if range more than 122
            if (int(napis[i]+2 > 122))
            {
                /// add to start difference
                int delta = (int(napis[i]+2))%122;
                napisSZ[i] = char(int(96+delta));
            }
            else
            {
                napisSZ[i] = char(int(napis[i]+2));
            }
        }
    }

    for (int i = 0; i < strlen(napisSZ); i ++)
    {
        cout << napisSZ[i];
    }

    return 0;
}
