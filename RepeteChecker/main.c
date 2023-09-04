#include <stdio.h>
int main()
{
    int i = 0, j = 0, k = 0;
    int arr[] = {6,7,8,2,7};
    printf("this is the array of numbers :\n\t");
    while (i < 5)
    {
        printf("%d\t",arr[i]);
        i++;
    }
    printf("\nthere is any repated number ?   : ");
    for(i = 0 ; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if ((i != j) && (arr[i] == arr[j]))
            {
                printf("yes");
                k = 1;
                break;
            }
            if (k == 1)
            {
                break;
            }
        }
    }
    if (k != 1)
    {
        printf("no");
    }
    return 0;
}
