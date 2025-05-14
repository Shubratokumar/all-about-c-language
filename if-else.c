#include <stdio.h>

int main(void) {
    int age;
    printf("Enter age : ");
    scanf("%d", &age);
    if (age >= 18)
    {
        printf("Adult. can vote as well as drive. \n");        
    }
    else if(age > 12 & age < 18)
    {
        printf("Teenager! \n");
    }
    else{
        printf("Child! \n");
    }

}