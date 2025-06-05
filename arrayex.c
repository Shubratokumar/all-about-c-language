#include <stdio.h>
// write a program to enter price of 3 items & print their final cost with tax.
int main(void){
    float price[3];
    printf("Enter first price: ");
    scanf("%f", &price[0]);
    printf("Enter second price: ");
    scanf("%f", &price[1]);
    printf("Enter third price: ");
    scanf("%f", &price[2]);
    float sum = price[0] + price[1] + price[2];
    float gst = sum * 0.18;
    float final = sum + gst;
    printf("Final cost with gst = %.2f Without gst = %.2f", final, sum);
    return 0;
}