
#include<iostream>
using namespace std;
void lower(string);
void upper(string);
int main()
{
    string s;
    cout<<"enter the string you want to convert";
    getline(cin,s);
    lower(s);
    upper(s);
    return 0;

}
void lower(string s)
{
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='A'&&s[i]<='Z')
        {
            s[i]=s[i]+32;

        }
    }
    cout<<"lower format of the string is"<<s;
}
void upper(string s)
{
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='a'&&s[i]<='z')
        {
            s[i]=s[i]-32;

        }
    }
    cout<<"upper format is"<<s;
}
