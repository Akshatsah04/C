#include<stdio.h>

int main(){
    int n1 , n2;

    printf("enter the size of first array:");
    scanf("%d",&n1);
    int arr1[n1];

    printf("enter the value of first array\n");
    for (int i = 0; i < n1; i++)
    {
        scanf("%d", &arr1[i]);
    }
    

    printf("enter the size of second array:");
    scanf("%d" ,&n2);
    int arr2[n2];

    printf("enter the value of second array\n");

    for (int i = 0; i < n2; i++)
    {
        scanf("%d", &arr2[i]);
    }

    int ans[n1+n2];
    for (int  i = 0; i < n1+n2; i++)
    {
        if (i<n1)
        {
            ans[i]=arr1[i];
        }
        else{
            ans[i]=arr2[i-n1];
        }
        
    }
    for (int i = 0; i < n1+n2; i++)
    {
        printf("%d ",ans[i]);
    }
    return 0;
    
    

}