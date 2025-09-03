#include<stdio.h>
#include<math.h>

int main(){
    int n , ans=0,dig;
    printf("enter the number:");
    scanf("%d",&n);
    int temp=n;


    while (n>0)
    {
        dig=n%10;
        ans+=dig*dig*dig;
        n/=10;  
    }
    if(temp==ans){
        printf("the given number is a armstrong number");
    }else{
        printf("the given number is not a armstrong number");
    }
    return 0;
}