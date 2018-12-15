#include <cstdio>
#include <cstring>
#include <iostream>
#include <Windows.h>

using namespace std;

int Tokenizer(wchar_t* input, wchar_t *output[], unsigned int num, wchar_t separator);

int main()
{
    wchar_t *tokens[10];
    wchar_t txt[] = L"Love Glyphs(Gotham) theme for iOS by Tokeams so i make a port for android. All icons are";

    int count = Tokenizer(txt, tokens, sizeof(tokens)/sizeof(wchar_t*), ' ');

    for (int i = 0; i < count; i++)
        printf("\n %S", tokens[i]);
    //cout<<sizeof(wchar_t)<<endl;
    //cout<<sizeof(char)<<endl;
    return 0;
}

int Tokenizer(wchar_t* input, wchar_t *output[], unsigned int num, wchar_t separator)
{
    int count = 0;
    if(input == NULL || !output)
        return count;

    while (*input)
    {
        if(count == num)
            break;

        while (*input == separator)
            input++;
        if(!(*input))
            return count;

        *output++ = input;
        count++;

        while (*input && *input != separator)
            input++;

        if(!*input)
            break;
        *input++ = 0;
    }
    return count;
}





