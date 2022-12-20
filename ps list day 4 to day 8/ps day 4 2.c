
#include<stdio.h>
int mean(int ,int[]);
float median(int,int[]);
void main()
{
  int a[50],n,i;
  printf("enter the total number ");
  scanf("%d",&n);
  printf("enter the numbers");
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  printf("the mean is %d",mean(n,a));
  printf("the median is  %f",median(n,a));
}
int mean(int m,int a[])

{ int i;
 int sum =0;
 for (i=0;i<m;i++)
 {
     sum=sum+a[i];}
     return sum/m;
}
float median(int m, int x[]) {
    int temp;
    int i, j;
    for(i=0; i<m-1; i++) {
        for(j=i+1; j<m; j++) {
            if(x[j] < x[i]) {
                temp = x[i];
                x[i] = x[j];
                x[j] = temp;
            }
        }
}
if (m%2==0)
{
    return ((x[m/2]+x[m/2-1])/2);
}
else
{return x[m/2];}}
