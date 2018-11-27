#include <iostream>

///ядбхц люяяхбю б опюбн мю 1 щкелемр


using namespace std;

const int n = 5;

int main ()
{
    int mas[n] = {1,2,3,4,5};

    for (int i = 0; i < n; i++)
    {
        cout << mas[i] << " ";
    }
    cout <<endl<< "========"<<endl;
    for (int i = 0; i < n/2; i++)
    {
        int a = mas[i];
        int b = mas[(n-i)-1];
        mas[i] = b;
        mas[(n-i)-1] = a;
    }

    for (int i = 0; i < n; i++)
    {
        cout << mas[i] << " ";
    }

    return 0;
}
