#include<stdio.h>

int factorial(int n){
    int ans=1;
    for(int i =1;i<=n;i++){
        ans*=i;
    }
    return ans;
}

int main(){
    int n , out;
    printf("enter the numbers: ");
    scanf("%d",&n);

    out=factorial(n);
    printf("%d",out);

    return 0;

}