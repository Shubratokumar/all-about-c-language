#include <stdio.h>

int main(void){
    // pointer example
    int x;
    int *ptr;
    ptr = &x; // store address
    *ptr = 0; // assign value
    printf("x = %d \n", x);
    printf("*ptr = %u \n", *ptr);
    printf("pointer address of x = %u \n", &x);
    printf("pointer address of ptr = %u \n", ptr);
    printf("pointer address of &ptr = %u \n", &ptr);
    
    *ptr += 5;
    printf("x = %d \n", x);
    printf("*ptr = %u \n", *ptr);
    
    (*ptr)++;
    printf("x = %d \n", x);
    printf("*ptr = %u \n", *ptr);


    // sum of given number with loop
    // int sum = 0;
    // for (int i = 5; i <= 50; i++)
    // {
    //     sum +=i;        
    //     // printf("i is %d \n", i);
    // }    
    // printf("Sum is: %d", sum);

    // Average of given three numbers
    // float a, b, c;    
    // printf("Enter numbers : \n");
    // scanf("%f %f %f", &a, &b, &c);
    // printf("Enter 1st number: ");
    // scanf("%f", &a);
    // printf("Enter 2nd number: ");
    // scanf("%f", &b);
    // printf("Enter 3rd number: ");
    // scanf("%f", &c);
    //printf("Average is : %.1f", (a + b + c )/ 3 );


    // check if a number is divisible by 2 or not
    // printf("Enter a number : ");
    // scanf("%d", &a);
    // printf(a%2 == 0 ? "Divisible by 2 or Even number" : "Not divisible by 2 or Odd number");
    // if (a%2 == 0)
    // {
    //     printf("Divisible by 2 or Even number");        
    // }
    // else
    // {
    //     printf("Not divisible by 2 or Odd number");
    // }
    return 0;
}