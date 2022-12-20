#include <iostream>

using namespace std;

void removeSpaces(string str)
{
    string b;
    int c = 0; int i=0;
     while(i<str.size())
        {if (str[i]!=' ')
        {b[c] = str[i];
          c=c+1;
             }
     i++;
        }


        cout<< b;
}



int main()
{

    string str;
    cout<<"enter";
    getline(cin,str);

    removeSpaces(str);

    return 0;
}
