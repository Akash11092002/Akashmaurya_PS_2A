#include<stdio.h>//Akash Maurya
                //2100320130023
void main()
{
    int a[20],min,i,j,n,temp;
    printf("enter the no of elements of array");
    scanf("%d",&n);
    printf("enter the array elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    for(i=0;i<n;i++)
    { min=i;

        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
            {
               min=j;

            }}
            temp =a[i];
            a[i]=a[min];
            a[min]=temp;


    }
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}
