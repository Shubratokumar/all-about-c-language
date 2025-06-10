#include <stdio.h>

int main(void)
{
    // number comparision
    int num1, num2;

    printf("Enter two numbers to compare :\n");

    scanf("%d %d", &num1, &num2);

    if (num1 > num2)
    {
        printf("%d is greater than %d", num1, num2);
    }
    else
    {
        printf("%d is greater than %d", num2, num1);
    }

    // age comparision
    // int age;
    // printf("Enter age : ");
    // scanf("%d", &age);
    // if (age >= 18)
    // {
    //     printf("Adult. can vote as well as drive. \n");
    // }
    // else if(age > 12 & age < 18)
    // {
    //     printf("Teenager! \n");
    // }
    // else{
    //     printf("Child! \n");
    // }
    return 0;
}