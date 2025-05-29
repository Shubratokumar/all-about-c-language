#include <stdio.h>
int main(void){
    int age = 28;
    int *ptr = &age;
    int _age = *ptr;
    // address
    printf("Pointer address in hexadecimal : %p \n", &age);
    printf("Pointer address : %u \n", &age); // unsigned int
    // address
    printf("Pointer address : %u \n", ptr);
    // address of ptr
    printf("Address of pointer : %u \n", &ptr);
    // value
    printf("Pointer value is : %d \n", age);
    printf("value of pointer : %d \n", *ptr);
    printf("value of pointer : %d \n", *(&age));
    return 0;    
}