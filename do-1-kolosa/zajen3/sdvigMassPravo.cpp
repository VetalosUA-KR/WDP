#include <iostream>

///ядбхц люяяхбю б опюбн мю 1 щкелемр


using namespace std;

const int n = 10;

int main ()
{
    int mas[n] = {1,2,3,4,5,6,7,8,9,10};

    for (int i=0;i<n;i++)
    {
        cout << mas[i]<< " ";
    }
    cout <<endl<< "==========" << endl;

    int a = mas[0];
    for (int i = 0; i < n-1; i++)
    {
        mas[i] = mas[i+1];
    }
    mas[n-1] = a;

    for (int i=0;i<n;i++)
    {
        cout << mas[i]<< " ";
    }

    return 0;
}

