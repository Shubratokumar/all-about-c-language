#include <stdio.h>
int main(void){
    int marks[3];
    printf("Enter Physics Marks: ");
    scanf("%d", &marks[1]);
    printf("Enter Math Marks: ");
    scanf("%d", &marks[0]);
    printf("Enter Chemistry Marks: ");
    scanf("%d", &marks[2]);

    printf("Physics: %d, Math: %d, Chemistry: %d", marks[1], marks[0], marks[2]);

    return 0;
}