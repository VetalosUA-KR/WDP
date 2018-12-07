#include<iostream>
#include <cmath>

using namespace std;

int main ()
{
    int ileElemBukv = 8;/// Кол-во "элементов" в нашем слове
    int slowo[ileElemBukv];
    /// Буква 1
    slowo[0] = 43;
    slowo[1] = 15;

    /// Буква 2
    slowo[2] = 44;
    slowo[3] = 41;
    slowo[4] = 14;

    /// Буква 3
    slowo[5] = 44;
    slowo[6] = 40;
    slowo[7] = 11;



    char szesnastkowy[2];///





    int n = 6*ileElemBukv;
    int byteArray [n];
    /// Заполняем исходный массив пустыми байтами
    for(int i = 0; i < n; i ++)
    {
        byteArray[i] = 0;
    }


    /// Перебираем каждую букву и переводим в (2) код и добавляем в исходнный массив битов
    int counter = 5;/// счетчик битов
    for(int i = 0; i < ileElemBukv; i++)
    {
        int a = slowo[i]; /// исходное число

        int b = 2;  /// система исчесления
        int r;      /// останоток от деления
        int c;      /// результат деления
        int currentPozition = 0;

        while (c != 0)
        {
            c = a/b;
            r = a%b;
            a = c;
            byteArray[counter-currentPozition] = r;
            currentPozition++;
        }
        counter += 6;
        c = 1;/// убираем 0 у результата деления
    }



    ///
    ///
    /// ВЫВОД НА ЭКРАН
    ///
    ///
    int t = 0;
    for(int i = 0; i < n; i++)
    {
        if(i%6 == 0)
        {
            cout<<endl<<slowo[t]<<" = | ";
            t++;
        }
        cout<<byteArray[i]<<" | ";
    }

    cout<<endl<<endl<<"kroim po 8 bit";
    for(int i = 0; i < n; i++)
    {
        if(i%8 == 0) cout<<" *** |";
        cout<<byteArray[i]<<"|";
    }
    cout<<endl;



    int counter_16 = 0;
    int kolElem = n/4;

    int index_16 = 0;

    for(int j = 0; j < kolElem; j++)
    {
        int sum = 0;
        for(int i = 0; i < 4; i++)
        {
            sum += byteArray[i+counter_16]*pow(2,3-i);
        }
        counter_16 += 4;
        if(j%2==0) cout<<"  ";
        if(sum < 10) cout<<sum;
        else if (sum  == 10)cout<<"A";
        else if (sum  == 11)cout<<"B";
        else if (sum  == 12)cout<<"C";
        else if (sum  == 13)cout<<"E";
        else if (sum  == 14)cout<<"D";
        else if (sum  == 15)cout<<"F";
    }


    return 0;
}

