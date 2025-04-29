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
    
    if(arr[0]>arr[1]){
        for (int i = 1; i < n-1; i++)
        {
            if (arr[i]<arr[i+1])
            {
                printf("array is not sorted");
                break;
            }else if (i=n-2)
            {
                printf("array is sorted");
            }
            
        }
            
    }else{
        for (int i = 1; i < n-1; i++)
        {
            if (arr[i]>arr[i+1])
            {
                printf("array is not sorted");
                break;
            }else if (i=n-2)
            {
                printf("array is sorted");
            }
            
        }

    }
    

    return 0;
}    