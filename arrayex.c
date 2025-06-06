#include <stdio.h>
int main(void){
    // traverse an array or travel through an array
    int data[5];
    //input
    int *ptr = &data[0];
    for (int i = 0; i < 5; i++)
    {
        printf("%d Index: ", i);
        scanf("%d", &data[i]);
    }
    //output
    for (int i = 0; i < 5; i++)
    {
        printf("%d Index = %d \n", i, data[i]);
    }
    
    

    // write a program to enter price of 3 items & print their final cost with tax.
    // float price[3];
    // printf("Enter first price: ");
    // scanf("%f", &price[0]);
    // printf("Enter second price: ");
    // scanf("%f", &price[1]);
    // printf("Enter third price: ");
    // scanf("%f", &price[2]);
    // printf("First price with gst: %.2f \n", price[0]+(price[0]*0.18));
    // printf("Second price with gst: %.2f \n", price[1]+(price[1]*0.18));
    // printf("Third price with gst: %.2f \n", price[2]+(price[2]*0.18));
    // float sum = price[0] + price[1] + price[2];
    // float final = sum + sum * 0.18;
    // printf("Final total cost with gst = %.2f \nWithout gst = %.2f", final, sum);
    return 0;
}