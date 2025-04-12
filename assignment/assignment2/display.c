#include<stdio.h>

int main(){
    int arr[10] ,arr2[5];

    for (int i = 0; i < 10; i++)
    {
        arr[i]=i+1;

    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d ",arr[i]);
    }

    printf("\nenter the 5 input in array\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&arr2[i]);
    }
    
    printf("your inputs are : ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d",arr2[i]);
    }

    return 0;
    
    
}