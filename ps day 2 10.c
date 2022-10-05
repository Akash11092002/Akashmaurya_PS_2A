#include<stdio.h>
void main()
{
    int i,j,k=5,gap=0;
    for(i=1;i<=3;i++)
    {   for(j=0;j<=gap;j++)
         {
            printf(" ");

        }  gap++;
        for(j=k;j>0;j--)
        {printf("*");}
        printf("\n");

          k=k-2;} k=3; gap=2;
       for (i=4;i<=5;i++)
       {
           for(j=gap;j>=1;j--)
           {
               printf(" ");
               } gap--;
               for(j=1;j<=k;j++)
               {
                   printf("*");
               } printf("\n");k=k+2;}

       }



