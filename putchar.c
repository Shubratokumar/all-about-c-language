#include <stdio.h>

int main()
{
    char x;
    x = getchar();
    putchar(x);
    putchar(toupper(x));// for Uppercase
    putchar(tolower(x));// for Lowercase
    return 0;
}