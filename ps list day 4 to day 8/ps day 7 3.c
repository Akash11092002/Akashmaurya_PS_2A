#include<stdio.h>

#include<string.h>
void main()
{
char s1[10],s2[10];
printf("enter string \n");
gets(s1);
strcpy(s2,s1);
strrev(s2);
if(strcmp(s2,s1)==0)
{printf("string palindrome \n");
}
else
printf(" not palindrome \n");

}


