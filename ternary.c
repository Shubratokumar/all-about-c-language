#include <stdio.h>

int main(void){
    int age;
    printf("Enter age : ");
    scanf("%d", &age);

    age >= 18 ? printf("Adult. \n") : printf("Not adult! \n");
}