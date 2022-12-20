#include<string>
#include<iostream>
using namespace std;
int main()
{   int c=1;
    string str;
   getline(cin,str);

   for(int i=0;i<str.size();i++)
   {
       if(str[i]==' '||str[i]=='\t'||str[i]=='\n')
       {

           c++;

       }

   }
   cout<<c<<endl;






}
