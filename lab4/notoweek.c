#include<stdio.h>

int main(){
    int n;

    printf("enter the number between 1 and 7\n");
    scanf("%d",&n);

    switch (n)
    {
    case 1:
        printf("sunday");
        break;
    case 2:
        printf("monday");
        break;
    case 3:
        printf("tuesday");
        break;
    case 4:
        printf("wednesday");
        break;
    case 5:
        printf("thursday");
        break;
    case 6:
        printf("friday");
        break;
    case 7:
        printf("saturday");
        break;
    
    default:
        printf("invalid input");
        break;
    }

    return 0;
}