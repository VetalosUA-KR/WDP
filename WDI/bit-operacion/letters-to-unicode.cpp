#include<iostream>
#include <fstream>
#include <cstring>
#include <cmath>

using namespace std;

void ileBajt(char *s);
void convertTo_2(int tab[]);

/// Кол-во байт на текущий элемент
int ile;

int main ()
{
    int n = 4;
    char *symbols[n] = {"ź","ł","p","ą"};

    /// Sprawdź, ile bajtów zawiera aktualny symbol
    for(int i = 0; i < n; i++)
    {
        if((*symbols[i] & 0x80) == 128)/// 2 байта на символ
        {
            cout<<endl<<"2 bajty na znak -> ( "<<*symbols[i]<<" ) bajty ->   ";
            ile = 2;
            ileBajt(symbols[i]);
        }
        else if((*symbols[i] & 0x80) == 0) /// 1 байт на символ
        {
            cout<<endl<<"1 bajty na znak -> ( "<<*symbols[i]<<" ) bajt  ->    ";
            ile = 1;
            ileBajt(symbols[i]);
        }
    }
    return 0;
}

/// сохраняет кол-во байт текущей буквы в массив,
/// который передается дальше на обработку для переведения в двоичную систему
///
/// wpisz wynik do tablicy jako(ź -> [197][186]).
void ileBajt(char *s)
{
    int i = 0;
    int byte[2];
    for (; *s; ++s)
    {
        byte[i] = (unsigned char)(*s);
        i++;
    }
    convertTo_2(byte);
}

/// конвертирует в двоичную систему байты текущего элемента
/// выводит результат на экран, массим rezultArray который хранит 8 бит обновляется после каждой итерации цикла
/// на элемент состоящий из 2 байт, будет выполнено 2 итерации цикла
///
/// Konwertuj bajty znaków na binarne i zapisz w jeden ciąg bajtów (11000101 10111010).
void convertTo_2(int tab[])
{
    cout<<tab[0]<<" ";
    cout<<tab[1]<<"    |  ";

    int n = 8*ile;
    int counter = 7;/// счетчик битов
    int rezultArray[n];/// массив с результатом записаным на 8-ти битах
    for(int j = 0; j < n; j ++)
    {
        rezultArray[j] = 0;
    }
    for(int i = 0; i < ile; i++)
    {
        int a = tab[i]; /// исходное число ДО 63 включительно
        int b = 2;  /// система исчесления
        int r;      /// останоток от деления
        int c = 1;      /// результат деления

        while (c != 0)
        {
            c = a/b;
            r = a%b;
            a = c;
            rezultArray[counter] = r;
            counter--;
        }
        counter = 15;
    }
    for(int i = 0; i < n; i ++)
    {
        cout<<rezultArray[i]<<"";
    }
    cout<<"    ";
    ///
    /// jezeli symbol 2 bajtowy
    if(ile == 2)
    {
        /// przesuwamy nasz główny ciąg bitów o 2 elementy w prawo, od 9 do zmniejszenia, .
        ///
        /// Сдвигаем массив на 2 элемента в право, с 9 элемента
        for(int i = 9; i >= 2; i--)
        {
            rezultArray[i] = rezultArray[i-2];
        }
        /// pierwsze 5 bitów resetujemy na 0
        ///
        /// первые 5 элементов обнуляем
        for(int i = 0; i < 6; i++)
        {
            rezultArray[i] = 0;
        }

        /// выводим результат на экран
        for(int i = 0; i < n; i ++)
        {
            cout<<rezultArray[i]<<"";
        }
        cout<<"    U+";
        ///
        /// Ciąg bitów dzielimy przez 4 bity i konwertujemy na system szesnastkowy. Wynik 4 cyfry (0 1 7 A)
        int counter_16 = 0;
        int kolElem = 16/4;
        for(int j = 0; j < kolElem; j++)
        {
            int sum = 0;
            for(int i = 0; i < 4; i++)
            {
                sum += rezultArray[i+counter_16]*pow(2,3-i);
            }
            counter_16 += 4;

            if(sum < 10) cout<<sum;
            else if (sum  == 10)cout<<"A";
            else if (sum  == 11)cout<<"B";
            else if (sum  == 12)cout<<"C";
            else if (sum  == 13)cout<<"E";
            else if (sum  == 14)cout<<"D";
            else if (sum  == 15)cout<<"F";
        }
    }
    /// символ из 1 байта
    else
    {
        //cout<<"         1 bajt";
    }
}
















