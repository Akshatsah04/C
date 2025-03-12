#include<stdio.h>

int main(){

    int a , b ;
    int opre;

    printf("enter two number\n");
    scanf("%d%d", &a ,&b);

    printf("1.addition\n2.substraction\n3.multiply\n4.divide\n");
    scanf("%d",&opre);

    switch (opre)
    {
    case 1:
        printf("%d",a+b);
        break;
    case 2:
        printf("%d",a-b);
        break;
    case 3:
        printf("%d",a*b);
        break;
    case 4:
        printf("%.2f",1.0*a/b);
        break;
    
    default:
    printf("invalid input");
        break;
    }

    return 0;


}