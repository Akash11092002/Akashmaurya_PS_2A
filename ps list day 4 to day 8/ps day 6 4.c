#include<stdio.h>
void main()
{
    int a[3][3],i,j;
    printf("enter the matrix");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);

        }
    }
    for(i=2;i>=0;i--)
    {
        for(j=2;j>=0;j--)
        {
            printf("%d",a[i][j]);
        } printf("\n");
    }
