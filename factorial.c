#include <stdio.h>
// factorial with recursion
int factorial(int n);
int main(){
    int n;
    printf("Enter number : ");
    scanf("%d", &n);
    printf("Factorial of the given number is : %d", factorial(n));
    return 0;
}
// recursive function
int factorial(int n){
    // base case
    if (n == 0)
    {
        return 1;
    }
    int factofNminus1 = factorial(n-1);
    int fact = factofNminus1*n;
    return fact;
}

// factorial with loops
// int main(){
//     int fact = 1;
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++)
//     {
//         fact *=i;        
//     }
//     printf("Factorial is %d", fact);
//     return 0;
// }