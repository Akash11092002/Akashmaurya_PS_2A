#include<stdio.h>
void main()
{
    int bs,total;
    float hra, da ,pf ,allow;
    char grade;
    printf("enter the basic salary");
    scanf("%d",&bs);
    printf("enter the grade ");
    scanf("%c",&grade);
    hra=0.20*bs;


    da=0.50*bs;
    pf=0.11*bs;
    if(grade=='a')
        {allow=1700;}
    else if (grade=='b')
        {allow=1500;}
    else
        {allow =1300;}
     printf("the hra is%f",hra);
     printf("the da is %f",da);
     printf("the pf is %f",pf);
     printf("the allowance is %f",allow);
    total= bs+hra+da+allow-pf;
    printf("the total salary is %d",total);
}
