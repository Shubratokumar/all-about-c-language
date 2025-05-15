#include <stdio.h>
int main(void){
    // i = iterator or counter;
    for (int i = 0; i <= 10; i++)
    {
        printf("%d \n", i);
    }
    // for float number
    for (float i = 1.0; i <= 5.0; i++)
    {
        printf("%.2f \n", i);
    }
    // for character
    for (char ch = 'A'; ch <= 'Z'; ch++)
    {
        printf("%c \n", ch); 
    }

    // while loop
    char ch = 'a';
    while ( ch <= 'z')
    {
        printf("%c \n", ch);
        ch++;
    }
    // do while loop
    float num = 9;
    do
    {
        printf("%f \n", num);
        num--;
        
    } while (num >= 1);
    
    
    return 0;    
}