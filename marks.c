#include <stdio.h>

int main(void)
{
    int marks;
    printf("Enter marks: ");
    scanf("%d", &marks);

    // Grades to a student
    if (marks >= 0 && marks < 30)
    {
        printf("Obtain C Grade.");
    }
    else if (marks >= 30 && marks < 70)
    {
        printf("Obtain B Grade.");
    }
    else if (marks >= 70 && marks < 90)
    {
        printf("Obtain A Grade.");
    }
    else if (marks >= 90 && marks <= 100)
    {
        printf("Obtain A+ Grade!");
    }
    else
    {
        printf("Entered an invalid marks.");
    }

    // pass-fail conditions
    // if (marks >= 0 && marks <=30)
    // {
    //     printf("Failed!");
    // } else if(marks > 30 && marks <= 100){
    //     printf("Passed.");
    // } else{
    //     printf("You entered an invalid Marks.");
    // }
    return 0;
}