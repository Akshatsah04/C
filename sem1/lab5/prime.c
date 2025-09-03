#include<stdio.h>

int main(){
    int n ;
    printf("enter the number:");
    scanf("%d",&n);

    for (int i = 2; i< n; i++)
    {
        if(n%i==0){
            printf("%d is not a prime number",n);
            break;
        }else{
            if(i==n-1){
                printf("%d is a prime number",n);
            }
        }
    }
    return 0;
}