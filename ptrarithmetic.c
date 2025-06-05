#include <stdio.h>
int main(void){
    // pointer arithmetic with integer e.g take 4 bytes
    // int age = 28;
    // int *ptr = &age;
    
    // pointer arithmetic with floating point number e.g take 4 bytes
    // float price = 50.6;
    // float *ptr = &price;

    // pointer arithmetic with character e.g take 1 byte
    char hash = '#';
    char *ptr = &hash;
    printf("Pointer : %u \n", ptr);
    ptr++;
    printf("Pointer Increment: %u \n", ptr);
    ptr--;
    printf("Pointer Decrement: %u \n", ptr);
    return 0;
}