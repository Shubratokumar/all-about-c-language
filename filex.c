#include <stdio.h>
int main()
{
    // Make a program to input student information from a user & enter it to a file.
    FILE *shuvo;
    shuvo = fopen("student.txt", "w");
    char name[100];
    int age;
    float cgpa;
    printf("Enter name: ");
    scanf("%s", &name);
    printf("Enter age: ");
    scanf("%d", &age);
    printf("Enter cg: ");
    scanf("%f", &cgpa);

    fprintf(shuvo, "%s\t", name);
    fprintf(shuvo, "%d\t", age);
    fprintf(shuvo, "%.2f\t", cgpa);
    fclose(shuvo);
    
    return 0;
}