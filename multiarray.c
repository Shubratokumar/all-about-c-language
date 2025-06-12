#include <stdio.h>
int main(void){
    // we are taking marks of two student 
    int marks[2][3]; // _ _ _ | _ _ _
    // first student
    marks[0][0] = 90;
    marks[0][1] = 78;
    marks[0][2] = 87;
    // second student
    marks[1][0] = 95;
    marks[1][1] = 89;
    marks[1][2] = 97;

    printf("First student second number: %d \n", marks[0][1]);
    printf("Second student third number: %d \n", marks[1][2]);

    return 0;
}