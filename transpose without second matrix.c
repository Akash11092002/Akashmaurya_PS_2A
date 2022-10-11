#include<stdio.h>
void main()
{
    int arr[3][3],i,j;
printf("\nEnter element in matrix ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {

            scanf("%d",&arr[i][j]);
        }
    }



    printf("\nTranspose array is : \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",arr[j][i]);
        }
        printf("\n");

    }
}
