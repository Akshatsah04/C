#include<stdio.h>

int gcd(int a , int b);

int main(){
    int a,b;
    printf("enter two number\n");
    scanf("%d%d", &a , &b);

    if (a>b)
    {
        printf("gcd of these two number is %d" , gcd(a ,b));
    }else{
        printf("gcd of these two number is %d" , gcd(b ,a));
    }
    
    return 0;

}

int gcd(int a , int b){
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
 
}