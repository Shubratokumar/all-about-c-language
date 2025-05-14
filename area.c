#include <stdio.h>

int main(void) {
    int side;
    printf("Enter area: ");
    scanf("%d", &side);

    printf("Area is : %.2d", side * side);
}