#include <cs50.h>
#include <stdio.h>

int main() {
    char c = get_char("Are you agree?\n");
    if (c == "y" || c == "Y")
    {
        printf("Agreed.\n");
    }
    else if (c == "n" || c == "N")    
    {
        printf("Not agreed.\n");
    }
    
}