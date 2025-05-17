#include <stdio.h>
int main(){
    int fact = 1;
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        fact *=i;        
    }
    printf("Factorial is %d", fact);
    return 0;
}