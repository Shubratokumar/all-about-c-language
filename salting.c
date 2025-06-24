#include <stdio.h>
#include <string.h>
void salting(char password[]);

int main(void){
    // salting: find the salted form of a password entered by user if the salt is "456" & added at the end.
    char pass[100];
    printf("Enter Password: ");
    scanf("%s", &pass); 
    salting(pass);
    return 0;
}
void salting(char password[]){
    char salt[] = "456";
    char newPass[200];
    strcpy(newPass, password); // newPass = password
    strcat(newPass, salt);
    puts(newPass);
}
