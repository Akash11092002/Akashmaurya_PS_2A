#include<iostream>
using namespace std;
void concatenate(string,string);
int main()
{
    string s1,s2,s3;
    cout<<"enter the two string you want to concatenate";
    cin>>s1>>s2;
    concatenate(s1,s2);

    return 0;
}
void  concatenate(string s1,string s2)
{
    string s3;
    s3=s1+s2;
    cout<<s3;
}
