#include<stdio.h>

int main(){
    int a ,b;
    printf("enter two number\n");
    scanf("%d%d" ,&a,&b);

    if (a>b){
        if(a%b==0){
            printf("%d is multiple of %d", a ,b);
        }else{
            printf("%d is not a multiple of %d", a,b);
        }
    }else{
        if(b%a==0){
            printf("%d is multiple of %d" , b ,a );
        }else{
            printf("%d is not a multiple of %d", b , a);                                    
        }
        
    }
    return 0;
}