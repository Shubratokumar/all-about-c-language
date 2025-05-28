#include <stdio.h>
// convert temperature 
float convertFtoC(float celsius);
int main(void){
    float c;
    printf("Enter Celsius :");
    scanf("%f", &c);
    printf("Fahrenheit Temp is : %.2f", convertFtoC(c));
    return 0;
}

// convert fahrenheit to celsius
float convertFtoC(float celsius){
    int fahrenheit = celsius*(9.0/5.0) + 32; // formula
    return fahrenheit;
}