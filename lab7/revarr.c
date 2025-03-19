#include<stdio.h>

int main(){
    int n  ;
    printf("enter the size of array");
    scanf("%d",&n);
    int arr[n];
    int aux[n];
    printf("enter the %d input\n",n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d" , &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        aux[n-1-i]=arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ",aux[i]);
    }

    

    return 0;
}   