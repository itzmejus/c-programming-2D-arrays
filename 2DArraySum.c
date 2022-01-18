#include <stdlib.h>
#include <stdio.h>
void main()
{   int arr[2][3],i,j,sum=0;
    printf("enter the array elements");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&arr[i][j]);

        }

    }                                       
      printf("sum is");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {

     sum=sum+arr[i][j];   
            printf("%d",sum);
        }

    }

    return 0;
}
