#include<iostream>

using namespace std;

int main ()
{
    int n = 6;
    int rezultArray[n]; /// ������ � ����������� ��������� �� 6-�� �����
    for(int i = 0; i < n; i ++)
    {
        rezultArray[i] = 0;
    }

    int a = 52; /// �������� ����� �� 63 ������������

    int b = 2;  /// ������� ����������
    int r;      /// ��������� �� �������
    int c;      /// ��������� �������
    int counter = 5;/// ������� �����

    while (c != 0)
    {
        c = a/b;
        r = a%b;
        a = c;
        rezultArray[counter] = r;
        counter--;
    }

    for(int i = 0; i < n; i ++)
    {
        cout<<rezultArray[i]<<" | ";
    }

    return 0;
}
