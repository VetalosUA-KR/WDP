#include<iostream>
using namespace std;

void czytajTab(int a[], int length);
void wypiszTab(int a[], int length);
void zamienTab1(int a[], int length, int i1, int i2);
void zamienNieParzNaZer(int a[], int length);
bool czyTablicaUporzRosna(int a[], int length);
bool czyTablicaSymetryczna(int a[], int length);
bool czyTablicaZawieraPowtorz(int a[], int length);
void zamienaNaSrednia(int a[], int length);

int maxTab(int a[], int length);

int main ()
{
    int N,i,j;
    cout<<"Podaj dlugosc tablicy : ";
    cin>>N;
    int x[N];
    cout<<"Podaj dane do tablicy : \n";
    czytajTab(x, N);
    cout<<endl<<"Tywoja tablica : \n";
    wypiszTab(x, N);

    cout<<"Podaj dwa indeksy : ";
    cin >> i >> j;
    cout<<"Zamiana elementow o podanych indeksach (jesli sa)...\n";
    zamienTab1(x,N,i,j);
    cout<<"\ N-tablica po zamianie : \n";
    wypiszTab(x, N);
    cout << "\n\n";
    int maxval = maxTab (x, N);
    cout<<"Maksymalna wartosc w tablicy = "<<maxval<<endl;
    cout<<endl<<endl<<boolalpha<<"czy powyrzsza tablica sa uporzatkowana rosnaco ? --> "<<czyTablicaUporzRosna(x, N)<<endl;
    cout<<endl<<boolalpha<<"czy powyrzsza tablica sa symetryczna ? --> "<<czyTablicaSymetryczna(x, N)<<endl;
    cout<<endl<<boolalpha<<"czy powyrzsza tablica zawiera powtorzenia ? --> "<<czyTablicaZawieraPowtorz(x, N)<<endl<<endl;
    zamienNieParzNaZer(x, N);
    cout<<"tablica z 0 zamest nieparzystych"<<endl;
    wypiszTab(x, N);
    cout<<endl<<endl<<"tablica z srednia zamest wyrazom mniej o sredniej"<<endl;
    zamienaNaSrednia(x, N);
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

bool czyTablicaUporzRosna(int a[], int length)
{
    for (int i = 0; i < length; i++)
    {
        if(a[i] > a[i+1])
        {
            return false;
        }
    }
    return true;
}

bool czyTablicaSymetryczna(int a[], int length)
{
    for (int i = 0, j = length-1; i < (length/2); i++, j--)
    {
        if(a[i] != a[j])
        {
            return false;
        }
    }
    return true;
}

bool czyTablicaZawieraPowtorz(int a[], int length)
{
    for (int i = 0; i < length; i++)
    {
        for (int j = i+1; j < length; j++)
        {
            if(a[i] == a[j])
            {
                return true;
            }
        }
    }
    return false;
}

void zamienaNaSrednia(int a[], int length)
{
    int srednia = 0;
    int i = 0;
    for ( ;i < length; i++)
    {
        srednia += a[i];
    }
    srednia = srednia/i;
    for (int j = 0; j < length; j++)
    {
        if(a[j] < srednia)
        {
            a[j] = srednia;
        }
    }
}












