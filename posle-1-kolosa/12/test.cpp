#include <iostream>
using namespace std;
//определяем функции
void showText1 (char str[], char *str2)//функция принимает строку, как массив
{
      cout << str[1] << endl;
      cout << str2 << endl;
}


int main()
{


      char str1[] = "hello world";
      //showText1(str1);

      cout << endl;

      char str2[] = "str2 - передаем, в функцию void showText2 (char *str); используя указатель.";
      showText1(str1, str2);



      cout << endl;

return 0;
}
