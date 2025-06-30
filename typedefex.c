#include <stdio.h>
// Make a structure to store Bank Account Information of a customer of ABC Bank. Also, make an alias for it.
// define alias using typedef
typedef struct  BankInformation
{
    char name[150];
    int acc;
} accnt;

int main(void){
    // assigning value 
    accnt user1 = {"shuvo", 123988789};
    accnt user2 = {"shuvo kumar", 1239876789};
    accnt user3 = {"shuvo gharami", 123456789};
    printf("User name: %s\n", user1.name);
    printf("User account number: %d\n", user1.acc);
    return 0;
}