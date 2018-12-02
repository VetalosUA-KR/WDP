#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main()
{

    srand(time(0));
    int n = 0;
    int a = rand()%101;
    int ileProb = 50;
    int ileProbBylo = 0;
    int lvl = 1;
    int globalProb = 0;
    cout << "LVL -> " << lvl << endl;
    cout << "masz -> " << ileProb << " prob "<<endl;

    while (true)
    {
        if (ileProbBylo == ileProb)
        {
            cout<<"=============================="<<endl;
            cout << "niestety proby sie skonczyly =(";
            cout << "dosol do "<<lvl<<" LVL."<<endl;
            cout<<"=============================="<<endl;
            break;
        }
        else
        {
            cout << "wpisz liczbu zeby odgadac -> ";
            cin >> n;
            if (n > a)
            {
                cout << "podana liczba jest wieksa"<<endl;
                cout<< "zostalo sie "<<ileProb-ileProbBylo<<" prob"<<endl;
                cout << "--------------------------"<<endl;
            }
            else if (n < a)
            {
                cout << "podana liczba jest mniejasza"<<endl;
                cout<< "zostalo sie "<<ileProb-ileProbBylo<<" prob"<<endl;
                cout << "--------------------------"<<endl;
            }
            else if (n == a)
            {
                if(lvl == 4)
                {
                    cout << "***********************"<<endl;
                    cout << "***********************"<<endl;
                    cout <<"KONGRAT!!! end game"<<endl;
                    cout <<"prob za gru ->" <<globalProb<<endl;
                    break;
                }
                else
                {
                    cout << "==========="<<endl;
                    cout <<"KONGRAT!!!"<<endl;
                    //cout << "uzywane "<< ileProbBylo+1 << " prob." <<endl;
                    a = rand()%101;
                    lvl ++;
                    ileProbBylo = 0;
                    ileProb = ileProb/2;
                    cout << "LVL -> " << lvl << endl;
                    cout << "masz -> " << ileProb << " prob "<<endl;
                    cout << "--------------------------"<<endl;
                }
            }
        }
        ileProbBylo++;
        globalProb++;
    }



    return 0;
}
