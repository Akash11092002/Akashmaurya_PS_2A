#include<stdio.h>
int pd(int num)
{ int temp,a,rev=0;
temp=num;
while(num>0)
{
    a=num%10;
    rev=rev*10+a;
    num=num/10;
}
    if (rev==temp)
        return 0;
    else
        return 1;
}
void main()
{
    int num;
    printf("enter the number");
    scanf("%d",&num);
    if(pd(num)==0)
        printf("%d is the pallindrome",num);
    else
        printf("%d it is not pallindrome",num);
}
