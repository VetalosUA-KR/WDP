/*
clutf - Command Line UTF

Przykladowe dzialanie:
MacBook-Air-Piotr:pf1_coding fulmanp$ g++ clutf.cpp
MacBook-Air-Piotr:pf1_coding fulmanp$ ./a.out ą a

1: string="ą" bytes=2 utflen=1
1 bajt nowego znaku: 196
kolejny bajt: 133
0 196 c4
1 133 85
litera ą

2: string="a" bytes=1 utflen=1
Nowy znak o kodzie: 97
0 97 61
normalna litera: a o kodzie 97
*/

#include <cstdio>
#include <cstring>
#include <iostream>
#include <Windows.h>

using namespace std;
int b1;
	int b2;

// From:
// https://stackoverflow.com/questions/7298059/how-to-count-characters-in-a-unicode-string-in-c
// returns the number of utf8 code points in the buffer at s
/*size_t utf8len(char *s)
{
    size_t len = 0;
    for (; *s; ++s) if ((*s & 0xC0) != 0x80) ++len;
    return len;
}*/

// W kodzie poniże zakładam kolejność bajtów BE (big endian) dla kodowanego tekstu
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


int main() {
	int i;



	//std::setlocale(LC_CTYPE, "");
	//setlocale(LC_CTYPE, "");


    /*for(i=1; i<argc; i++){
        printf("\n%d: string=\"%s\" bytes=%lu utflen=%lu\n", i, argv[i], strlen(argv[i]), utf8len(argv[i]));
        iterateOverUTF8Chars(argv[i]);
    }*/


    cout<<endl<<"----------------------"<<endl;
    char *t[1] = {"ą"};

        iterateOverUTF8Chars(t[0]);



	/* //Kodd pozostawiony do ewentualnych dalszych testów
	const wchar_t * text = L"Вітаю, шаноўны спадар!";
    wprintf( L"printf wchar_t*: '%ls'\n", text );
    wprintf( L"Polish letters test: ąćęłóżń\n" );
    printf("%lu %lu\n", wcslen(text), strlen(argv[3]));
    */

    return 0;
}
