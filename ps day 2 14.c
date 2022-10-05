#include<stdio.h>
void main()
{
    int i,n,j,k=n-1,l;
printf("enter the value of n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {printf("*");}
    printf("\n"); l=n-2;

     for(i=2;i<=n-1;i++)
    {
        for(j=l;j>=1;j--)
        {
            printf(" ");


        } l=l-1;

        for(j=k;j>=k;j--)
        {
            printf("*");

        } k=k-1;printf("\n");}
        for(i=1;i<=n;i++)
        {
            printf("*");
        }




}
