#include <iostream>
using namespace std;

int main()
{

    float x = 0;
    float h = 0;
    int y = 0;
    int i = 2;

    int ilosz = 0;

    cout << "wpisz na ile cm gasienica bede wdrapowac za raz -> "; cin >> x;
    cout << "wpisz  ile metrow wysokosc drzewa -> "; cin >> h;
    cout << "wpisz  na ile cm gasienica bede zsuwa z drzewa -> "; cin >> y;

    h = h*100;

    h -= x*7;
    ilosz = 7;
    x = x - ((x*0.01)*10);

    while (h >= 0)
    {
        h -= x;
        if (ilosz%7 == 0)
        {
            h += y;
            x = x - ((x*0.01)*10);
        }
        ilosz++;
    }
    cout <<ilosz <<endl;

    return 0;
}

