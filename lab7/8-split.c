#include<stdio.h>

int main(){
    int n=10;
    int arr[n] , arr1[5] , arr2[5];
    printf("enter the input of array\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if(i<5){
            arr1[i]=arr[i];
        }
        else{
            arr2[i-5]=arr[i];
        }
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",arr1[i]);
    }
    printf("\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",arr2[i]);
    }   
    return 0;

}
