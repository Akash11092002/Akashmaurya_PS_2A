#include<iostream>
using namespace std;
int main()
{
    string s1;
    cout<<"enter the string you want to find the prefix";
    cin>>s1;
    int i=0;
    while(i<s1.size())
    {
        for(int j=0;j<=i;j++)
        {
            if(i==j)
            {
                cout<<s1[j]<<endl;
            }
            else
            {
                cout<<s1[j];


            }


        }
        i++;

        }
    }

