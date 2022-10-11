#include<stdio.h>

void main()
{int a[30],b[30],c[60],i,n,m,j,k;
    printf("enter the number of elements of a");
    scanf("%d",&n);
    printf("enter the set A elements");
for (i=0;i<n;i++)
    {scanf("%d",&a[i]);}
    printf("enter the  no elements of set b");
    scanf("%d",&m);
printf("enter the set B elements ");
for(i=0;i<m;i++)
{scanf("%d",&b[i]);}
for (i=0;i<n;i++)
{c[i]=a[i];}
for (i=0;i<m;i++)
{c[n+i]=b[i];}
printf("the union of two sets is \n");
for (i=0;i<m+n;i++)
{k=0;
for(j=i+1;j<m+n;j++)
{if(c[i]==c[j])
{k=1;
break;}}
if(k==0)
    {printf("%d\t",c[i]);
                          }}}


