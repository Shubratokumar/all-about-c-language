#include <stdio.h>
#include <string.h>

int main(){
    // strcat: string concatenation
    char first[]= "Shubrato ";
    char second[]= "Kumar";
    strcat(first, second);
    puts(first);

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