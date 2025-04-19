#include<stdio.h>

int swap(int *a , int *b){
    int t=*a;
    *a=*b;
    *b=t;
}

int main(){
    int a ,b;
    printf("enter input for a and b\n");
    scanf("%d%d", &a ,&b);

    printf("a and b are %d and %d",a , b);
    swap(&a , &b);
    printf("a and b are %d and %d",a , b);

}