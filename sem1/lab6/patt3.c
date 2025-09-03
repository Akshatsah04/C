#include<stdio.h>

int main(){
    int n , odd=1  , even=2;
    printf("enter the number of row: ");
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if(i%2==0){
                printf("%d ",odd);
                odd+=2;
            }else{
                printf("%d " , even);
                even+=2;
            }   
        }
        printf("\n");   
    }
    return 0;  
}