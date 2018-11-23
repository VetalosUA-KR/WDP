#include<iostream>


using namespace std;


int fib(int n)
{
    if(n == 0) return 1;
    else return (n * (fib(n-1)));
}

int main ()
{

    cout<<fib(3);

    return 0;
}
