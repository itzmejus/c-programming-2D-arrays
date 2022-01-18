#include <stdlib.h>
#include <stdio.h>
void main()
{
    int arr1[3][3],arr3[3][3],/* sumarr[2][3],i,j; */mulArr[3][3],i,j;
    printf("enter first array\n \t");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("enter second array\n\t");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&arr3[i][j]);
        }
    }
   printf("array one is\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",arr1[i][j]);
        }
        printf("\n");
    }
     printf("array two is\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",arr3[i][j]);
        }
        printf("\n");
    }
    
    /* printf("sum of two matrix is\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
           sumarr[i][j]= arr1[i][j]+arr3[i][j];
           printf("%d ",sumarr[i][j]);

        }printf("\n");
    }
 */
printf("multiplication of two array is\n");
 for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
           mulArr[i][j]= arr1[i][j]*arr3[i][j];
           printf("%d ",mulArr[i][j]);

        }printf("\n");
    }
   
}
