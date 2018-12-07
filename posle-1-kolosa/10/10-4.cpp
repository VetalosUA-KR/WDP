#include<iostream>
using namespace std;



int NWD (int a, int b);

int main()
{
    int a = 0;
    int b = 0;
    int ile = 1;
    while(true)
    {
        cout<<"Wpisz liczbu "<<endl;
        a = b;
        cin>>b;
        if(b == 0) break;
        else
        {
            if(ile > 1)
            {
                cout<<"NWD liczb ("<<a<<";"<<b<<")"<<" = "<<NWD(a, b)<<endl;
                cout<<"NWW liczb ("<<a<<";"<<b<<")"<<" = "<<a*b/NWD(a, b)<<endl;
            }
            ile++;
        }
    }

}

int NWD (int a, int b)
{
    if(a%b == 0) return b;
    else return NWD(b, a%b);
}
