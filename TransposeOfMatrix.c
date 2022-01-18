#include <stdlib.h>
#include <stdio.h>
void main()
{
    int arr[2][3], i, j;
    printf("enter the elements of the matrix");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("the array elements are\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    
    printf("Transpose of Matrix is \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d ", arr[j][i]);
        }
        printf("\n");
    }

return 0;
   
}
