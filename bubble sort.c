    #include<stdio.h>
    void main()//Akash Maurya
    //2100320130023
    {
        int a[20],i,j,temp,n;
        printf("enter the number of elements in an array ");
        scanf("%d",&n);
        printf("enter the array elements");
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);}

    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;}}}
                printf("the sorted array is");

    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

                }
