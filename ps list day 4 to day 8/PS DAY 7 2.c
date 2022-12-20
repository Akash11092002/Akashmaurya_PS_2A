#include<stdio.h>
#include<string.h>

void main()
{
    char a[100],temp;
    int i=0,j=0;
    printf("enter the string");
    gets(a);
   int  l=strlen(a);
    j=l-1;

    while(i<j)
    {
        temp=a[j];
        a[j]=a[i];
        a[i]=temp;
        i++;
        j--;
            }
            printf("the reversed string is \n");
            puts(a);
}
