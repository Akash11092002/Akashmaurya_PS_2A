#include<math.h>
#include<stdio.h>
void main()
{
    int i,n,x,fact=1;
    float sum=1,a;
    printf("enter the no of terms");

    scanf("%d",&n);
    printf("enter the value of x");
    scanf("%d",&x);
    for(i=1;i<=n;i++)

    {
        fact=fact*i;
        a=pow(x,i)/fact;
        if (i%2==0)
        {
            sum=sum+a;
        }
        else
        {
            sum=sum-a;
        }
    }
    printf("the series sum is %f",sum);

}
