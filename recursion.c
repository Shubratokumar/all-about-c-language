#include <stdio.h>
// recursion
void printH(int count);
int main(){
    int a;
    printf("Enter count: ");
    scanf("%d", &a);
    printH(a);
    return 0;
}

// recursive function
void printH(int count){
    if (count == 0)
    {
        return;
    }
    printf("Hello, Recursion! \n");
    printH(count -1); // calling itself
    
}