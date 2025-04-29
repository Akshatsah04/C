#include<stdio.h>

int main(){
    int n ;
    printf("enter the size of array");
    scanf("%d",&n);
    int arr[n];
    printf("enter the %d input\n",n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d" , &arr[i]);
    }
    int max=arr[0],min=arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i]>max)
        {
            max=arr[i];
        }
        if (arr[i]<min)
        {
            min=arr[i];
        }  
    }
    printf("largest element in the array is %d\nsmallest element in the array is %d",max,min);
    
    return 0;

    
}