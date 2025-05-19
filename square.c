#include <math.h>
#include <stdio.h>

int main (){
    int a;
    printf("Enter number: ");
    scanf("%f", &a);
    int square = pow(a, 2);
    printf("Square of the given number is : %d", square);
    return 0;
}