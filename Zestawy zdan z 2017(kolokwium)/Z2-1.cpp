#include<iostream>

using namespace std;

int main ()
{
    int z;
    int p;
    int n;
    int m;

    cout << "Podaj Z ";cin>>z;///zysk
    cout << "Podaj p ";cin>>p;/// % zwiekszenia
    cout << "Podaj N ";cin>>n;///czas
    cout << "Podaj M ";cin>>m;/// predel

    //int sum = z;
    for (int i = 2; i <= n; i++)
    {
        if(i%2 == 0)
        {
            //int per = z / 100;
            z += z + (z/100) * p;
        }
        else
        {

        }
        cout << "Rok "<<i<<". Zysk = "<<z<<endl;
    }

    if(z > m)
    {
        cout<<"Tak przekroczy i wyniesie "<<z<<" zl";
    }

    return 0;
}
