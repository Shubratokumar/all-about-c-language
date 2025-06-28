#include <stdio.h>
// defining alias
typedef struct ComputerEngineeringStudent{
    int roll;
    float cgpa;
    char name[50];    
} cs; // alias

int main(void){
    cs student1 = {123,5.6, "Shuvo"};
    printf("student info: %d %.2f %s", student1.roll, student1.cgpa, student1.name);

    return 0;
}