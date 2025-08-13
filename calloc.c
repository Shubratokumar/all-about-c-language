#include <stdio.h>
#include <stdlib.h>
int main(void){
    // WAP to allocate memory of size n, where n is entered by the user.
    int *ptr;
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    ptr = (int*) calloc(n,sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", ptr[i]);
    }
    
    return 0;
}