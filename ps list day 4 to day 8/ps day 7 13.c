#include<stdio.h>
#include<string.h>
void main()
{
    char city[50][52],t[20];
    int i,j,n;
    printf("enter total no of names");
    scanf("%d",&n);
    printf("enter the names");
    for(i=0;i<n;i++)
    {
        gets(city[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(strcmp(city[i],city[j])>0)
                { strcpy(t,city[i]);
                 strcpy(city[i],city[j]);
                 strcpy(city[j],t);

                }

    }


}
for(i=0;i<n;i++)
{
    puts(city[i]);
}}
