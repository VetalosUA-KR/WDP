#include <iostream>
#include <cmath>


using namespace std;

int main ()
{
    bool tab[24];

    bool p = false;
    bool q = false;
    do
    {
        q = !q;
        do
        {
            cout << p <<" | "<< q<< " | " << (p&&q) <<" | " << (p||q)<< " | " << !p <<endl;
            p = !p;
        }while (p == true);
    }while (q == true);



    return 0;
}










