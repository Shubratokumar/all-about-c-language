#include <stdio.h>
void printString(char arr[]);
int main(){
     // print string using string specifier
     char name[40];
     printf("Enter your name: ");
     scanf("%s", name);
     printf("Name is : %s", name);

     // string definition
     char firstName[] = "SHUBRATO KUMAR";
     char lastName[] = "GHARAMI";
     // printString(firstName);
     // printString(lastName);
     return 0;
}
void printString(char arr[]){
     for (int i = 0; arr[i] != '\0'; i++)
     {
          printf("%c", arr[i]);
     }     
     printf("\n");
}