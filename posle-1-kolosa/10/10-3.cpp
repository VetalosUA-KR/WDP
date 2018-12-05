#include<iostream>
#include<cmath>

using namespace std;

void liczbaDoskonala();

int main ()
{

    liczbaDoskonala();

    return 0;
}
void liczbaDoskonala()
{
    int ile = 0;
    int j = 1;
    while(ile < 4)
    {
        int n = j;
        int i = 1;
        int sum = 0;
        while(i<n)
        {
            if(n%i == 0)
            {
                sum += i;
            }
            i++;
        }
        if(sum == n)
        {
            cout<<n<<"."<<endl;
            ile ++;
        }
        j++;
    }
}


