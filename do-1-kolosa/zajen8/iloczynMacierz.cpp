#include<iostream>


using namespace std;


int main ()
{


    int n = 2;

    int arr1[n][n];
    arr1[0][0] = 1; arr1[0][1] = 2;
    arr1[1][0] = 3; arr1[1][1] = 4;

    int arr2[n][n];
    arr2[0][0] = 5; arr2[0][1] = 6;
    arr2[1][0] = 7; arr2[1][1] = 8;



    for(int i = 0; i< n; i++)
    {
        for(int j = 0; j< n; j++)
        {
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"=================="<<endl;
    for(int i = 0; i< n; i++)
    {
        for(int j = 0; j< n; j++)
        {
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }



    int macierzIloczyn[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            //macierzIloczyn[i][j] = (arr1[i][j] + arr2[j][i]) * (arr1[i][j+1] + arr2[j+1][i]);
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


