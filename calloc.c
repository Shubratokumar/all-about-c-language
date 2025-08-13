#include <stdio.h>
#include <stdlib.h>
int main(void){
    float *ptr;
    ptr = (float*) calloc(5,sizeof(float));

    // ptr[0]= 2;
    // ptr[1]= 3;
    // ptr[4]= 7;
    // ptr[2]= 8;
    // ptr[3]= 9;
    for (int i = 0; i < 5; i++)
    {
        printf("%f\n", ptr[i]);
    }
    
    return 0;
}