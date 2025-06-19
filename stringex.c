#include <stdio.h>
void printString(char arr[]);
int main(){
     // string as pointer
     char *canChange = "Hello, Shubrato !";
     puts(canChange);
     canChange = "Hello, Shuvo !";
     puts(canChange);

     // using gets() & puts()
     char str[100];
     // printf("Enter your name: ");
     // fgets(str, 100, stdin);
     // gets(str);
     // puts(str);

     // print string using string specifier
     char name[40];
     // printf("Enter your name: ");
     // scanf("%s", name);
     // printf("Name is : %s", name);

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