#include<stdio.h>
void main()
{
    int c1,c2;
    printf("enter  the coordinates of a point ");
    scanf("%d%d",&c1,&c2);
    if (c1>0&&c2>0)
    printf("the point in first quadrant ");
    else if (c1<0&&c2>0)
        printf(" the point in the second qusadrant");
    else if (c1<0&&c2<0)
        printf("the point in the third quadrant ");
    else {
        printf("the point in the fourth quadrant ");
    }



}
