#include <stdbool.h>
#include <stdio.h>
int main()
{
    // Create boolean variables
    bool isProgrammingFun = true;
    bool isFishTasty = false;

    // Return boolean values
    // printf("%d\n", isProgrammingFun); // Returns 1 (true)
    // printf("%d \n", isFishTasty);      // Returns 0 (false)

    // comparing values and variables
    // printf("%d\n", 10 > 9); //Returns 1 (true) because 10 is greater than 9
    // printf("%d\n", 9 > 19); //Returns 0 (false) because 19 is greater than 9

    // voting probability
    int myAge = 28;
    int votingAge = 18;
    if (myAge >= votingAge)
    {
        printf("You can vote! Old enough to vote.");
    }
    else
    {
        printf("Can't vote! Not enough age to vote.");
    }

    return 0;
}