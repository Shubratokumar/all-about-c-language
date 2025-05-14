#include <cs50.h>
#include <stdio.h>

int main(void){
    const int MINE = 5;
    int points = get_int("How many points i have?\n");
    if (points < MINE)
    {
        printf("You lost fewer points than mine.\n");
    } 
    else if (points > MINE)
    {
        printf("You lost more points than mine.\n");
    } 
    else{
        printf("We both have the same.\n");
    }    
    
}
