#include<iostream>


using namespace std;


void dekorate(string d, int _count)
{
    cout<<endl;
    for(int q = 0; q < (_count*4)-1; q++)
    {
        cout<<d;
    }
    cout<<endl;
}


int main ()
{
    int n = 4;

    int arr[n][n];


    arr[0][0] = 0; arr[0][1] = 1; arr[0][2] = 2; arr[0][3] = 3;
    arr[1][0] = -1; arr[1][1] = 0; arr[1][2] = 1; arr[1][3] = 2;
    arr[2][0] = -2; arr[2][1] = -1; arr[2][2] = 0; arr[2][3] = 1;
    arr[3][0] = -3; arr[3][1] = -2; arr[3][2] = -1; arr[3][3] = 0;


    /*for(int i = 0; i< n; i++)
    {
        for(int j = 0; j< n; j++)
        {
            if(i > j)
            {
                arr[i][j] = 1;
            }
            else if (i < j)
            {
                arr[i][j] = 5;
            }
            else
            {
                arr[i][j] = 0;
            }
        }
    }*/

    for(int i = 0; i< n; i++)
    {
        for(int j = 0; j< n; j++)
        {
            cout<<arr[i][j]<<" | ";
        }
       dekorate("-", n);
    }

    dekorate("=", n);
    cout<<endl;

    int buffers = 0;
    for(int i = 0; i< n; i++)
    {
        for(int j = i; j< n; j++)
        {
            /*buffers = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = buffers;*/
            //arr[i][j] = arr[i][i];
            //arr[i][j] = arr[j][i]*0.85;

        }
    }

    for(int i = 0; i< n; i++)
    {
        buffers = arr[0][i];
        arr[0][i] = arr[n-1][i];
        arr[n-1][i] = buffers;
    }


    for(int i = 0; i< n; i++)
    {
        for(int j = 0; j< n; j++)
        {
            cout<<arr[i][j]<<" | ";
        }
        dekorate("-", n);
    }


    return 0;
}

