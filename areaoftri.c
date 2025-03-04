#include<stdio.h>
#include<math.h>

int main(){
    float a , b , c ;
    float s , area;
    printf("enter the sides of triangle \n");
    scanf("%f%f%f",&a , &b , &c);

    if(a+b>c && b+c>a && a+c>b){
        s=(a+b+c)/2;
        area=sqrt(s*(s-a)*(s-b)*(s-c));
        printf("area of the tringle=%.2f",area);

    }else{
        printf("tringle is not possble with this input\n");
    }

    

    return 0;
}