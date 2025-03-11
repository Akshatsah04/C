#include<stdio.h>

int main(){
    int inter , amount=200;

    printf("enter the amount of interner used\n");
    scanf("%d",&inter);

    switch (inter)
    {
    case 1 ... 100:
        printf("amount=%d",amount);
        break;
    case 101 ... 150:
        printf("amount=%.2f",amount+(inter-100)*0.6);
        break;
    case 151 ... 200:
        printf("amount=%.2f",amount+30+(inter-150)*0.5);
        break;
    
    default:
        printf("amount=%.2f",amount+30+25+(inter-200)*0.4);
        break;
    }

    return 0;


}