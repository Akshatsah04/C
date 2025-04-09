#include<stdio.h>

int main(){
    int n , a=0;
    printf("enter the number of row: ");
    scanf("%d",&n);
    for (int i = 0; i <n ; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%d ",a);
        }
        a++;
        printf("\n");
        
    }
    for (int i = 0; i <n ; i++)
    {
        a--;
        for (int j = i; j < n-1; j++)
        {
            printf("%d ",a);
            
        }
        
        printf("\n");
        
    }
    return 0;
    
}