#include<stdio.h>
void main ()
{
    int n;
     printf("enter the  order of the matrix");
    scanf("%d",&n);
    int a[n][n],i,j,k;

    printf("enter the matrix");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    i=0;
    for(j=0;j<n;j++)
{
    printf("%d",a[i][j]);
}
i=i+1;
j=n-1;
    while (i<n)
{printf("%d",a[i][j]) ;
        i++;   }

    i=n-1;
       j=j-1;
       while(j>=0){
        printf("%d",a[i][j]);
        j--;
       }
       j=0;

       i=n-2;
       while(i>0)
       {
           printf("%d",a[i][j]);
           i--;
       }
       i=1;
       j=1;

       while(j<n-1)
       {
           printf("%d",a[i][j]);

           j++;
       }
       j=n-1;
       while(j<n-2)
       {
           printf("%d",a[i][j]);
           j++;
       }


}
