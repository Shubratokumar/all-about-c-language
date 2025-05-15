#include <stdio.h>

//sum of first n natural number
int main(void){
    int sum = 0;
    int n;
    printf("Enter Natural Number: ");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        sum +=i;
    }
    printf("Sum is %d", sum);
    
    return 0;  

}
