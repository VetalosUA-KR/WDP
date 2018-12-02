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
    int n = 5;

    int arr[n][n];



    for(int i = 0; i< n; i++)
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
    }

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
            buffers = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = buffers;
        }
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

