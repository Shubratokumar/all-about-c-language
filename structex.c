#include <stdio.h>
// Create a structure to store complex numbers.(use arrow operator)

int main(void){
    
    return 0;
}

// // Create a structure to store vectors. Then make a function to return sum of 2 vectors.
// // Vectors: vectors are geometrical entities that have magnitude and direction.
// typedef struct Vector
// {
//     int x;
//     int y;
// } vec; // alias

// // calculate sum by using function
// void calSum(vec v1, vec v2, vec sum);

// int main(void){
//     vec v1 = { 5, 8};
//     vec v2 = {10, 16};
//     vec sum = {0};
//     // call function
//     calSum(v1, v2, sum);
//     return 0;
// }
// // calculate sum: pass by value
// void calSum(vec v1, vec v2, vec sum){
//     sum.x = v1.x + v2.x;
//     sum.y = v1.y + v2.y;
//     printf("Sum of x is : %d\nSum of y is : %d", sum.x, sum.y);
// }

// typedef struct UserAddress
// {
//     int houseNo;
//     int block;
//     char city[150];
//     char state[150];
// } add; // alias

// int main(void){
//     add adds[5];
//     printf("Enter address for first person:\n");
//     scanf("%d %d %s %s", &adds[1].block, &adds[1].houseNo, adds[1].city, adds[1].state);
//     printf("2nd address: \nBlock: %d\nHouse No: %d\nCity: %s\nState: %s\n", adds[1].block, adds[1].houseNo, adds[1].city, adds[1].state);

//     return 0;
// }