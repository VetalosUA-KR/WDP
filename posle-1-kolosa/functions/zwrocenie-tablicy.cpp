#include<iostream>
using namespace std;


int *tworzTabliceDodatnich (int a[], int length, int & resultLength)
{
    int positives = 0;
    for(int i = 0; i < length; i++)
    {
        if(a[i] > 0)
        {
            positives ++;
        }
    }
    int *resultArr = new int [positives];
    int place = 0;
    for(int i = 0; i < length; i++)
    {
        if(a[i] > 0)
        {
            resultArr[place] = a[i];
            place++;
        }
    }
    resultLength = positives;
    return resultArr;

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

int main ()
{
    int n,i,j;
    cout<<"Podaj dlugosc tablicy : ";
    cin>>n;
    int x[n];
    cout<<"Podaj dane do tablicy : \n";
    czytajTab(x, n);

    wypiszTab(x, n);

    int *tcz;
    int dl_tcz;

    tcz = tworzTabliceDodatnich(x, n, dl_tcz);
    cout<<endl;
    cout<<endl;
    cout<<endl;
    wypiszTab(tcz, dl_tcz);


    return 0;
}
