#include <stdio.h>
#include <string.h>

// user defined structure
struct student
{
    int roll;
    float cgpa;
    char name[150];
};
int main(void)
{
    struct student s1 = {4, 3.5, "Shubro"};
    printf("Roll: %d \n", s1.roll);

    // pointer to structure
    struct student *ptr = &s1;
    printf("Name: %s\n", (*ptr).name);
    // arrow operator
    printf("CGPA: %.2f\n", ptr->cgpa);

    return 0;
}
