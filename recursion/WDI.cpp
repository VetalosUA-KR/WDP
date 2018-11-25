#include<iostream>


/// пейспяхъ


using namespace std;

int fun_1_1(int n)
{
    if(n == 0) return 3;
    else return 3 * fun_1_1(n-1) + 2;
}


int fun_1_2(int n)
{
    if(n == 1) return -5;
    else return (fun_1_2(n-1)*2)-1;
}

int fun_1_3(int n)
{
    if(n == 0) return 11;
    else return (fun_1_3(n-1)+1)/n;
}

int fun_1_4(int n)
{
    if(n == 0) return fun_1_4(1);
    else if (n == 1) return 4;
    else return (3 * fun_1_4(n-1)) + (2 * fun_1_4(n-2));
}

int fun_1_5(int n)
{
    if(n == 0) return 2;
    else if (n == 1) return 3;
    else return (2 * fun_1_5(n-1)) - (fun_1_5(n-2)+1);
}


int main ()
{

    return 0;
}

