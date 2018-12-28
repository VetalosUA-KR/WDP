#include<iostream>
using namespace std;

struct Data{  /// typ strukturalny reprezentujacy date
    unsigned int dd;
    unsigned int mm;
    unsigned int rr;
};

//oprogramowujemy Date:
void wypiszDate(Data d);
void pobierzDate(Data &d);

///-------------------------------------

struct Student{  /// typ strukturalny reprezentujacy dana studenta
    char imie[50];   // polem struktury moze byc tablica, w tym napis "w stylu C"
    char nazwisko[50];
    Data dataUr;  // pole struktury moze samo byc struktura
    int indeks;
    float sr_ocen;
   // float oceny[30]; //zakomentowane zeby bylo szybciej, ale mozliwe
};


//oprogramowujemy Studenta:
void wypiszStud(Student s);
void pobierzStud(Student &s);



///------------------------------


struct grupaStud
{
    Student osoby[30];  // miejsce na dane osob - w grupie bedzie max 30
    int ileOsobJest = 0;  // ile osob naprawde jest w grupie
};

//oprogramowujemy grupeStud:
void pobierzGrupe(grupaStud &g);
//mozna dopisac funkcje wypiszGrupe (korzystajaca z wypiszStud)

//------------------------------------


int main()
{

   ///przyklad uzycia typu Data:
    Data kiedy_egzamin;
    kiedy_egzamin.rr = 2019;
    kiedy_egzamin.mm=1;
    kiedy_egzamin.dd=24;

    cout << "egzamin bedzie ";
    wypiszDate(kiedy_egzamin);
    cout << endl<<endl;


    ///przyklad uzycia typu Student:
    Student kolega, kolezanka;
    kolega.indeks = 12345;
    cout << "podaj date urodzenia kolegi: " << endl;
    pobierzDate(kolega.dataUr);
    cout << "osoba o indeksie " << kolega.indeks << " urodzila sie ";
    wypiszDate(kolega.dataUr);
    cout << endl;


    cout << "\npodaj dane kolezanki: " << endl;
    pobierzStud(kolezanka);
    wypiszStud(kolezanka);


    cout << "\npodaj dane kolegi: " << endl;
    pobierzStud(kolega);
    wypiszStud(kolega);


    cout << endl <<"wprowadz sklad samorzadu studenckiego: " << endl;
    Student samorzad[3];   //tablica studentow
    for (int i=0; i<3; i++)
    {
        cout << "podaj dane osoby " << i+1 <<":\n";
        pobierzStud(samorzad[i]);
    }

    cout << "samorzad studencki to: \n";
    for (int i=0; i<3; i++)
    {

       wypiszStud(samorzad[i]);
    }



    ///przyklad uzycia typu grupaStud:
     grupaStud g13;
     cout << endl <<"wprowadz sklad grupy 13: " << endl;
     pobierzGrupe(g13);
    //nalezaloby dopisac wypisanie skladu grupy

    return 0;
}


///------------------------

void wypiszDate(Data d)
{
    cout << d.dd <<"." << d.mm << "." << d.rr;
}


void pobierzDate(Data &d)
{
    int dz, m,r;
   cout << "podaj dzien, miesiac i rok: ";
   cin >> dz >> m >> r;
   // funkcja powinna kontrolowac poprawnosc podanych danych
   // i ustawiac tylko 'sensowna' date
   // ponizej czastkowa kontrola
   // (w pelnej wersji nalezaloby sprawdzic poprawnosc roku, miesiaca,
   //  a nastepnie dnia z uwzglednieniem miesiaca i przestepnosci)
   if (dz>0 && dz<=31)
    d.dd = dz;
   else
    {  do{
        cout << "dzien niepoprawny, podaj nowy: ";
        cin >> dz;}
        while (dz<=0 || dz>31);
        d.dd = dz;
    }
    d.mm = m;
    d.rr = r;
    cin.ignore(); //sprzatamy enter z bufora klawiatury (funkcja zostawi czysty bufor)
   }



void wypiszStud(Student s)
{
    cout << s.imie << " " << s.nazwisko << endl;
    cout << "ur. "; wypiszDate(s.dataUr);  cout << endl;
    cout << "indeks: " << s.indeks << ",  sr. ocen: " << s.sr_ocen << endl;
}


void pobierzStud(Student &s)
{
    cout << "podaj imiona: "; cin.getline(s.imie,50);
    cout << "podaj nazwisko: "; cin.getline(s.nazwisko,50);
    cout << "podaj date urodzenia: \n";
    pobierzDate(s.dataUr);
    cout << "podaj indeks: " ; cin >> s.indeks;
    cout << "podaj srednia ocen: " ; cin >> s.sr_ocen;
    cin.ignore();  // zjadamy enter, funkcja zostawi czysty bufor (strumien)
}


void pobierzGrupe(grupaStud &g)
{
    int i=0;
    char odp;
    while (true)
    {

    cout << "podaj osobe: " << endl;
    pobierzStud(g.osoby[i]);
    g.ileOsobJest++; i++;
    if (g.ileOsobJest==30)
    {
        cout << "grupa pelna\n"; break;
    }
    cout << "czy kolejna?"; cin >> odp;
    cin.ignore(); //sprzatamy enter pozostaly w buforze po pobraniu odpowiedzi
                  // (bez tego nie da sie pobrac imienia kolejnej osoby)
    if (odp=='n' || odp == 'N') break;

    }
}
