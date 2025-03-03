#include<stdio.h>

int main(){
    int n , feb_days=0 , m , total_days=0 ;

    printf("enter a year:");
    scanf("%d",&n);
    printf("enter months:");
    scanf("%d",&m);

    if(m>12){
    printf("invalid months");
    }
    else{
        if((n%4==0 && n%100!=0)|| n%400==0)
            feb_days=29;
        else{
            feb_days=28;
        }
        
        if (m>=1)total_days=31;
        if (m>=2)total_days+=feb_days;
        if (m>=3)total_days+=31;
        if (m>=4)total_days+=30;
        if (m>=5)total_days+=31;
        if (m>=6)total_days+=30;
        if (m>=7)total_days+=31;
        if (m>=8)total_days+=31;
        if (m>=9)total_days+=30;
        if (m>=10)total_days+=31;
        if (m>=11)total_days+=30;
        if (m>=12)total_days+=31;
    }
    printf("total_days=%d",total_days);
    
    return 0;
}