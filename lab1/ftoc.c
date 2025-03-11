#include<stdio.h>

void main(){
    int f;

    printf("give temp in fahrenheit=\n" );
    scanf("%d" , &f );
    printf("temp in celsius=%.2f" ,(f-32)*5.0/9);
}