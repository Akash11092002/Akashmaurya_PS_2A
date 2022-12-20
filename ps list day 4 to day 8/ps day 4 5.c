#include<stdio.h>
int prime (int ,int);
int a[50];
void main()
{  int a,b,sum;
    printf("enter the start and end point");
    scanf("%d%d",&a,&b);
    printf("the prime number in the given range is\n");
  prime(a,b);
}




    int prime (int a, int b)
    {for(int i=a;i<=b;i++)
    {
       int sum=0;
        for(int j=1;j<=i;j++)
        {
            if(i%j==0)
               {sum=sum+1;}

        }
        if (sum==2)
            { printf("%d ,",i);
            }
    }

}
