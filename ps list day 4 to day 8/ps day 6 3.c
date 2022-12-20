#include<stdio.h>
void main()
{

    int a[3][3],i,j,c=0;
    printf("enter the matrix elements ");
    for(i=0;i<3;i++)
    {for(j=0;j<3;j++)
    {scanf("%d",&a[i][j]);}}
     int s1=0;
    for(i=0;i<3;i++)
    {for(j=0;j<3;j++)
        {if(i==j)
        {s1=s1+a[i][j];}}}
     for(i=0;i<3;i++)
    { int s2=0;
    for(j=0;j<3;j++)
    {s2=s2+a[i][j];}
    if(s1==s2)
    {c =1;}
    else
    {c =0;
    break;
    }}
    for(i=0;i<3;i++)
        { int s3=0;
            for(j=0;j<3;j++)
            {
                s3=s3+a[i][j];
            }
            if(s1==s3)
            {
                c=1;

            }
            else{
                c=0;
            }

        }
        if(c==1)
        {
            printf("magic matrix");

        }
        else
        {
            printf("not magic matrix");
        }

    }



