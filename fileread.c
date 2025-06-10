#include <stdio.h>
int main()
{
    FILE *MyFile;
    char string[10];
    MyFile = fopen("myfile.txt", "r+");

    while (!feof(MyFile)) // feof = end-of-file
    {
        fscanf(MyFile, "%s", string);// reading file using fscanf
        printf("%s ", &string);
    }
    fclose(MyFile);
    return 0;
}