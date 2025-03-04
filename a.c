#include<stdio.h>
int main(){
    int a,b,c,area;
    printf("enter the number\n");
    scanf("%d%d%d",&a,&b,&c);
    if (a+b>c && b+c>a && c+a>b) {
        
        printf("area =%d",(a+b+c)/2);
    }
    else {
        printf ("area is not possible");
    }
return 0;
}