#include<stdio.h>

int main(){
    float t;
    float tinh;
    float tinm;
    printf("enter time in sec\n");
    scanf("%f" , &t);

    tinm=t/60;
    tinh=t/3600;

    printf("time in mintes=%.2f\n" , tinm);
    printf("time in hours=%.2f\n" , tinh);

    
    return 0;
}

