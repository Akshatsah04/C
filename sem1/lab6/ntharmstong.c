#include<stdio.h>

int main(){
    int n,count=0,a=0,sum=0;
    printf("enter the number: ");
    scanf("%d",&n);
    while (count<n)
    {
        int temp=a;
        while (temp>0)
        {
            int dig =temp%10;
            sum+=dig*dig*dig;
            temp/=10;
        }
        if(sum==a){
            printf("%d ",a);
            count++;
        }
        a++;
        sum=0;
    }
    return 0;    
}
