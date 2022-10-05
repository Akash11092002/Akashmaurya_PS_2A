#include<stdio.h>
void main()
{
    char alpha;
    printf("enter the alphabet ");
    scanf("%c",&alpha);
    if (alpha=='a'||alpha=='e'||alpha=='i'||alpha=='o'||alpha=='u')
    {
        printf("it is a vowel");

    }
    else {printf("it is a consonent");

    }
}
