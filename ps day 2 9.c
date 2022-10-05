#include<stdio.h>
void main()
{
    int i,n=3,j,k=1,l=n-1,m,q;
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
        printf("\n");}
         m=1;k=4;
        for (i=4;i<=5;i++)
          {


            for(j=1;j<=m;j++)
                  {
                      printf(" ");
                  }  m++;

           for(j=1;j<k;j++)
           {
               printf("*");

           }  printf("\n");
           k=k-2;

}}
