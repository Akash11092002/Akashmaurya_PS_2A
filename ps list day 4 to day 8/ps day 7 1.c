
#include<stdio.h>
#include<conio.h>
int strlen1(char * );
void main()
{ char name[100];
int l;
printf("enter a string \n");
gets(name);
l=strlen1(name);
printf("length of string is : %d",l);

}


int strlen1(char *p)
{
     int i=0;
     while(*p!='\0')
    {
        i++;
        p++;
    }
   return(i);
}









