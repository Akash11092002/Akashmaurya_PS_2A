
#include<stdio.h>
void main()
{
    int i,n,x,sum,fact;
    printf("enter the value of x and n");
    scanf("%d%d",&n,&x);
    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            fact=fact*i;

        }
    }
}
