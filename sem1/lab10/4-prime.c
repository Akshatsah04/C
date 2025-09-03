#include<stdio.h>

int prime(int n);

int main(){
    int n ,count =0, a =2;
    printf("enter the number prime number you want to print: ");
    scanf("%d", &n);
    while (count<n)
    {
        if (prime(a)==1)
        {
            printf("%d ",a);
            count++;
        }
        a++;

    }
    return 0;
    

}

int prime(int n){
    if (n<2)
    {
        return 0;
    }
    
    int prime=1;
    for (int i = 2; i < n; i++)
    {
        if (n%i==0)
        {
            prime=0;
        }
        
    }
    return prime;
}