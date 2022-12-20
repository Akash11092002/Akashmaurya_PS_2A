#include<iostream>
using namespace std;
void prime(int );
int main()
{
    int num;
    cout<<"enter the number";
    cin>>num;
    prime(num);
}
void prime(int n)
{

    int c=2;

    while(n>1)

    {

        if(n%c==0){

        cout<<c<<" ";

        n=n/c;

        }

        else c++;

    }}
