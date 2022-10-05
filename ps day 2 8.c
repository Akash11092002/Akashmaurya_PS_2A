#include<stdio.h>
void main()
{
    int i,n=4,j,k=1,l=n-1;
    for (i=1;i<=n;i++)
    {
        for (j=1;j<=l;j++)
        { printf(" ");
        }
        for(j=1;j<=k;j++)
        {
          printf("*");
        }
        k = k+2;
        l--;
        printf("\n");
}
}
