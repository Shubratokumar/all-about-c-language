#include <stdio.h>
int main(void){
    int age = 28;
    int *ptr = &age;
    int _age = *ptr;
    printf("Pointer value is : %d", _age);
    return 0;    
}