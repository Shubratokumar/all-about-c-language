#include <stdio.h>
#include <stdlib.h>
int main(void){
    int *ptr;
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    ptr = (int*) calloc(n,sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", ptr[i]);
    }
    free(ptr);
    ptr = (int*) calloc(3, sizeof(int));
    for (int i = 0; i <3; i++)
    {
        printf("free %d\n", ptr[i]);
    }    
    return 0;
}