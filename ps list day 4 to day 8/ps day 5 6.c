#include<stdio.h>
void main()
{
    int a[50],i,n,temp;
    printf("enter the no of array elements ");
    scanf("%d",&n);
    printf("enter the array elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    };i=0;
    if(n%2==0)
    {while (i<n)
    {
        temp=a[i];
        a[i]=a[i+1];
        a[i+1]=temp;
        i=i+2;

    }}
     else{
        while(i<n-1)
        {
            temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
           i= i+2;
        }
    }

    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }}


