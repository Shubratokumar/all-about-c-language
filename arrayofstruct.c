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
    struct student cs[100];
    cs[10].cgpa = 3.43;
    cs[18].roll = 3;
    strcpy(cs[50].name, "Shuvo");
    printf("Name: %s\n", cs[50].name);
    printf("Roll: %d\n", cs[18].roll);
    printf("CGPA: %.2f", cs[10].cgpa);

    return 0;
}
