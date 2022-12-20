#include<stdio.h>
int factorial(int ,int);
void main()
{
    int n,c,r=1;
    printf("enter the no for factorial\n");
    scanf("%d",&n);
   c=factorial(n,r) ;
   printf("%d",c);

}
int factorial(int n,int r)
{
    if (n==1)
        return r;
    else
        return factorial(n-1,n*r);


}
