#include<stdio.h>

int main(){
    int cost , discount=0;

    printf("enter the cost price\n");
    scanf("%d",&cost);

    switch (cost)
    {
    case 1 ... 499:
        printf("discount amount=%d\n",discount);
        printf("net cost price after disount=%d",cost);
        break;
    case 500 ... 800:
        printf("discount amount=%.2f\n",cost*0.2);
        printf("net cost price after disount=%.2f",cost-cost*0.2); 
        break;
    
    default:
        printf("discount amount=%.2f\n",cost*0.25);
        printf("net cost price after disount=%.2f",cost-cost*0.25);
        break;
    }

    return 0;


}