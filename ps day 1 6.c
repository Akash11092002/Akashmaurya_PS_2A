#include <stdio.h>
void main()
{
    int s1,s2,s3;
    printf ("enter the sides of the triangle ");
    scanf("%d%d%d",&s1,&s2,&s3);
    if (s1==s2&&s2==s3)
        printf(" the triangle is equilateral");
    else if(s1==s2||s2==s3||s3==s1)

        printf("the triangle is isosceles");
  else printf("the triangle is scalene");

}
