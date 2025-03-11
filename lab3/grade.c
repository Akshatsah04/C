#include<stdio.h>

int main(){
    int n;
    printf("enter the marks between 10 to 0 \n");
    scanf("%d",&n);

    if(n==10 || n==9){
        printf("grade = A");
    }else if(n==8 || n==7){
        printf("grade = B");
    }else if(n==6 || n==5){
        printf("grade = C");
    }else if(n==4 || n==3){
        printf("grade = D");
    }else if(n==2 || n==1 || n==0){
        printf("grade = F");
    }else{
        printf("invaild input");
    }

    return 0;
}