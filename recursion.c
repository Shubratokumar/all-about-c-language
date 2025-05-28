#include <stdio.h>
// recursion

// Practice Q No:30 : Sum of first n natural numbers;
int sum(int n);
int main(){
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    printf("Sum of first n : %d \n", sum(n));
}
// recursive function
int sum(int n){
    //base case 
    if (n == 1)
    {
        return 1;
    }    
    // sum of 1 to n
    int sumofNminus1 = sum(n-1);
    // printf("Sum of n minus 1: %d \n", sumofNminus1);
    int sumofN = sumofNminus1 + n;
    // printf("Sum of n : %d \n", sumofN);
    return sumofN;
}



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