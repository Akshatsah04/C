#include<stdio.h>

int main(){
    int call , amount=0;

    printf("enter the amount of call\n");
    scanf("%d",&call);

    switch (call)
    {
    case 1 ... 150:
        printf("amount=%d",amount);
        break;
    case 151 ... 250:
        printf("amount=%.2f",(call-150)*0.9);
        break;
    case 251 ... 400:
        printf("amount=%.2f",90+(call-250)*1.2);
        break;
    
    default:
        printf("amount=%.2f",90+240+(call-400)*1.5);
        break;
    }

    return 0;


}