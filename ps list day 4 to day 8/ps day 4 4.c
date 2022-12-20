#include<stdio.h>
void pernum(int,int);
void main()
{
    int num,a[50],i,sum=0,temp,start,end;

    printf("enter the start and end point ");
    scanf("%d%d",&start,&end);
    printf("the perfect no in the given range are");
    pernum(start,end);

}
 void pernum(int start,int end)

{ int i;
    for(i=start;i<=end;i++)
    {
        int sum=0,x;
        for(x=1;x<i;x++)
        {
            if(i%x==0)
            {
                sum=sum+x;
            }
        }
        if(sum==i)
        {
            printf("%d\t",i);
        }
    }

}

