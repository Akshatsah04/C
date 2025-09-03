#include<stdio.h>
#include<math.h>

int main(){
    
    int a , b , c;
    float r1 , r2 , d;

    printf("enter a , b , c\n");
    scanf("%d%d%d", &a , &b ,&c );

    d=(pow(b,2)-4*a*c);

    if(d>0){
        r1 =(-b+sqrt(d))/(2*a);
        r2 =(-b-sqrt(d))/(2*a);
        printf("first root=%.2f\n",r1);
        printf("second root=%.2f\n",r2);
    }else{
        printf("imaginary roots");
    }

    return 0;

}