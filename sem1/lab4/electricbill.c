#include<stdio.h>

int main(){
    int unit , amount=0;

    printf("enter the amount of units used\n");
    scanf("%d",&unit);

    switch (unit)
    {
    case 1 ... 100:
        printf("amount=%d",amount);
        break;
    case 101 ... 200:
        printf("amount=%.2f",(unit-100)*1.5);
        break;
    case 201 ... 400:
        printf("amount=%.2f",150+(unit-200)*2.5);
        break;
    
    default:
        printf("amount=%.2f",150+500+(unit-200)*3.5);
        break;
    }

    return 0;


}