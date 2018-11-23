#include <iostream>

using namespace std;


int ciag_1(int n)
{
    if(n == 1) return 3;
    else return 2*ciag_1(n-1)+1;
}


int main ()
{
    cout<<ciag_1(4);
    return 0;
}
