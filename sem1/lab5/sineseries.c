#include<stdio.h>

int main(){
    int n ,x , sum=0 ;
    printf("enter the number of term:");
    scanf("%d",&n);
    printf("enter the value of X:");
    scanf("%d",&x);

    int curr=x;

    for(int i =0;i<n; i++){
        if(i%2==0){
            sum +=curr; 
        }else{
            sum-=curr;
        }
        curr*=x*x;
    }
    printf("sum=%d",sum);
    return 0;
}