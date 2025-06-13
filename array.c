#include <stdio.h>
int main(void)
{
    // Expenses: for loop in an array
    int expenses[5];
    int i;
    int sum = 0;
    float average = 0;

    printf("Enter your expenses for last 5 days: ");

    for (i = 0; i <= 4; i++)
    {
        scanf("%d", &expenses[i]); // assigning all the values
    }

    for (i = 0; i <= 4; i++)
    {
        sum = sum + expenses[i];
    }

    average = sum / 5;

    printf("Your average expenses for last five days is : %f", average);

    // Age: access/change/declare an array 
    // int age[5] = {18, 30, 50, 47, 57}; // array declaration and assigning values

    // printf("%d", age[0]);   // Printing the first element
    // printf("\n%d", age[3]); // Printing the 4th element

    // age[2] = 80; // changing a value

    // printf("\n%d", age[2]); // printing the changed value

    // printf("\nEnter age of person 1 :");
    // scanf("%d", &age[0]); // using scanf to insert a value in the array
    // printf("The newly assigned age for person 1 is : %d", age[0]);

    // Marks:
    // int marks[3];
    // printf("Enter Physics Marks: ");
    // scanf("%d", &marks[1]);
    // printf("Enter Math Marks: ");
    // scanf("%d", &marks[0]);
    // printf("Enter Chemistry Marks: ");
    // scanf("%d", &marks[2]);

    // printf("Physics: %d, Math: %d, Chemistry: %d", marks[1], marks[0], marks[2]);

    return 0;
}