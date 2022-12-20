
#include<stdio.h>
void main()
{
    int n,a[10],b[10],i;
    printf("enter the value of N");
    scanf("%d",&n);
    i=1;
    int p=0,k=0;
    while(i<=n){
        if(i%2==0)
        {
            a[p]=i;
            p++;
        }
        else
        {
            b[k]=i;
            k++;
        }
        i++;
    }
    for(i=0;i<p;i++)
    {
        printf("%d",b[i]);
    }
    i=k-1;
      while(i>=0)
    {
        printf("%d",a[i]);
        i=i-1;

}
    }
