#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
// Complete the following function.
// There is a series, S , where the next term is the sum of pervious three terms. Given the first three terms of the series, a ,b and c respectively, you have to output the nth term of the series using recursion.Recursive method for calculating nth term is given below.

int find_nth_term(int n, int a, int b, int c)
{
    // Write your code here.
    int nth = 0;
    int d = 0;
    // base cases
    if (n == 1)
    {
        nth = a;
    }
    else if (n == 2)
    {
        nth = b;
    }
    else if (n == 3)
    {
        nth = c;
    }
    else
    {
        d = a+b+c;
        nth = find_nth_term(n-1, b,c,d);
    }
    return nth;
}

int main()
{
    int n, a, b, c;

    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);

    printf("%d", ans);
    return 0;
}

// #include <stdio.h>
// // recursion

// // Practice Q No:30 : Sum of first n natural numbers;
// int sum(int n);
// int main(){
//     int n;
//     printf("Enter number: ");
//     scanf("%d", &n);
//     printf("Sum of first n : %d \n", sum(n));
// }
// // recursive function
// int sum(int n){
//     //base case
//     if (n == 1)
//     {
//         return 1;
//     }
//     // sum of 1 to n
//     int sumofNminus1 = sum(n-1);
//     // printf("Sum of n minus 1: %d \n", sumofNminus1);
//     int sumofN = sumofNminus1 + n;// original logic
//     // printf("Sum of n : %d \n", sumofN);
//     return sumofN;
// }

// void printH(int count);
// int main(){
//     int a;
//     printf("Enter count: ");
//     scanf("%d", &a);
//     printH(a);
//     return 0;
// }

// recursive function
// void printH(int count){
//     if (count == 0)
//     {
//         return;
//     }
//     printf("Hello, Recursion! \n");
//     printH(count -1); // calling itself

// }