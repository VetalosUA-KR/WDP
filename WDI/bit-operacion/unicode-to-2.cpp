#include<iostream>
#include <fstream>
using namespace std;



void iterateOverUTF8Chars(char *s) {
	int bajt; // Numer bajtu aktualnego znaku.
	int bajtowNaZnak; // Ile bajtów potrzeba na zakodowanie aktualnego znaku.
	int i; // Iterator w petli.
	int bajty[6]; // Tablica bajtow kodujacych jedne znak. W UTF8 może to być
	              // maksymalnie 6 bajtów (choć w kodzie obsługuje co najwyżej 2).

	for (; *s; ++s){
		if ((*s & 0x80) == 0){// Znak kodowany na 1 bajcie = ASCII
			printf("Nowy znak o kodzie: %d\n", (unsigned char)(*s));
			bajt = 1;
			bajtowNaZnak = 1;
			bajty[0] = (unsigned char)(*s);
		}
		else if ((*s & 0xC0) == 0xC0){// Znak kodowany na 2 bajtach
			printf("1 bajt nowego znaku: %d\n", (unsigned char)(*s));
			bajt = 2;
			bajtowNaZnak = 2;
			bajty[0] = (unsigned char)(*s);
		}
		else if ((*s & 0x80) == 0x80){// Kolejny bajt znaku kodowanego na więcej niż 1 bajcie
			printf("kolejny bajt: %d\n", (unsigned char)(*s));
			bajt--;
			bajty[bajtowNaZnak - bajt] = (unsigned char)(*s);
		}

		if (bajt == 1){
			i = 0;
			while (i < bajtowNaZnak){
				printf("%d %d (%x)\n", i, bajty[i], bajty[i]);
                //b1 = bajty[i];
				i++;
			}

			// Podjęcie akcji w zależności od rodzaju rozpoznanego znaku
			if (bajtowNaZnak == 1){//Znak kodowany na 1 bajcie = ASCII
				printf("normalna litera: %c o kodzie %d\n", bajty[0], bajty[0]);
			} else if (bajtowNaZnak == 2){//Znak kodowany na 2 bajtach
				if (bajty[0] == 0xc4 && bajty[1] == 0x85){// litera ą
					printf("litera ą\n");
				} else if (bajty[0] == 0xc4 && bajty[1] == 0x87){// litera ć
					printf("litera ć\n");
				} else if (bajty[0] == 0xc4 && bajty[1] == 0x99){// litera ę
					printf("litera ę\n");
				} else if (bajty[0] == 0xc5 && bajty[1] == 0x82){// litera ł
					printf("litera ł\n");
				} else if (bajty[0] == 0xc5 && bajty[1] == 0x84){// litera ń
					printf("litera ń\n");
				} else if (bajty[0] == 0xc3 && bajty[1] == 0xb3){// litera ó
					printf("litera ó\n");
				} else if (bajty[0] == 0xc5 && bajty[1] == 0xbc){// litera ż
					printf("litera ż\n");
				} else if (bajty[0] == 0xc5 && bajty[1] == 0xba){// litera ź
					printf("litera ź\n");
				}
			}
		}
	}
}

void test(char *s)
{
    int i = 0;
    int byte[2];
    for (; *s; ++s)
    {
        byte[i] = (unsigned char)(*s);
        cout<<byte[i]<<endl;
        i++;
    }

    /// в массиве byte числа нужно перевести в двоичную систему, разрезать на 2 массива по 8 бит,
    /// в первом массиве "отрезать первые 3 бита", во втором массиве первые 2 бита,
    /// склеить масиввы, записать их в один массив с лева на право, с права недостающие биты заменяем на 0
    /// делим по 4 бита, переводим в десятичную систему
    /// UNICODE готов
    cout<<"next letters"<<endl;
}
int main ()
{
    int n = 4;
    char *t[4] = {"ź","ł","ś","ą"};
    for(int i = 0; i < n; i++)
    {
        test(t[i]);
    }

    return 0;
    /* //Kodd pozostawiony do ewentualnych dalszych testów
	const wchar_t * text = L"Вітаю, шаноўны спадар!";
    wprintf( L"printf wchar_t*: '%ls'\n", text );
    wprintf( L"Polish letters test: ąćęłóżń\n" );
    printf("%lu %lu\n", wcslen(text), strlen(argv[3]));
    */

}

