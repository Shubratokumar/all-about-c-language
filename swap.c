#include <stdio.h>
// swap values in between a & b;
void swap(int *a, int *b);
int main(void){
    int x = 4;
    int y = 6;
    printf("x = %d & y = %d \n", x, y);
    swap(&x, &y);
    printf("x = %d & y = %d \n", x, y);
    return 0;
}
void swap(int* a, int* b){
    int t = *a;
    *a = *b;
    *b = t;
    printf("a = %d & b = %d \n", *a, *b);
}