#include <stdlib.h>
#include <stdio.h>
void main()
{

    int Mark[2][3];
    int i, j;
    printf("enter subject ");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)

        {
            scanf("%d", &Mark[i][j]);
        }
    }
    printf(" mark is\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)

        {
            printf("%d ", Mark[i][j]);
        }
        printf("\n");
    }
    return 0;
}
