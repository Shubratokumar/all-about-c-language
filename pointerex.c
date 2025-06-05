#include <stdio.h>
// write a function to calculate the sum, product & average of two numbers. Print that average in the main function.
// function declaration
void calculate(int a, int b, float *sum, float *product, float *average);
int main(void){
    int a,b;
    printf("Enter a :");
    scanf("%d",&a);
    printf("Enter b :");
    scanf("%d",&b);
    float sum, product, average;
    //function call
    calculate(a,b, &sum, &product, &average);
    printf("Sum = %.2f \nProduct = %.2f \nAverage = %.2f", sum, product, average);
    
}
// function definition
void calculate(int a, int b, float *sum, float *product, float *average){
    *sum = a + b;
    *product = a * b;
    *average = (a + b)/2;
}
