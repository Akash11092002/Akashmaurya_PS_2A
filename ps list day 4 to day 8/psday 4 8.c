#include<stdio.h>

int gcd(int a, int b) {
   if (b == 0)
   return a;
   else if(a>=b)
   return gcd(b, a % b);
   else
    return gcd(b,a);
}
int main() {
   int a,b;
   printf("enter the values of a and b");
   scanf("%d%d",&a,&b);
   int x=gcd(a, b);
      printf("GCD of a  b is %d", x);
   return 0;
}
