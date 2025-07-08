#include <stdio.h>
int main()
{
    // file pointer declare
    FILE *shuvo;
    shuvo = fopen("text.txt", "r");
    char ch;
    ch = fgetc(shuvo);
    while (ch != EOF) // using EOF for checking
    {
        printf("%c", ch);
        ch = fgetc(shuvo);
    }
    printf("\n");
    fclose(shuvo);
    
    return 0;
}