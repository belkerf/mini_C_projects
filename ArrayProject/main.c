#include <stdio.h>
int main()
{
    /*
    declaring the array
    */
    int arr[5][5];
    /*
    reading the element of the array
    */
    int i , j;
    int rowsum = 0, columnsum = 0;
    for(i = 0; i < 5; i++)
    {
        for (j = 0; j <5; j++)
        {
            printf("enter the arr[%d][%d] : ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    /*
    printing the array
    */
    printf("the array is :\n");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    /*
    printing the row sum
    */
    printf("Row tatal: ");
    for (i = 0; i < 5; i++)
    {
        rowsum = 0;
        for (j = 0; j <5; j++)
        {
            rowsum = rowsum + arr[i][j];
        }
        printf("%d ", rowsum);
    }
    /*
    printing the column sum
    */
    printf("\nColumn tatal: ");
    for (i = 0; i < 5; i++)
    {
        columnsum = 0;
        for (j = 0; j <5; j++)
        {
            columnsum = columnsum + arr[j][i];
        }
        printf("%d ", columnsum);
    }
}
