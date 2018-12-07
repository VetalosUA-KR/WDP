#include<iostream>

using namespace std;

int main ()
{
    int n = 6;
    int rezultArray[n]; /// массив с результатом записаным на 6-ти битах
    for(int i = 0; i < n; i ++)
    {
        rezultArray[i] = 0;
    }

    int a = 52; /// исходное число ДО 63 включительно

    int b = 2;  /// система исчесления
    int r;      /// останоток от деления
    int c;      /// результат деления
    int counter = 5;/// счетчик битов

    while (c != 0)
    {
        c = a/b;
        r = a%b;
        a = c;
        rezultArray[counter] = r;
        counter--;
    }

    for(int i = 0; i < n; i ++)
    {
        cout<<rezultArray[i]<<" | ";
    }

    return 0;
}
