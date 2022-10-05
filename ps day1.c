
#include<stdio.h>
void main()
{
    int side1,side2,side3;
    printf("enter the measurement of side1,side2,side3");
    scanf("%d%d%d",&side1,&side2,&side3);
    if(side1==side2&&side2==side3)
    {
        printf("the triangle is equilateral");
    }
    else if (side1==side2||side2==side3||side1==side3)
    {
        printf("the triangle is isoscles");

    }
    else{printf("the triangle is scalene");
    }
}
