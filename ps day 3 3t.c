#include<stdio.h>
int sum();

void main()

{
  int n;
  float c;
  printf("enter the no of terms");
  scanf("%d",&n);
  c=sum(n);
  printf("the sum is %f",c);
}
int sum(int n)

{
  int i,fact=1;
  float a,sum=0;
  for(i=1;i<=n;i++)
  {
    fact=fact*i;
    a=fact/i;
    sum=sum+a;



  } return sum;

}
