#include <stdio.h>
#include <string.h>

int main()
{
    // take a string input from the user using %c(while loop)
    char str[100];
    char ch;
    // int i = 0;
    printf("Enter String: ");
    // condition: until press enter
    // for loop
    for (int i = 0; ch != '\n'; i++)
    {
        scanf("%c", &ch);
        str[i] = ch;
    }
    // while loop
    // while (ch != '\n')
    // {

    //     scanf("%c", &ch);
    //     str[i] = ch;
    //     i++;
    // }
    // puting null character
    // str[i]= '\0';
    puts(str);

    // strcmp: string comparision

    // char first[]= "Chocolate";
    // char first[]= "Banana";// will return 0;
    // char second[]= "Banana";
    // printf("%d", strcmp(first, second));

    // strcat: string concatenation

    // char first[]= "Shubrato ";
    // char second[]= "Kumar";
    // strcat(first, second);
    // puts(first);

    // strcpy: copying string

    // char oldStr[] = "Old String";
    // char newStr[] = "New String";
    // strcpy(newStr, oldStr);
    // printf("Old string %s \n", oldStr);
    // printf("New string %s", newStr);

    // strlen: printing string length using library

    // char name[]= "Shubrato";
    // printf("Length is : %d", strlen(name));

    // char name[] = {'S','H','U','B','R','A','T','O','\0'};
    // printf("Name is: %s",name);

    return 0;
}