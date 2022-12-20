#include <stdio.h>
#include <stdlib.h>

int main(){
    int arr[50],i,n;
    printf("enter the no of array elements ");
    scanf("%d",&n);
    printf("enter the array elements ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);

    }

    int temp;
    for( i = 0; i<n/2; i++){
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
    for(int i = 0; i < n; i++){
        printf("%d\t", arr[i]);
    }
}
