#include<stdio.h>
void main()
{
    int a[3][3],b[3][3],i,j;
    printf("enter the elemets of matrix a\n");
    for (i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("the transpose of the matrix is \n");

     for (i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        { b[i][j]=a[j][i];
         printf("%d\t",b[i][j]);}
         printf("\n");
}}
