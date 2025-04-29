#include<stdio.h>

int main(){
    int n , st=0 , end =0;
    printf("enter the size of array");
    scanf("%d",&n);
    int arr[n];
    printf("enter the %d input\n",n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d" , &arr[i]);
    }

    printf("enter the staring index:");
    scanf("%d",&st);
    printf("enter the ending index:");
    scanf("%d",&end);

    for (int i = st; i <= end; i++)
    {
        printf("%d " , arr[i]);
    }
    
    return 0;

    
}