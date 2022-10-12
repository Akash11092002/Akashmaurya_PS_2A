
#include<stdio.h>
void main()
{

int a[10],ele,i,n;
printf("enter the no of elements in an array");
scanf("%d",&n);
printf("enter the elements of the array");
for (i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
printf("enter the element you want to insert");
scanf("%d",&ele);
i=n-1;
while(ele<a[i]&&i>=0)
{a[i+1]=a[i];}
n++;
a[i+1]=ele;
printf("the sorted array is");
for(i=0;i<n;i++)
{
    printf("%d",a[i]);
}
}
