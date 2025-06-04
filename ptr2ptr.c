#include <stdio.h>
int main(void){
    float price = 100.00;
    float *ptr = &price;
    float **pptr = &ptr;
    printf("%f \n", *ptr);
    printf("%f", **pptr);

    return 0;
}