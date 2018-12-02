#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main ()
{
    const int W1 = 3;
    const int W2 = 3;
    const int W3 = 4;
    int tab3 [W1*W2*W3 ];
    for (int i =0; i<W1; i ++)
        for (int j =0; j<W2; j ++)
            for (int k =0; k<W3; k ++)
            {
                cout << " obliczam element na pozycji " << i << "," << j << "," << k
                     << " czyli liniowo " << (i*W2*W3) +(j*W3)+k << endl ;
                tab3 [(i*W2*W3) +(j*W3) +k] = (i*W2*W3) +(j*W3)+k;
            }
    cout << " --------------------------------------------" << endl ;
    for (int i =0; i<W1; i ++)
    {
        for (int j =0; j<W2; j ++)
        {
            for (int k =0; k<W3; k ++)
                cout << tab3 [(i*W2*W3) +(j*W3)+k] << " ";
            cout << endl ;
        }
        cout << endl ;
    }


    return 0;
}
