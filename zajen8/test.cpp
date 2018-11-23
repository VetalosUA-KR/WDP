#include<iostream>


using namespace std;



int main ()
{
    int n = 2;


    int a1[n][n];
    a1[0][0] = 1; a1[0][1] = 2;
    a1[1][0] = 3; a1[1][1] = 4;

    int a2[n][n];
    a2[0][0] = 5; a2[0][1] = 6;
    a2[1][0] = 7; a2[1][1] = 8;

    /*int a1[n][n];
    a1[0][0] = 1; a1[0][1] = 2; a1[0][2] = 3;
    a1[1][0] = 4; a1[1][1] = 5; a1[1][2] = 6;
    a1[2][0] = 7; a1[2][1] = 8; a1[2][2] = 9;

    int a2[n][n];
    a2[0][0] = 10; a2[0][1] = 11; a2[0][2] = 12;
    a2[1][0] = 13; a2[1][1] = 14; a2[1][2] = 15;
    a2[2][0] = 16; a2[2][1] = 17; a2[2][2] = 18;*/



    int ilA[n][n];


    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<a1[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl<<"--"<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<a2[i][j]<<" ";
        }
        cout<<endl;
    }
cout<<endl<<"--"<<endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int s = 0;
            for(int k = 0; k < n; k++)
            {
                ///s += a1[i][k]*a2[k][j];
                cout<<a1[i][k]<<" * "<<a2[k][j]<<" || "<<"i = "<<i<<"    j = "<<j<<"    k = "<<k<<endl;
            }
            cout<<endl;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            //cout<<ilA[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}




