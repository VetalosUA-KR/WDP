#include<iostream>

using namespace std;

void menu (int &rez);
void obliczWszystko(int b, int &pole, int & obw);           ///kwadrat
void obliczWszystko(int b1, int b2, int &pole, int & obw);  ///prostokat
void obliczWszystko(int r, float &pole, float & obw);       ///kolo

int main ()
{
    int pole, obw;
    float pole1, obw1;
    int vybor = 0;

    menu(vybor);

    if(vybor == 1)///prostokat
    {
        int _b1, _b2;
        cout<<"podaj b1 i b2";cin>>_b1; cin>>_b2;
        obliczWszystko(_b1, _b2, pole, obw);
        cout<<"pole prostokata = "<<pole<<endl;
        cout<<"obwod prostokata = "<<obw<<endl;
    }
    else if(vybor == 2)///kwadrat
    {
        int _b;
        cout<<"podaj b ";cin>>_b;
        obliczWszystko(_b, pole, obw);
        cout<<"pole kwadrat = "<<pole<<endl;
        cout<<"obwod kwadrat = "<<obw<<endl;
    }
    else if(vybor == 3)///kolo
    {
        float _r;
        cout<<"podaj r ";cin>>_r;
        obliczWszystko(_r, pole1, obw1);
        cout<<"pole kwadrat = "<<pole1<<endl;
        cout<<"obwod kwadrat = "<<obw1<<endl;
    }


    return 0;
}

void menu (int &rez)
{
    cout<<"obliczic prostokat - 1"<<endl;
    cout<<"obliczic kwadrat - 2"<<endl;
    cout<<"obliczic kolo - 3"<<endl;
    cout<<"zrob wybor ->"<<endl;
    cin >> rez;
}

void obliczWszystko(int b, int &pole, int & obw)///kwadrat
{
    pole = b*b;
    obw = b*4;
}

void obliczWszystko(int b1, int b2, int &pole, int & obw)///prostokat
{
    pole = b1*b2;
    obw = (b1+b2)*2;
}

void obliczWszystko(int r, float &pole, float & obw)///kolo
{
    pole = r *r ;
    obw = r *2;
}

