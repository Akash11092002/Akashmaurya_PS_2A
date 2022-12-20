#include<stdio.h>
#include<math.h>
void main()
{ int a,b,k;
 printf("enter the value of a and b");
 scanf("%d%d",&a,&b);
 printf("enter the value of k");
 scanf("%d",&k);
 int n=(pow(a,b));
 printf("%d",n);
 int count=0;
 while(n>0&&count<k)
 {
     a=n%10;
     count=count +1;
     n=n/10;
 }
 printf("%d",a);



}
