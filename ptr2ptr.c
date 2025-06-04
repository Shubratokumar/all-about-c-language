#include <stdio.h>
int main(void){
    // float price = 100.00;
    // float *ptr = &price;
    // float **pptr = &ptr;
    // printf("%f \n", *ptr);
    // printf("%f", **pptr);
    // print the value of 'i' from its pointer to pointer
    int i = 5;
    int *ptr = &i;
    int **pptr = &ptr;
    printf("%d \n", *ptr);
    printf("%d \n", *(&i));
    printf("%d \n", *(&ptr));
    printf("%d \n", *pptr);
    printf("%d \n", *(&pptr));
    printf("%d \n", **pptr);

    return 0;
}