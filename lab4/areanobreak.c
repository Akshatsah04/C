#include<stdio.h>
#include<math.h>

int main(){
    int n ;
    float s, r=0 ,a=0 ,b=0 ,c=0 , l=0;
    printf("1.area of circle\n2.area of triangle\n3.area of rectangle\nwhich shape area do you want to know\n");
    scanf("%d",&n);

    switch (n)
    {
    case 1:
        printf("enter the value of radius:");
        scanf("%f",&r);
        printf("area of the circle=%0.2f\n",3.14*r*r);


    case 2:
        printf("enter the sides of triangle with space:");
        scanf("%f%f%f",&a,&b,&c);
        if(a+b>c && b+c>a && a+c>b){
        s=(a+b+c)/2;
        printf("area of the tringle=%.2f\n",sqrt(s*(s-a)*(s-b)*(s-c)));
        }else{
        printf("tringle is not possble with this input\n");
        }
    case 3:
        printf("enter the value of length and breath:");
        scanf("%f%f",&l , &b);
        printf("area of the rectangle=%.2f\n",l*b);
    
    default:
        printf("not a valid input");
 
    }

    return 0;
}