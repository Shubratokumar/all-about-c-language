#include <stdio.h>

void meow(int n);

int main() {
    // int i = 0;
    // while loop
    // while (i <= 3)
    // {
    //     printf("Meow!\n");
    //     // i+=1;
    //     i++;
    // }    
    {
        meow(5);
        // printf("Meow!\n");
    }
}

void meow(int n){
    // for loop
    for (int i = 0; i < n; i++)
    printf("meow! from bottom func with for loop.\n");
}