#include <stdio.h>

int main(void){
    // array in c
    int n;
    printf("How may scores we have? ");
    scanf("%d", &n);
    int scores[n];
    for (int i = 0; i < n; i++)
    {
        scores[i] = i;
        printf("scores is :%.2f", scores[i]);
    }
    
    // scores[0] = 65;
    // scores[1] = 85;
    // scores[2] = 95;

    // printf("Average score is %.2f\n", (scores[0] + scores[1] + scores[2]) / 3.0 );
}