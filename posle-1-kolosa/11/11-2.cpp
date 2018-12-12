#include<iostream>
using namespace std;

void czytajTab(int a[], int length);
void wypiszTab(int a[], int length);
void zamienTab1(int a[], int length, int i1, int i2);
void zamienNieParzNaZer(int a[], int length);

int maxTab(int a[], int length);

int main ()
{
    int N,i,j;
    cout<<"Podaj dlugosc tablicy : ";
    cin>>N;
    int x[N];
    cout<<"Podaj dane do tablicy : \n";
    czytajTab(x, N);
    cout<<"Tywoja tablica : \n";
    wypiszTab(x, N);
    cout<<"\n\n";

    /*cout<<"Podaj dwa indeksy : ";
    cin >> i >> j;
    cout<<"Zamiana elementow o podanych indeksach (jesli sa)...\n";
    zamienTab1(x,N,i,j);
    cout<<"\ N-tablica po zamianie : \n";
    wypiszTab(x, N);
    cout << "\n\n";*
    int maxval = maxTab (x, N);
    cout<<"Maksymalna wartosc w tablicy to"<<maxval<<endl;*/


    zamienNieParzNaZer(x, N);
    cout<<"tablica z 0 zamest nieparzystych"<<endl;
    wypiszTab(x, N);

    return 0;
}

void czytajTab(int a[], int length)
{
    for(int i = 0; i < length; i++)
    {
        cout<<"element "<<i<<" : ";
        cin>>a[i];
    }
}

void wypiszTab(int a[], int length)
{
    for(int i = 0; i < length; i++)
    {
        cout<<a[i]<< " ";
    }
}

void zamienTab1(int a[], int length, int i1, int i2)
{
    if(i1 >= length || i1 < 0 || i2 >= length || i2 < 0)
    {
        return;
    }
    int temp;
    temp = a[i1];
    a[i1] = a[i2];
    a[i2] = temp;
}

int maxTab(int a[], int length)
{
    int m = a[0];
    for(int i = 1; i < length; i++)
    {
        if(a[i]>m)
        {
            m = a[i];
        }
    }
    return m;
}

void zamienNieParzNaZer(int a[], int length)
{
    for(int i = 0; i < length; i++)
    {
        if(a[i] % 2 != 0)
        {
            a[i] = 0;
        }
    }
}

