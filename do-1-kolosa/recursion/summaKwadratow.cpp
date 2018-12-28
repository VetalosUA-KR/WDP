#include <iostream>


using namespace std;

int sumKwad(int n)
{
    if(n == 1) return n*n;
    else return (n*n) + sumKwad(n-1);
}


int main ()
{
    cout<<sumKwad(4);
    return 0;
}
