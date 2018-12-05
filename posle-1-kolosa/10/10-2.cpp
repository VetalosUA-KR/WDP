#include<iostream>
#include<cmath>

using namespace std;

bool czyPierwsz(int a);

int main ()
{
    int a;
    int b;
    int c;
    int ile = 0;

    cout <<"wpisz dowolny liczby"<<endl;

    while(true)
    {
        a = b;
        b = c;
        cin>>c;
        if (c == 0) break;
        ile++;
        if(ile >= 3)
        {
            if(czyPierwsz(a) || czyPierwsz(b) || czyPierwsz(c))
            {
                cout<<a<<" "<<b<<" "<<c<<endl;
            }
        }
    }
    return 0;
}

bool czyPierwsz(int a)
{
    for(int i = 2; i < a-1; i++)
    {
        if(a%i == 0)
        {
            return false;
        }
    }
    return true;
}

