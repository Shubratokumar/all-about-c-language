#include <stdio.h>
int main(void){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d \n", i*n);
    }
    return 0;
    
}