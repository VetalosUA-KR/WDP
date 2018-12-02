#include<iostream>

using namespace std;



int main ()
{
    int tab1[8]={0,0,0,1,0,1,1,1};
    int tab2[8]={1,0,0,0,1,0,1,1};

    int tab_rez[8];
    int buf=0;

    ///Odwracamy
    for(int i = 1; i < 8; i++)
    {
        if(tab2[i] == 0)
        {
            tab2[i] = 1;
        }
        else
        {
            tab2[i] = 0;
        }
        if(i = 7)
        {
            tab2[i] += 1;
        }
    }

    ///Dodacz edynku





    for(int i = 7; i >= 0; i--)
    {

        if(tab1[i]+tab2[i]+buf == 3)
        {
            tab_rez[i] = 1;
            buf = 1;
        }
        else if(tab1[i]+tab2[i]+buf == 2)
        {
            tab_rez[i] = 0;
            buf = 1;
        }
        else if(tab1[i]+tab2[i]+buf == 1)
        {
            tab_rez[i] = 1;
            buf = 0;
        }
        else
        {
            tab_rez[i] = 0;
            buf = 0;
        }
    }

    for(int i = 0; i < 8; i++)
    {
        cout<<tab_rez[i]<<",";
    }

    return 0;
}

















