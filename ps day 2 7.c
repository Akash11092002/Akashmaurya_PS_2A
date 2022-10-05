#include<stdio.h>
void main()
{
    int i,j,n=3,k;
    for (i=1;i<=4;i++)
    {
        for (j=1;j<=n;j++)
        {
            printf(" ");
        }
        n--; k=i;
        for(j=1;j<=i;j++)
        {
            printf("%d",k);
            k--;
        }  k=2;
        for(j=1;j<i;j++)

        {
            printf("%d",k);
            k++;
        }


        printf("\n");
    }
}
