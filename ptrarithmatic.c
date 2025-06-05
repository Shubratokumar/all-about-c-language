#include <stdio.h>
int main(void){
    int age = 28;
    int *ptr = &age;
    printf("Pointer : %u \n", ptr);
    ptr++;
    printf("Pointer Increment: %u \n", ptr);
    ptr--;
    printf("Pointer Decrement: %u \n", ptr);
    return 0;
}