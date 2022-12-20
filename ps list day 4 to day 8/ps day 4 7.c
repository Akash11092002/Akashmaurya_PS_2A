#include<stdio.h>
void strongno(int);
int main()
 {
  int max;

  printf("Enter maximum range");
  scanf("%d",&max);

  printf("Strong numbers in the given range are ");
  strongno(max);}


 void strongno(int max)
 { int k,i,f,r,sum,temp;
     for(k=1; k<= max; k++){
      temp = k;
      sum=0;

      while(temp>0){
           i=1;
           f=1;
           r=temp%10;

           while(i<=r){
             f=f*i;
             i++;
           }
         sum=sum+f;
         temp=temp/10;
      }

      if(sum==k)
           printf("%d ",k);
  }

}
