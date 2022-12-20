
#include<stdio.h>
int pow(int ,int);

void main()
{
    int a,b;
    printf("enter the a");
    scanf("%d",&a);
    printf("enter the value of b");
    scanf("%d",&b);
   int  x= pow(a,b);
   printf("%d",x);
}
int pow(int a,int b)
{
    if (b==0)
    {
    return 1;
    }
    else if(a==0)
    {return 0;}
    else
        return a*pow (a,b-1);
}
