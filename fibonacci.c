#include <stdio.h>
// fibonacci series or sequence
// fib(n) = fib(n-1) + fib(n-2)
int fib(int n);
int main(void)
{
    int n;
    printf("Enter Number : ");
    scanf("%d", &n);
    printf("Fibonacci of %d is : %d", n, fib(n));
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
