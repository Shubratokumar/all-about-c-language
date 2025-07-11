#include <stdio.h>
int main()
{
    // write a program to write all the odd numbers from 1 to n in a file.
    FILE *shuvo;
    shuvo = fopen("odd.txt", "w");
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            fprintf(shuvo,"%d\n", i);
        }
        
    }   
    
    fclose(shuvo);    
    return 0;
}