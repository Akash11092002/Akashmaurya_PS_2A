#include<stdio.h>
void main()
{
    int n,i;
    printf("enter the value of n");
    scanf("%d",&n);
    printf("the sum of the series is");
    int sum=0;
    for(i=1;i<=n;i++)
    {sum=sum+(i*(i+1)*(i+2));}
    printf("%d",sum);

}
