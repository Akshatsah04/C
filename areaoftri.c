#include<stdio.h>
#include<math.h>

int main(){
    int a , b , c ;
    float s , area;
    printf("enter the sides of triange \n");
    scanf("%d%d%d",&a , &b , &c);

    if(a+b>c && b+c>a && a+c>b){
        s=(a+b+c)/2;
        area=sqrt(s*(s-a)*(s-b)*(s-c));
        printf("area of the tringle=%.2f",area);

    }else{
        printf("tringle is not possble with this input\n");
    }

    

    return 0;
}