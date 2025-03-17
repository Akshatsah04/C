#include<stdio.h>

int main(){
    int n , rev=0,dig;
    printf("enter the number:");
    scanf("%d",&n);
    int temp=n;

    while (n>0)
    {
        dig=n%10;
        rev=rev*10+dig;
        n/=10;  
    }
    if(temp==rev){
        printf("the given number is a palindrome");
    }else{
        printf("the given number is not a palindrome");
    }
    return 0;
}