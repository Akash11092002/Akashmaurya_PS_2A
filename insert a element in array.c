#include<stdio.h>
void main()
{
    int a[20],n,i,pos,element;
    printf("enter the no of array elements");
    scanf("%d",&n);
    printf("enter the array elements");
    for(i=0;i<n;i++)
    { scanf("%d",&a[i]);

    }
    printf("enter the position where you want to insert ");
    scanf("%d",&pos);
    printf("enter the value you want to insert");
    scanf("%d",&element);
    for(i=n-1;i>=pos-1;i--)
    {
        a[i+1]=a[i];

    } n++;
    a[pos-1]=element;
    for (i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }

}
