#include<stdio.h>

int main(){
    int n , sum=0;
    printf("enter the size of array");
    scanf("%d",&n);
    int arr[n];
    printf("enter the %d input\n",n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d" , &arr[i]);
    }

    for (int i = 1; i < n; i+=2)
    {
        sum+=arr[i];
    }
    printf("sum of the odd index=%d",sum);
    

    return 0;  
}