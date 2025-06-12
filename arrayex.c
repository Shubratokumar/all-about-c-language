#include <stdio.h>
// arrays as function argument
void printNum(int *arr, int n);
// write a function to count the number of odd numbers in an array.
int countOdd(int *arr, int n);
int main(void){
    int arr[] = {1, 2, 3, 4, 6, 7, 9};
    // printf("%d \n",*(arr+2));
    // printf("%d \n",*(arr+9));
    //printNum(arr, 6);// first argument is the array; second argument is the size of the array
    // printf("Total Odd num : %d", countOdd(arr, 7));
    // traverse an array or travel through an array
    // int data[5];
    // //input
    // int *ptr = &data[0];
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("%d Index: ", i);
    //     scanf("%d", &data[i]);
    // }
    // //output
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("%d Index = %d \n", i, data[i]);
    // }  
    
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
void printNum(int *arr, int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d \t", arr[i]);
    }        
}

int countOdd(int *arr, int n){
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0) // odd num check
        {
            count++;
        }        
    }
    return count;    
}