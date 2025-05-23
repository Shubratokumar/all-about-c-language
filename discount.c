#include <stdio.h>
#include <cs50.h>

float discount(float price, int percentage);

int main(void){
    float regular = get_float("Regular Price: ");
    int percent_off = get_int("Percent Off: ");
    float sale = discount(regular, percent_off);
    printf("Sale Price: %.2f\n", sale);
}

float discount(float price, int percentage)
{
    return price * (100 - percentage)/100;
}