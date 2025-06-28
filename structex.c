#include <stdio.h>
struct student
{
    int roll;
    float cgp;
    char name[150];
};

void printInfo(struct student s1);

int main(void){
    struct student s1 = {123, 5.6, "Shuvo"};
    s1.roll= 153; // change value
    printInfo(s1);
    return 0;
}
// passing structure to function
void printInfo(struct student s1){
    printf("Student info: \n");
    printf("Student name: %s\n", s1.name);
    printf("Student roll: %d\n", s1.roll);
    printf("Student cgpa: %.2f\n", s1.cgp);
    s1.roll = 134; // will not effect the main value
}