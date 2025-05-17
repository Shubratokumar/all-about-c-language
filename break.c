#include <stdio.h>

int main(){
    int n;
    do
    {
        printf("Enter Even Number: ");
        scanf("%d", &n);
        printf("%d \n", n);
        if (n % 2 != 0)
        {
            break;
        }
        
    } while (1);// 1 means true as c don't have any boolean data type;
    printf("You have entered an odd number! ");

    // for (int i = 1; i <= 5; i++)
    // {
    //     //break
    //     if (i == 3)
    //     {
    //         break;
    //     }        
    //     printf("%d \n", i);        
    // }
    // printf("end");
}