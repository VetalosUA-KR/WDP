#include<iostream>
#include<time.h>
#include<stdlib.h>
#include<cstring>


using namespace std;

int main ()
{

    int n = 35;

    srand(time(NULL));
    char letters[n][2];

    for (int i=0; i < n; i++)
    {
        int randLiczb = rand ()%25 + 97;
        letters[i][0] = randLiczb;
        letters[i][1] = 1;
    }

    for (int i=0; i < n; i++)
    {
        cout <<letters[i][0]<<" ";
    }
    cout<<endl;
    for (int i=0; i < n; i++)
    {
        for (int j=1+i; j < n; j++)
        {
            if(int(letters[i][0]) == int(letters[j][0]))
            {
                letters[i][1] ++;
            }
        }
    }

    for (int i=0; i < n; i++)
    {
        cout <<"litera - "<<letters[i][0]<<" pojawia sie "<<int(letters[i][1])<<" raza"<<endl;
    }

    return 0;
}
