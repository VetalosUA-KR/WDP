#include <iostream>
using namespace std;

int main()
{

    int a = 10;
    cout << a-((a*0.01)*10);

    return 0;
}
/*
#include <iostream>
using namespace std;

int main()
{
    float q = 500;
    float n = 40;
    int i = 2;
    int ilosz = 0;

    cout << q<<endl;
    q -= n*5;
    ilosz = 5;
    n = n * ((i-1.0)/i);
    while (q >=0)
    {
        ilosz ++;
        cout << q<<endl;
        q -= n;
        if (ilosz%5 == 0)
        {
            i++;
            n = n * ((i-1.0)/i);
        }

    }
    cout << "===========" << endl << ilosz;



    return 0;
}

*/
