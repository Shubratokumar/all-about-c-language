#include <stdio.h>
// fibonacci series or sequence
// fib(n) = fib(n-1) + fib(n-2)
int fib(int n);
int main(void)
{
    int n;
    printf("Enter Number : ");
    scanf("%d", &n);
    // fibonacci series user want to know by entering an number
    int fibo[n];
    fibo[0] = 0;
    fibo[1] = 1;
    for (int i = 2; i < n; i++)
    {
        // formula of fibonacci series
        fibo[i] = fibo[i-1] + fibo[i-2];
        printf("%d \t", fibo[i]);
    }
    
    // fibonacci number that user enter
    // printf("Fibonacci of %d is : %d", n, fib(n));
    return 0;
}

int fib(int n)
{
    // base case
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }

    // fibonacci of n minus 1
    int fibNm1 = fib(n - 1);
    // fibonacci of n minus 2
    int fibNm2 = fib(n - 2);
    int fibN = fibNm1 + fibNm2;
    return fibN;
}
