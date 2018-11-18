#include<iostream>
#include<time.h>
#include<stdlib.h>

using namespace std;

int main ()
{
    srand(time(NULL));

    int lengthTab = 6;

    int tabUzytkownik[lengthTab];
    int tabRandLicz[lengthTab];


    cout << "Wpisz 6 dowolnych liczb od 1 do 49"<<endl;
    int i = 0;
    while (i < lengthTab)
    {
        int licz = 0;
        cout << " liczba "<< i+1<< " = ";cin >> licz;
        if (licz < 1 || licz > 49)
        {
            cout << "Podana liczba nie jest w zakrese liczb od 1 do 49"<<endl;
        }
        else
        {
            tabUzytkownik[i] = licz;
            i++;
        }
    }

    /// Наполняем массив случайными не повторяющимися числами от 0 до 49
    bool flag = true;
    int randLiczb = rand()%49+1;
    int q = 0;
    /// наполняем массив
    while(q < lengthTab)
    {
        /// если true значит
        /// случай 1) первая запись
        /// случай 2) случайно сгенерированое число не содержится в массиве
        if (flag)
        {
            tabRandLicz[q] = randLiczb;
            flag = false;
            q++;
        }
        /// false если случайно сгенерированое число уже содержится в массиве
        else if (!flag)
        {
            randLiczb = rand ()%49 + 1; /// генерируем новое
            bool chek = false;
            /// пробегаемся по массиву для сравнения сгенерированого числа с уже существующими
            for (int i = 0; i < lengthTab; i++)
            {
                /// если хоть одно совпадение найдено, меняем флаг
                if(tabRandLicz[i] == randLiczb)
                {
                    chek = true;
                }
            }
            /// если совпадения были, генерируем новое число
            if (chek == true)
            {
                randLiczb = rand ()%49 + 1;
            }
            /// если совпадений не было, значит число уникальное, и можно его записать в массив
            else
            {
                flag = true;
            }
        }
    }

    cout <<endl<< "==========================="<<endl;

    /// Проверяем две таблицы на совпадения
    int ileZbiegow = 0;
    for (int i = 0; i < lengthTab; i ++)
    {
        for (int j = 0; j < lengthTab; j ++)
        {
            if (tabUzytkownik[i] == tabRandLicz[j])
            {
                cout << "jest zbieg! ->   "<<tabUzytkownik[i]<<"  i  "<<tabRandLicz[j]<<endl;
                ileZbiegow++;
            }
        }
    }

    cout << "zbiegow w ogole = "<<ileZbiegow;


    cout <<endl<< "==========================="<<endl;
    ///For debug
    for (int i = 0; i < lengthTab; i ++)
    {
        cout << tabRandLicz[i]<<" ";
    }
    cout <<endl<<endl;
    return 0;
}

