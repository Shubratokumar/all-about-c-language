#include <stdio.h>
#include <string.h>

// structure
struct student {
    int roll;
    float cgpa;
    char name[150];
};

int main(void){
    struct student n1;
    n1.cgpa = 3.86;
    strcpy(n1.name, "Shubrato Kumar");
    n1.roll = 1;
    printf("Student name: %s\n", n1.name);
    printf("Student roll: %d\n", n1.roll);
    printf("Student cgpa: %.2f\n", n1.cgpa);
    
    struct student s1;
    s1.cgpa = 3.45;
    s1.roll = 2;
    strcpy(s1.name, "Shuvo Kumar");
    printf("Student name: %s\n", s1.name);
    printf("Student roll: %d\n", s1.roll);
    printf("Student cgpa: %.2f\n", s1.cgpa);

    return 0;
}