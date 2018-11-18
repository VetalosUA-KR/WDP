#include <iostream>
using namespace std;
int main()
{
    int n;
    int dzielnik = 2;
    cout << "N = ";
    cin >> n;
    cout << n << " = 1";
    while (n > 1)
    {
        while (n % dzielnik == 0)
        {
            cout << " * " << dzielnik;
            n = n / dzielnik;
        }
        dzielnik++;
    }
    return 0;
}
