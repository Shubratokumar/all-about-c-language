#include <stdio.h>
// a function name slice, which takes a string & returns a sliced string from index n to m.
void slice(char str[], int n, int m);
int main(void){
    char str[100];
    int start, end;
    printf("Enter String : ");
    scanf("%s", &str);
    printf("Slice starts from: ");
    scanf("%d", &start);
    printf("Slice ends to: ");
    scanf("%d", &end);
    slice(str, start, end);

    return 0;
}

void slice(char str[], int n, int m){
    char newStr[100];
    int j = 0;
    for (int i = n; i <= m; i++, j++)
    {
        newStr[j] = str[i];
    }    
    newStr[j] = '\0';
    puts(newStr);
};
