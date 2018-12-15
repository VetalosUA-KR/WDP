#include<iostream>
#include <fstream>
using namespace std;

int main ()
{
    /// побитовое AND
    int a = 65;
    cout<<a<<endl;
    a = a & 1; /// = 1
    cout<<a<<endl;
    cout<<"*****************************"<<endl;
    /// побитовое OR
    int b = 56;
    cout<<b<<endl;
    b = b | 3; /// = 59
    cout<<b<<endl;
    cout<<"*****************************"<<endl;
    /// побитовое NOT
    int c = -129;
    cout<<c<<endl;
    c = ~c;
    cout<<c<<endl;
    cout<<"*****************************"<<endl;
    /// побитовое XOR
    int d = 9;
    cout<<d<<endl;
    d = d ^ 13; /// = 4
    cout<<d<<endl;
    cout<<"*****************************"<<endl;
    /// свдиг на 2 бита в право
    int e = 15;
    cout<<e<<endl;
    e = e >> 2; /// = 3
    cout<<e<<endl;
    cout<<"*****************************"<<endl;
    /// сдивг на 2 бита в лево
    int f = 1;
    cout<<f<<endl;
    f = f << 2; /// = 4
    cout<<f<<endl;




    return 0;
}
