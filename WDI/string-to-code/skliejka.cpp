#include<iostream>

using namespace std;

int main ()
{
    int ileElemBukv = 8;/// ���-�� "���������" � ����� �����
    int slowo[ileElemBukv];
    /// ����� 1
    slowo[0] = 43;
    slowo[1] = 15;

    /// ����� 2
    slowo[2] = 44;
    slowo[3] = 41;
    slowo[4] = 14;

    /// ����� 3
    slowo[5] = 44;
    slowo[6] = 40;
    slowo[7] = 11;

    int n = 48;
    int byteArray [n];
    /// ��������� �������� ������ ������� �������
    for(int i = 0; i < n; i ++)
    {
        byteArray[i] = 0;
    }


    /// ���������� ������ ����� � ��������� � (2) ��� � ��������� � ��������� ������ �����
    int counter = 5;/// ������� �����
    for(int i = 0; i < ileElemBukv; i++)
    {
        int a = slowo[i]; /// �������� �����

        int b = 2;  /// ������� ����������
        int r;      /// ��������� �� �������
        int c;      /// ��������� �������
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
        c = 1;/// ������� 0 � ���������� �������
    }


for(int i = 0; i < n; i++)
    {

        cout<<byteArray[i]<<"|";
    }
    /*///
    ///
    /// ����� �� �����
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
    }*/


    return 0;
}

