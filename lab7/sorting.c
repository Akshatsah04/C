#include<stdio.h>

int main(){
    int n;
    printf("enter the size of array:");
    scanf("%d",&n);
    int arr[n];
    printf("enter the input of array\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n;i++){
        for (int j = 0; j <n-1; j++)
        {
            if(arr[j]>arr[j+1]){
                int a;
                a=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=a;
            }
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
    
}