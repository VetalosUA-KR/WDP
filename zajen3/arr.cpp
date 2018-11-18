#include <iostream>

///ÑÄÂÈÃ ÌÀÑÑÈÂÀ Â ÏÐÀÂÎ ÍÀ 1 ÝËÅÌÅÍÒ


using namespace std;

const int n = 9;

int main ()
{
    int mas[n] = {1,2,3,4,5,6,7,8,9};
    int a = mas[n-1];
    for (int i = n; i >= 0; i--)
    {
        mas[i-1] = mas[i-2];
    }
    mas[0] = a;

    for (int i = 0; i < n; i++)
    {
        cout << mas[i] << " ";
    }

    return 0;
}
