#include<stdio.h>
void main()
{
    int i,j,k;
    for (i=1;i<=5;i++)
    {  k=0;
        for (j=1;j<=i;j++)
        {
            printf("%c",'A'-i+5+k);
              k++;
        } printf("\n");
    }
}
