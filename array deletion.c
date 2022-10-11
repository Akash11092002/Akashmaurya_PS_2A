#include<stdio.h>
void main()
{
    int a[20],i,pos,n;
    printf("enter the no of elements of array ");
    scanf("%d",&n);
    printf("enter the array elements ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    printf("enter the location ");
    scanf("%d",&pos);
    if(pos>=n+1)
        printf("deletion not possible");
    else
    {
        for(i=pos-1;i<n-1;i++)
        {
            a[i]=a[i+1];
        }

    printf("resultant array");
    for(i=0;i<n-1;i++)
        printf("%d",a[i]);}
}
