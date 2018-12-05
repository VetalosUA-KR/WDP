#include<iostream>
#include<cmath>

using namespace std;

int poleTrojk(int a, int b, int c);
int obwTrojk(int a, int b, int c);
bool czyBoki(int a, int b, int c);

int main ()
{
    int a;
    int b;
    int c;
    int ile = 1;

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
            if(czyBoki(a,b,c) == true)
            {
                cout<<"obwod trojkata"<<obwTrojk(a,b,c)<<endl;
                cout<<"pole "<<poleTrojk<<endl;
            }
        }

    }


    return 0;
}


int poleTrojk(int a, int b, int c)
{
    float p = (a+b+c)/2.0;
    float pt;
    pt = sqrt(p*(p-a)*(p-b)*(p-c));
    return pt;
}

int obwTrojk(int a, int b, int c)
{
    if(a+b > c && b+c>a && a+c>b)
        return a+b+c;
}

bool czyBoki(int a, int b, int c)
{
    if(a <= 0 || b <= 0 || c <= 0)
        return false;
    if(a+b > c && b+c>a && a+c>b)
    return true;
    else return false;
}
