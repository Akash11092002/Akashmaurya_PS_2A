#include<stdio.h>
void main()
{
    int a[30],i,j,n,b[10];
    printf("enter the no of elements of set ");
    scanf("%d",&n);
    printf("enter the elements of set ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);}
        int aj=0;
        for(i=0;i<n;i++)
        {
            aj=aj^a[i];
        }
        printf("%d",aj);



}
