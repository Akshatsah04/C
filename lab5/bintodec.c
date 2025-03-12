#include<stdio.h>

int main(){
    int n,bin,dec,digit,sum=0 ,mul=1;
    printf("1.binary to decimal\n2.decimal to binary\nchoose a converter\n");
    scanf("%d",&n);

    if(n==1){
        printf("enter the binary number\n");
        scanf("%d",&bin);
        while(bin>0){
            digit=bin%10;
            sum+=digit*mul;
            mul*=2;

            bin=bin/10;

        }
        printf("%d",sum);
    }
    else if (n==2)
    {
        printf("enter the decimal number:");
        scanf("%d",&dec);
        while (dec>0)
        {
            digit=dec%2;  
            sum+=digit*mul;
            mul*=10;

            dec=dec/2;
        }
        printf("%d",sum);
        
    }
    
    return 0;
    
}