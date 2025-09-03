#include<stdio.h>

int main(){
    int n , del;
    printf("enter the size of array:");
    scanf("%d",&n);

    int arr[n];

    printf("enter the input of array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    printf("enter the value you want to delete:");
    scanf("%d",&del);

    for (int i = 0; i < n; i++)
    {
        if (del==arr[i])
        {
            for (int j = i; j < n-1; j++)
            {
                arr[j]=arr[j+1];
            }
            n--;
            
        }
        
    }
    for (int i = 0; i < n; i++)
    {
       printf("%d ",arr[i]); 
    }
    return 0; 
    
}