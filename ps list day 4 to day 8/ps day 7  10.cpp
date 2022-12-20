#include<iostream>
using namespace std;
int main()
{
    string s;
    int ak[40];
    cout<<"enter the string"<<endl;
    cin>>s;
    int n=s.size();
    cout<<n;
    int i;
    for(i=0;i<20;i++)
    {
        ak[i]=0;
    }
    for(i=0; i<n; i++){

      if(s[i]>='a' && s[i]<='z'){
         ak[s[i] - 97]++;
      }
      else if(s[i]>='A' && s[i]<='Z'){
         ak[s[i] - 65]++;
      }
   }

   for(i=0; i<20; i++){

      if(ak[i] != 0){
        {
            cout<<ak[i];
        }
      }
   }
   return 0;
}

