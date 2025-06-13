#include <stdio.h>
// Create 2D array, storing the tables of 2 & 4.
void storeTable(int arr[][10], int n, int m, int num);
int main(void)
{
    int a[3][4] = {
        {10, 6, 2, 3},  // values for first row, index 0
        {4, 5, 6, 7},  // values for second row, index 1
        {7, 9, 10, 11} // values for third row, index 2
    };
    int i, j;

    // output each array element's value
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("a[%d][%d] = %d \t", i, j, a[i][j]);// print as array
        }

        printf("\n");
    }

    // 2D Table with array
    int tables[2][10];
    // storeTable(tables, 0, 10, 2);
    printf("\n");
    // storeTable(tables, 1, 10, 4);
    // we are taking marks of two student
    // int marks[2][3]; // _ _ _ | _ _ _
    // first student
    // marks[0][0] = 90;
    // marks[0][1] = 78;
    // marks[0][2] = 87;
    // second student
    // marks[1][0] = 95;
    // marks[1][1] = 89;
    // marks[1][2] = 97;

    // printf("First student second number: %d \n", marks[0][1]);
    // printf("Second student third number: %d \n", marks[1][2]);

    return 0;
}
void storeTable(int arr[][10], int n, int m, int num)
{
    for (int i = 0; i < m; i++)
    {
        arr[n][i] = num * (i + 1);
        printf("%d \t", arr[n][i]);
    }
}
