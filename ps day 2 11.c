#include<stdio.h>
void main()
{
    int i,j,n,gap=8,l;
    for(i=1;i<=5;i++)
    { n=1;
        for(j=1;j<=i;j++)
        {
            printf("%d",n);
            n++;

        }
        for(j=gap;j>0;j--)
        {
            printf(" ");
        }  gap=gap-2; l=i;
        for(j=1;j<=i;j++)
        {
            printf("%d",l);
            l--;
        }
        printf("\n");



    }
}

