#include <stdio.h>
void reverse(int *arr, int n);
void printArr(int *arr, int n);

int main(void){
    int arr[] = {1,2,3,5,5,8,9,10};
    reverse(arr, 8);
    printArr(arr, 8);
    // print reverse array
    // for (int i = 0; i < 8; i++)
    // {
    //     printf("%d \t", arr[i]);
    // } 
    return 0;
}
void printArr(int *arr, int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d \t", arr[i]);
    }    
}

void reverse(int *arr, int n){
    for (int i = 0; i < n/2; i++)
    {
        int firstVal = arr[i];
        int secondVal = arr[n-i-1];
        arr[i] = secondVal;
        arr[n-i-1] = firstVal;
    }    
}