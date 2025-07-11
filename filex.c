#include <stdio.h>
int main()
{
    // 2 numbers - a & b, are written in a file. Write a program to replace them with their sum.
    FILE *shuvo;
    shuvo = fopen("sum.txt", "r"); // read mode
    int a;
    fscanf(shuvo, "%d", &a);
    int b;
    fscanf(shuvo, "%d", &b);
    fclose(shuvo);    
    shuvo = fopen("sum.txt", "w"); // write mode
    fprintf(shuvo, "%d", a + b);    
    
    fclose(shuvo);    
    return 0;
}