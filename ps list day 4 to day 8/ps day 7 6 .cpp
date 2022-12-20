#include<iostream>
using namespace std;
int main()
{
    string s1,s2;
    cout<<"enter the two string you want to compare"<<"\n";
    cin>>s1;
    cin>>s2;
    if(s1==s2)
    {
        cout<<"equal";

    }
    else if(s1<s2)
    {
        cout<<"s1 is smaller";

    }
    else
    {
        cout<<"s1 is greater";

    }
    return 0;

}
