
#include<iostream>
using namespace std;
int main()
{
    int num,sum=0;
    cout<<"enter the number";
    cin>>num;
    int j;
       for(int i=1;i<=num ;i++)
    {       cout<<"the least prime factor of "<<i<<"  is  ";
        if(i%2==0)
        {
            cout<<"2"<<endl;
        }
        else
        {
            for( j=1;j<=i;j++)
            {
                if(i%j==0)
                { if(i!=j&&j!=1)

                  {
                      cout<<j<<endl;
                      break;

                  }
                  else if(i==j)
                  {
                      cout<<j<<endl;
                  }
                }

            }



    }
    }}

