#include<stdio.h>
void main()
{int a[10],b[10],c[20],i,j,n,m,k;
     printf("Akash Maurya\n");
    printf("enter the no  elements of a");
    scanf("%d",&n);
    printf("enter the no  elements of b");
    scanf("%d",&m);
    printf("enter the elements of a");
    for(i=0;i<n;i++)
    {scanf("%d",&a[i]);}
    printf("enter the elements of b");
    for(i=0;i<m;i++)
    {scanf("%d",&b[i]);}
        int p=0;
    printf("the difference of two set is");
    for(i=0;i<n;i++)
    { k=0;
     for(j=0;j<m;j++)
    {if (a[i]==b[j])
    {k=1;break;}}
    if (k==0)
    {c[p]=a[i];p++;}}
for(i=0;i<p;i++)
    {printf("%d\t",c[i]);
    }
}
