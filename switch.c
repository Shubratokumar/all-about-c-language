#include <stdio.h>

int main(void){
    int num;
    printf("Enter a positive number: ");
    scanf("%d", &num);
    if (num >= 1 && num <= 9) {
        switch (num) {
        case 1:
            printf("one");
            break;
        case 2:
            printf("two");
            break;
        case 3:
            printf("three");
            break;
        case 4:
            printf("four");
            break;
        case 5:
            printf("five");
            break;
        case 6:
            printf("six");
            break;
        case 7:
            printf("seven");
            break;
        case 8:
            printf("eight");
            break;
        case 9:
            printf("nine");
            break;
        }
        
    } else if(num > 9){
        printf("Greater than 9");
    }
    
    return 0;
    // int day; // 1-mon; 2-tues; 3-wed etc.
    // printf("Enter day(1-7) : ");
    // scanf("%d", &day);

    // switch (day)
    // {
    // case 1:
    //     printf("Monday. \n");
    //     break;
    
    // case 2:
    //     printf("Tuesday. \n");
    //     break;
    
    // case 3:
    //     printf("Wednesday. \n");
    //     break;
    
    // case 4:
    //     printf("Thursday. \n");
    //     break;
    
    // case 5:
    //     printf("Friday. \n");
    //     break;
    
    // case 6:
    //     printf("Saturday. \n");
    //     break;
    
    // case 7:
    //     printf("Sunday. \n");
    //     break;

    // default: printf("Not a valid day! \n");

    // }
}