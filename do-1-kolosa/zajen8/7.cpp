#include<iostream>


using namespace std;


int main ()
{
    int n;

    cout<<"podaj jakie beda wielkosci matryce (kwadratowe)"; cin>>n;

    int macierz1[n][n];
    cout<<"podaj pierwszu macierz"<<endl;

    for(int j = 0; j < n; j++)
    {
        cout<<"Podaj "<<j+1<<" wiersz"<<endl;
        int i = 0;
        while(n>i)
        {
            cout<<"podaj "<<i+1<<" kolumny"<<endl;
            cin>>macierz1[j][i];
            i++;
        }
    }
    cout<<endl<<endl;
    for(int i = 0; i< n; i++)
    {
        for(int j = 0; j< n; j++)
        {
            cout<<macierz1[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Podaj drugu macierz o rozmiare 2x2"<<endl;

    ///*********************************************************************************************************///
    ///*********************************************************************************************************///
    ///*********************************************************************************************************///

    int macierz2[n][n];
    cout<<"podaj pierwszu macierz"<<endl;

    for(int j = 0; j < n; j++)
    {
        cout<<"Podaj "<<j+1<<" wiersz"<<endl;
        int i = 0;
        while(n>i)
        {
            cout<<"podaj "<<i+1<<" kolumny"<<endl;
            cin>>macierz2[j][i];
            i++;
        }
    }
    cout<<endl<<endl;
    for(int i = 0; i< n; i++)
    {
        for(int j = 0; j< n; j++)
        {
            cout<<macierz2[i][j]<<" ";
        }
        cout<<endl;
    }

    ///*********************************************************************************************************///
    ///*********************************************************************************************************///
    ///*********************************************************************************************************///

    int macierzSum[n][n];
    for(int i = 0; i< n; i++)
    {
        for(int j = 0; j< n; j++)
        {
            macierzSum[i][j] = macierz1[i][j]+macierz2[i][j];
        }
    }

     cout<<endl<<endl;
     cout<<"suma dwoch macierzej rowna sie"<<endl;
    for(int i = 0; i< n; i++)
    {
        for(int j = 0; j< n; j++)
        {
            cout<<macierzSum[i][j]<<" ";
        }
        cout<<endl;
    }

    ///*********************************************************************************************************///
    ///*********************************************************************************************************///
    ///*********************************************************************************************************///

    int macierzIloczyn[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int sum = 0;
            for(int k = 0; k < n; k++)
            {
                sum += macierz1[i][k]*macierz2[k][j];
            }
            macierzIloczyn[i][j] = sum;
        }
    }


    cout<<endl<<endl;
    cout<<"iloczyn dwoch macierzej rowna sie"<<endl;
    for(int i = 0; i< n; i++)
    {
        for(int j = 0; j< n; j++)
        {
            cout<<macierzIloczyn[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}

