#include<stdio.h>
void main()
{
int d,m,y ,i;
printf("enter the  date ");
scanf("%d%d%d",&d,&m,&y);
if ((d==29&& m==2)&&((y%400!=0)||(y%4!=0&&y%100==0)))
    {printf("the date not exist") ;}


        int x=y%100;
        int c=y/100;
        int f=d+((13*m-1)/5)+x+(x/4)+(c/4)-2*c;
        int a =f%7; printf ("%d",a);
        switch(a)
        {
        case 0:
            printf("monday");
            break;

        case 1:
            printf("tuesday");
        case 2:
        printf("wednesday");
            break;
        case 3:
            printf("thursday");
            break;
        case 4:
            printf("friday");
            break;
        case 5:
            printf("saturday");
            break;
        case 6:
            printf("sunday");
            break;


}}
