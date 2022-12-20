#include<iostream>
using namespace std;
int main()
{   int num,ak[1000],p,a;
    cout<<"enter the odd digit number";
    cin>>num;
   int  i=0;p=0;
    while(num>0)
    {  a=num%10;
        ak[p]=a;
        p++;
        num=num/10;}
    int temp;
  for(i=0;i<p/2;i++)
    {   temp=ak[i];
        ak[i]=ak[p-i-1];
        ak[p-i-1]=temp;}
int  lb=0;int ub=p-1,sum1=0,sum2=0;
int  mid = (lb+ub)/2;
 for(i=0;i<mid;i++)
 {sum1=sum1+ak[i];}
for(i=mid+1;i<p;i++)
 {sum2=sum2+ak[i];}
 if(sum1==sum2){cout<<"balanced number"; }
 else
 {cout<<"not a balanced ";}
}
