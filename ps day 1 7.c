#include<stdio.h>
void main()
{
    float temp;
    printf("enter the tempreature in celsius");
    scanf("%f",&temp);
    if (temp<0)
        printf("the freezing weather");
    else if(0<=temp&&temp<10)
        printf("very cold weather");
    else if( temp>=10 &&temp<20)
        printf("cold weather ");
    else if (temp>=20&&temp<30)
        printf("normal tempreature");
    else if(temp <40&& temp>=30)
        printf("its hot");
    else printf (" its very hot");
}
