#include<stdio.h>
void main()
{
    int d,a,m,y,c,dec,year,f,x;
    printf("enter the date");
    scanf("%d",&d);
    printf("enter the month");
    scanf("%d",&a);
    m=a-2;
    printf("enter the year");
    scanf("%d",&year);
    if(m==-1)
    {
        y=y-1;
        m=11;
    }
    else if(m==0)
    {
        y=y-1;
        m=12;

    }
    dec=year%100;
    c=year/100;
    f=d+((13*m-1)/5)+dec+(dec/4)+(c/4)-2*c;
    if (f>0)
    {
        x=f%7;
    }
    else if(f<0)
    {
        x=(f%7)+7;

    }
    if(x==1)
        printf("monday");
    else if (x==2)
    printf("tuesday");
    else if(x==3)
        printf("wednesday");
    else if(x==4)
        printf("thursday");
    else if(x==5)
        printf("friday");
    else if(x==6)
        printf("saturday");
    else if(x==0)
        printf("sunday");

}
