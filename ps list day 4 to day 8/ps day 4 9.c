
#include<stdio.h>
void lcm(int ,int);
void main()
{    int a,b;
    printf("enter two no for lcm");
    scanf("%d%d",&a,&b);
    printf("the lcm of two number is ");
    lcm(a,b);
}
void lcm(int a,int b)
{ int max;
    if(a>b)
    { max=a;

    }
    else
    {
        max=b;
    }
    while(max%a>0||max%b>0)
    {
        max=max+1;
}
printf("%d",max);

}
