#include<stdio.h>
void main()
{
    int a[20],b[20],i,j,n,m,c[20],d[20];
    printf("enter the no of elements in array 1");
    scanf("%d",&n);
    printf("enter the elememnts of array 1");
    for(i=0;i<n;i++)
    {scanf("%d",&a[i]);}
    printf("enter the no of elements of array 2");
    scanf("%d",&m);
    printf("enter the array elements");
    for(i=0;i<m;i++)
    {
        scanf("%d",&b[i]);}
         int it=0,k=0;
    for(i=0;i<n;i++)
    { int found=0;
        for(j=0;j<m;j++)
        {
            if(a[i]==b[j])
            {
                found=1;
                break;
            }


        } if(found==1)
        {
            c[it]=a[i];
            it++;

        }
        else{
                d[k]=a[i];

        k++;

        }
    } printf("the common elements are\n");
    for(i=0;i<it;i++)
    {
        printf("%d\n",c[i]);
    } int x=0,z=0;
    for(i=0;i<m;i++)
    {  x=0;
         for(j=0;j<k;j++)
       {
           if(b[i]==c[j])
           {
               x=1;
               break;
           }
       }  if(x==0)
       {
           d[k]=b[i];
           k++;
       }
    }printf("the element not in both array are\n");
    for(i=0;i<k;i++)
    {
        printf("%d",d[i]);
    }

}
