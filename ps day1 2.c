#include<stdio.h>
void main()
{
    int num1,num2,num3;
    printf("enter the three numbers ");
    scanf("%d%d%d",&num1,&num2,&num3);
    if(num1>num2){
        if (num1>num3)
        {
            printf("the num 1 is the largest number");

        }
        else {printf("the num3 is the largest");
        }}
        else{
            if (num2>num3)
                printf("num2 is the greatest");
            else
                printf ("the num 3 is the greatest number");

        }
    }

