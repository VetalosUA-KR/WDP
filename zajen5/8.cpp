#include <iostream>
using namespace std;

int main()
{

    float d = 0;
    float s = 0;
    int k = 0;
    int i = 2;

    int ilosz = 0;

    cout << "wpisz na ile cm zaba bede skakac -> "; cin >> s;
    cout << "wpisz  ile metrow trzeba zabie  skakac przejsc -> "; cin >> d;
    cout << "wpisz  limit dlugosci skoka zaby, mniejsze od ktorego zaba nie bede skakac -> "; cin >> k;

    d = d*100;

    d -= s*5;
    ilosz = 5;
    s = s * ((i-1.0)/i);

    while (d >=0)
    {
        if(s<=k)
        {
            cout << "Nie udalo sie. Zaba jest zmeczona =((((";
            break;
        }
        else
        {
            ilosz ++;
            d -= s;
            if (ilosz%5 == 0)
            {
                i++;
                s = s * ((i-1.0)/i);
            }
        }


    }
    cout << "Udalo sie. Zaba doskakala do konca drogi za "<<ilosz<<" skoka"<<endl;

    return 0;
}
