#include<stdio.h>

int main(){
    int n , max , min , sum=0 , avg ,t;
    printf("enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("enter the input of array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    min=arr[0];

    for (int i = 0; i < n; i++)
    {
        if(max<arr[i]){
            max=arr[i];
        }
        if (min>arr[i])
        {
            min=arr[i];
        }

        sum+=arr[i];  
    }
    for (int i = 0; i < n/2; i++)
    {
        t=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=t;
    }
    printf("largent element in the given array is %d\n" , max);
    printf("smallest element in the given array is %d\n" , min);
    printf("sum of the element in the given array is %d\n" , sum);
    printf("average of the element in the given array is %0.2f\n" , (sum*1.0)/n);
    printf("reversed array\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
    
    
    

    
}