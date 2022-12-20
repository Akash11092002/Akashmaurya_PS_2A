#include<iostream>
using namespace std;
int main()
{
    string s1;
    cout<<"enter the string you want the suffix";
    cin>>s1;
    int  i=s1.size();

    while(i>=0)
    {
        for(int j=i;j<=s1.size();j++)
         { cout<<s1[j];

         }
         cout<<endl;
          i--;  }


    }

