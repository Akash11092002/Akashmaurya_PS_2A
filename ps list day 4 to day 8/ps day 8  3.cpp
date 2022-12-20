#include<iostream>
using namespace std;
void sumdigit(int);

int main()
{
    int num;
    cout<<"enter the number";
    cin>>num;
    sumdigit(num);
    return 0;
}
void sumdigit(int num)
{  int sum=0;
    while(num>0)
    {
        int a=num%10;
        sum=sum+a;
        num=num/10;
    }
    if(sum<10)
    {
        cout<<sum;

    }
    else{
        sumdigit(sum);
    }
}
