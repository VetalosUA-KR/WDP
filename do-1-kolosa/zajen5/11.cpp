#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main()
{

    /// n = кол-во блоков
    /// q = порядковый номер блока
    /// j = порядковый номер строки
    /// k,i = кол-во элементов в строке

    int n = 4;
    for (int q = 0; q < n; q++)
    {
        for (int j = 0; j < n-q; j++)
        {
            //if(j%2!=0)
            //{
                for (int k = 0; k < n-j; k++)
                {
                    cout << " ";
                }
                for (int i = 0; i < j+1 ; i++)
                {
                    cout << "* ";
                }
            cout << endl;
            //}


        }
    }
    /*for (int j = 0; j < n; j++)
    {
        for (int k = 0; k < n-j; k++)
        {
            cout << " ";
        }
        for (int i = 0; i < j+1 ; i++)
        {
            cout << "* ";
        }

        cout << endl;
    }
    for (int j = 0; j < n+1; j++)
    {
        for (int k = 0; k < n-j; k++)
        {
            cout << " ";
        }
        for (int i = 0; i < j+1 ; i++)
        {
            cout << "* ";
        }

        cout << endl;
    }*/

    return 0;
}
