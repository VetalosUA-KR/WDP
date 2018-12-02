#include <iostream>
using namespace std;
int main()
{

    ///TEST DATA
    /// x = 10
    /// z = 50
    /// k = 5000
    /// rezult  13 lat.   5370.65 pl

    float x = 0,z = 0;
    int k;
    float sum = 0;
    int lat = 1;
    float money = 0;

    cout << "wpisz ile ton jablek zebrane w pierwszy rok ";cin >> x;
    cout << "wpisz ile pl wartyje tona ";cin >> z;
    cout << "wpisz ile pl trzeba ";cin >> k;

    money += x * z;
    while (money < k)
    {
        if (lat%2 != 0)
        {
            x = (x*0.01)*50;
            money += x * z;
        }
        else
        {
            x = (x*0.01)*205;
            money += x * z;
        }
        lat ++;
    }
    cout << "trzeba  " << lat <<". zarobiac "<<money;


    return 0;
}
