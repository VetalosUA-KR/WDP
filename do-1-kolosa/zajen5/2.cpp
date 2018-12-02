#include <iostream>
#include <cmath>


using namespace std;

int main ()
{
    int n = 0;
    int ilocz = 0;
    int sum = 0;
    int _max = 0;
    int _min = 100000;

    while (true)
    {
        cout << "wpisz liczbu -> "; cin >> n;
        if (n != 0)
        {
            sum += n;

            if (_min > n)
            {
                _min = n;
            }
            else if (_max < n)
            {
                _max = n;
            }
            ilocz++;
        }
        else
        {
            cout << "iloscz = " << ilocz <<endl;
            cout << "suma = " << sum <<endl;
            cout << "sriednia = " << sum/ilocz <<endl;
            cout << "minimalna = " << _min <<endl;
            cout << "maximum = " << _max <<endl;

            break;
        }
    }

    return 0;
}










