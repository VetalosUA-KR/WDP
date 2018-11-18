#include <iostream>

using namespace std;


int main()
{
    int n = 0;

    int G = 0;
    int mniejszaSUM = 1;
    int wiekszaSUM = 1;

    cout << "Podaj liczby G "; cin >> G;
    while (true)
    {
        cout << "wpisz licbu "; cin >> n;

        if (n != 0)
        {
            if (n>G)
            {
                wiekszaSUM *= n;
            }
            else
            {
                mniejszaSUM *= n;
            }
        }
        else
        {
            cout << "iloczyn mniejszych = " << mniejszaSUM<<endl;
            cout << "iloczyn wiekszych = " << wiekszaSUM<<endl;
            break;
        }
    }


    return 0;
}
