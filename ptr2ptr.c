#include <stdio.h>
void square(int n); // function declaration 
void _square(int *n); // function declaration
int main(void){
    // float price = 100.00;
    // float *ptr = &price;
    // float **pptr = &ptr;
    // printf("%f \n", *ptr);
    // printf("%f", **pptr);
    // print the value of 'i' from its pointer to pointer
    // int i = 5;
    // int *ptr = &i;
    // int **pptr = &ptr;
    // printf("%d \n", *ptr);
    // printf("%d \n", *(&i));
    // printf("%d \n", *(&ptr));
    // printf("%d \n", *pptr);
    // printf("%d \n", *(&pptr));
    // printf("%d \n", **pptr);
    int number = 4;
    square(number);
    printf("Call by value %d \n", number);
    _square(&number);
    printf("Call by reference %d \n", number);
    return 0;
}
// func definition 
void square(int n){ // call by value
    n = n * n;
    printf("Square is : %d \n", n);
}
// func definition 
void _square(int *n){ // call by reference
    *n = (*n) * (*n);
    printf("Square is : %d \n", *n);
}