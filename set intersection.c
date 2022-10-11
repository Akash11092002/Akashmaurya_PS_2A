#include<stdio.h>
void main()
{
    int a[10],b[10],c[20],i,j,n,m,k;
    printf("Akash maurya\n");
    printf("enter the no. element of a\n");
    scanf("%d",&n);
    printf("enetr the no.element of b\n");
    scanf("%d",&m);
    printf("enter the element of a");
    for(i=0;i<n;i++)
    {scanf("%d",&a[i]);}
    printf("enter the element of b");
    for(i=0;i<m;i++)
   {scanf("%d",&b[i]);}
   printf("the intersection of set 
    is");
   int it =0;
   for(i=0;i<n;i++)
   { k=0;
    for(j=0;j<m;j++)
    {if( a[i]==b[j])
    {k=1;}}
    if(k==1){c[it]=a[i];
    it++;}}
 for(i=0;i<it;i++)
 {printf("%d ",c[i]);
} }

