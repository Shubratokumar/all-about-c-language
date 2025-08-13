#include <stdio.h>
#include <stdlib.h>
int main(void){
    // realloc in the memory with calloc
    int *ptr;
    ptr = (int*) calloc(5,sizeof(int));
    printf("Enter nums[5]\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &ptr[i]);
    }
    ptr = realloc(ptr, 7);
    printf("Enter nums[7]\n");
    for (int i = 0; i <7; i++)
    {
        scanf("%d", &ptr[i]);
    }  
    // print realloc
    for (int i = 0; i < 7; i++)
    {
        printf("num %d is :%d \n", i, ptr[i]);
    }    
    return 0;
}