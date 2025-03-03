#include<stdio.h>
#include<math.h>

int main(){
    int n ,d1 ,d2 , d3 , d4 , val;

    printf("enter a four digit number:");
    scanf("%d",&n);

    d1 = n/1000;
    d2 = (n/100) - (d1*10);
    d3 =(n/10) - (d1*100) - (d2*10);
    d4 = n%10;

    val = pow(d1 , 4)+pow(d2 , 4)+pow(d3 , 4)+pow(d4 , 4);

    if(val==n){
        printf("this number is an armstrong number");
    }else{
        printf("this number is not an armstrong number");
    }

    return 0;

}