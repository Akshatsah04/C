#include<stdio.h>

int main(){
    int n ;
    printf("enter the number:");
    scanf("%d",&n);

    for (int i = n; i>= 0; i--)
    {
        if(i%2!=0){
            printf("%d  ",i);
        }
    }
    return 0;
    
}