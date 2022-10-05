#include<math.h>
#include<stdio.h>
void main()
{
    int i,fact=1,n,x;
    float sum=1,a;
    printf("enter no of terms");
    scanf("%d",&n);
    printf("enter the value of x");
    scanf("%d",&x);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
        a=pow(x,i)/fact;
        sum=sum+a;
    }
    printf("the sum of the series is %f",sum);

}
