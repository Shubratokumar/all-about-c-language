#include <stdio.h>
// Enter address(house no, block, city, state) of 5 people
typedef struct UserAddress
{
    int houseNo;
    int block;
    char city[150];
    char state[150];
} add; // alias

int main(void){
    add adds[5];
    printf("Enter address for first person:\n");
    scanf("%d %d %s %s", &adds[1].block, &adds[1].houseNo, adds[1].city, adds[1].state);
    printf("2nd address: \nBlock: %d\nHouse No: %d\nCity: %s\nState: %s\n", adds[1].block, adds[1].houseNo, adds[1].city, adds[1].state);

    return 0;
}