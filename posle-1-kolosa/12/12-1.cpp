#include<iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int  zapisDoTablicy(int tab[], int lenght);
void wypiszZawartoscTablicy(int tab[], int lenght);
void losowyWartosciTablicy(int tab[], int lenght, int _min, int _max);
void usunElementyTablicy(int tab[], int tabWyn[], int lenght, int del_elem);
void NajdluzszyCiagArytmetyczny(int tab[], int tabWyn[], int lenght);

int lenghtDelElem = 0;
int lenghtCiagAret = 0;
int main ()
{
    int n;
    cout << "podaj dlugosc tablicy ";
    cin>>n;
    int arr[n];
    int arrDelElem[n];
    int delElem;
    int arrCiagAret[n];
    zapisDoTablicy(arr, n);
    wypiszZawartoscTablicy(arr, n);
    losowyWartosciTablicy(arr, n, 10, 5);
    cout<<endl;
    wypiszZawartoscTablicy(arr, n);
    cout<<"napisz jaki elementy trzeba usunuc -> ";cin>>delElem;
    usunElementyTablicy(arr, arrDelElem, n, delElem);
    cout<<endl;
    wypiszZawartoscTablicy(arrDelElem, lenghtDelElem);
    cout<<endl;
    NajdluzszyCiagArytmetyczny(arr, arrCiagAret, n);
    wypiszZawartoscTablicy(arrCiagAret, lenghtCiagAret);

    return 0;
}

void wypiszZawartoscTablicy(int tab[], int lenght)
{
    for(int i = 0; i < lenght; i++)
    {
        cout<<tab[i]<<" ";
    }
}

int zapisDoTablicy(int tab[], int lenght)
{
    for(int i =0; i < lenght; i++)
    {
        cout<<"podaj "<<i<<" element tablicy ";
        cin>>tab[i];
    }
}

void losowyWartosciTablicy(int tab[], int lenght, int _min, int _max)
{
    srand(time(NULL));
    for(int i = 0; i < lenght; i++)
    {
        int losowaLiczba = (rand() % _max) + _min;
        tab[i] = losowaLiczba;
    }
}

void usunElementyTablicy(int tab[], int tabWyn[], int lenght, int del_elem)
{
    int _count = 0;
    int i = 0;
    for(; i < lenght; i++)
    {
        if(tab[i] > del_elem)
        {
            tabWyn[_count] = tab[i];
            _count++;
        }
    }
    lenghtDelElem = _count;
}

void NajdluzszyCiagArytmetyczny(int tab[], int tabWyn[], int lenght)
{
    int r = 0;
    int koniec = 0;
    int currentDlug = 1;
    int maxDlugos = 1;

    for(int i = 1; i < lenght-1; i++)
    {
        r = tab[i-1]-tab[i];
        cout<<i<<" operacja.     "<<tab[i]<<" - "<<tab[i+1]<<" = "<<tab[i]-tab[i+1]<<endl;
        if((tab[i]-tab[i+1]) == r)
        {
            currentDlug++;
            koniec = i+1;
        }
        if(currentDlug > maxDlugos)
        {
            maxDlugos = currentDlug;
            currentDlug = 1;
        }

    }
    cout<<endl;
    cout<<"max dlina = "<<maxDlugos<<endl;
    cout<<"nomer = "<<koniec<<endl;
    cout<<endl;
    for(int i = koniec-maxDlugos; i <= koniec; i++)
    {
        cout<<tab[i]<<" ";
    }
}










