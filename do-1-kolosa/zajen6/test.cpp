#include<iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main ()
{

    srand(time(0));
    int ileL = 10;



    int BufIle;
    //cout << "wpisz ile liczb bede w tablice -> "; cin >> ileL;
    cout << "wpisz na ile liczb trzeba przesunac tablice -> "; cin >> BufIle;


    int buffetTab[BufIle];

    int tab[ileL];
    tab[0] = 1;
    tab[1] = 2;
    tab[2] = 3;
    tab[3] = 4;
    tab[4] = 5;
    tab[5] = 6;
    tab[6] = 7;
    tab[7] = 8;
    tab[8] = 9;
    tab[9] = 10;

    /// Наполняем массив случайными данными
    for (int i = 0; i < ileL; i ++)
    {
        //tab[i] = rand()%ileL;
        cout << tab[i]<< " ";
    }

    /// В буферный массив записываем  количество элементов с конца ПРАВОЙ стороны основного массива
    for (int i = 0; i < BufIle; i++)
    {
        buffetTab[i] = tab[ileL-BufIle+i];
    }
    cout << endl;
    //int buffer = tab[ileL-1];


    /// Сдвигаем все элементы массива в ПРАВО
    for (int i = ileL-BufIle; i >= 0; i--)
    {
       tab[i+BufIle] = tab[i];
    }

    /*
    for (int i = ileL,k = 0; i > BufIle; i--,k++)
    {
        cout << tab[ileL-k]<< "   stanovitsa  = "<< tab[ileL-BufIle-k]<<endl;
        tab[ileL-k] = tab[ileL-BufIle-k];
    }
    */

    //cout <<tab[0]<< " || "<<tab[1]<< " || "<<tab[2]<< " || "<< tab[3];
    /// Перезаписываем элементы
    for (int i = 0; i < BufIle; i ++)
    {
        tab[i] = buffetTab[i];
    }
    //tab[0] = buffer;

    /*for (int i = 0; i < ileL; i ++)
    {
        cout << tab[i]<< " ";
    }*/
    cout << endl <<"============"<<endl;
    for (int i = 0; i < ileL; i ++)
    {
        cout << tab[i]<< " ";
    }


    return 0;
}


