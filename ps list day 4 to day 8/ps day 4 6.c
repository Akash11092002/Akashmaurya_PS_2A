
#include<stdio.h>
void armstrong(int start,int end)
{
    int i;
   for (i=start;i<=end;i++)
   { int sum=0,a;

   int t=i;
   while (t!=0)
   {a=t%10;
    sum=sum +(a*a*a);
    t= t/10;}

    if (sum==i)
  printf("%d \t",i);


    else
        continue;
   }



    }


void main()
{
    int start ,end;

    printf("enter the start and end point");
    scanf("%d%d",&start,&end);
        armstrong(start,end);
}
