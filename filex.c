#include <stdio.h>
int main()
{
    // Make a program to read 5 integers from a file.
    FILE *shuvo;
    shuvo = fopen("text.txt", "r");
    int num;
    fscanf(shuvo, "%d", &num);
    printf("First: %d\n", num);
    fscanf(shuvo, "%d", &num);
    printf("Second: %d\n", num);
    fscanf(shuvo, "%d", &num);
    printf("Third: %d\n", num);
    fscanf(shuvo, "%d", &num);
    printf("Fourth: %d\n", num);
    fscanf(shuvo, "%d", &num);
    printf("Fifth: %d\n", num);
    fclose(shuvo);
    
    return 0;
}